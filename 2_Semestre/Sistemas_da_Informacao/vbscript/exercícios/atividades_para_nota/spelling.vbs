dim audio, cont, cont2, random, usuario, resposta, acertos, ouvir, pular, nivel, contador
dim vetor_niv1(9)
dim vetor_niv2(9)
dim vetor_niv3(9)
dim sorteia_nivel1(4)
dim sorteia_nivel2(4)
dim sorteia_nivel3(4)
dim vetor_usados(4)

call carregar_audio()


sub carregar_audio()

    set audio=CreateObject("SAPI.SPVOICE")
    audio.volume = 100
    audio.rate = 1
    call carregar_vetores()

end sub

sub carregar_vetores()

    vetor_niv1(0) = "java"
    vetor_niv1(1) = "batata"
    vetor_niv1(2) = "teclado"
    vetor_niv1(3) = "salgadinho"
    vetor_niv1(4) = "monitor"
    vetor_niv1(5) = "água"
    vetor_niv1(6) = "cama"
    vetor_niv1(7) = "régua"
    vetor_niv1(8) = "arroz"
    vetor_niv1(9) = "cabeça"

    vetor_niv2(0) = "estojo"
    vetor_niv2(1) = "ventilador"
    vetor_niv2(2) = "função"
    vetor_niv2(3) = "excel"
    vetor_niv2(4) = "access"
    vetor_niv2(5) = "python"
    vetor_niv2(6) = "typescript"
    vetor_niv2(7) = "banheiro"
    vetor_niv2(8) = "cozinha"
    vetor_niv2(9) = "fatec"

    vetor_niv3(0) = "hipopótamo"
    vetor_niv3(1) = "travesseiro"
    vetor_niv3(2) = "papibaquígrafo"
    vetor_niv3(3) = "world"
    vetor_niv3(4) = "javascript"
    vetor_niv3(5) = "chrome"
    vetor_niv3(6) = "whatsapp"
    vetor_niv3(7) = "unicamp"
    vetor_niv3(8) = "vscode"
    vetor_niv3(9) = "piscina"

    call jogo()
end Sub

sub jogo()

    acertos = 0
    ouvir = 0
    pular = 0

    usuario = InputBox("Digite o nome do jogador: ", "ATENÇÃO")
    nivel = 1
    call sorteia_palavra(sorteia_nivel1, vetor_niv1)
    call niveis(sorteia_nivel1)
    call passou_nivel()
    nivel = 2
    call sorteia_palavra(sorteia_nivel2, vetor_niv2)
    call niveis(sorteia_nivel2)
    call passou_nivel()
    nivel = 3 
    call sorteia_palavra(sorteia_nivel3, vetor_niv3)
    call niveis(sorteia_nivel3)
    call ganhou()

end sub

sub sorteia_palavra(vetor_palavra, vetor_nivel)

    for cont2=0 to 4
        Randomize(Second(Time))
        random = int(rnd * 9)
        if (pular=1) then
                for contador=0 to 4
                   if (vetor_nivel(random) = vetor_usados(contador)) Then
                        cont2 = 0
                    end If
                next
        Else
            for cont=0 to 4
                if (vetor_palavra(cont) = vetor_nivel(random)) Then
                    cont2 = 0
                end if
            next
        end if
        vetor_palavra(cont2) = vetor_nivel(random)
    Next

end sub

sub falar(palavra)
    audio.speak("A palavra é: " & palavra)

end sub

sub mensagem(resposta)
    resposta = InputBox("DIGITE A PALAVRA OUVIDA" + vbNewLine & _
                   "====================================" + vbNewLine & _
                   "[O]Ouvir novamente" + vbNewLine & _
                   "[P]Pular a palavra uma única vez" + vbNewLine & _
                    "====================================", usuario)
End sub ' resposta

sub perdeu()
    msgbox("você perdeu" + vbNewLine & _
           "Quantidade de acertos: " & acertos & "" + vbNewLine & _
            "Nivel: " & nivel), vbInformation + vbOKOnly, "ATENÇÃO"
    resposta = msgbox("DESEJA JOGAR NOVAMENTE?", vbQuestion + vbYesNo, "ATENÇÃO")
    if (resposta = vbyes) Then
        call jogo()
    Else
        WScript.Quit
    end if
end Sub

sub ganhou()
    msgbox("você ganhou!!" + vbNewLine & _
           "Quantidade de acertos: " & acertos & "" + vbNewLine & _
            "Nivel: " & nivel), vbInformation + vbOKOnly, "ATENÇÃO"
    resposta = msgbox("DESEJA JOGAR NOVAMENTE?", vbQuestion + vbYesNo, "ATENÇÃO")
    if (resposta = vbyes) Then
        call jogo()
    Else
        WScript.Quit
    end if
end Sub

sub acertou() 
    acertos = acertos + 1
     msgbox("Parabens você acertou!" + vbNewLine & _
           "Quantidade de acertos: " & acertos & " de 15"), vbInformation + vbOKOnly, "ATENÇÃO"
    ouvir = 0
end sub

sub niveis(vetor)

    for cont=0 to 4
        call falar(vetor(cont))
        vetor_usados(cont) = vetor(cont)
        call mensagem(resposta)
        if (ucase(resposta) = "O") then 
            if (ouvir = 0) then
                cont = cont - 1
                ouvir = 1
            Else
                msgbox("você ja ouviu uma vez nessa rodada!"), vbInformation + vbOKOnly, "AVISO"
                call perdeu()
            end if
        elseif (ucase(resposta) = "P") Then
            if (pular = 0) Then
                cont = cont - 1
                pular = 1
                Select Case nivel:
                    Case 1
                        call sorteia_palavra(sorteia_nivel1, vetor_niv1)
                    Case 2
                        call sorteia_palavra(sorteia_nivel2, vetor_niv2)
                    Case 3
                        call sorteia_palavra(sorteia_nivel3, vetor_niv3)
                end select
                pular = 2
            Else
                msgbox("você ja pulou uma vez nesse jogo!"), vbInformation + vbOKOnly, "AVISO"
                call perdeu()
            end If
        elseif (LCase(resposta) <> vetor(cont)) Then
            call perdeu()
        elseif (LCase(resposta) = vetor(cont)) Then
            call acertou()
        end if
    Next

end sub

sub passou_nivel()
     msgbox("Parabens você passou de nivel!" + vbNewLine & _
           "Nivel: " & nivel & " de 3"), vbInformation + vbOKOnly, "ATENÇÃO"
end sub