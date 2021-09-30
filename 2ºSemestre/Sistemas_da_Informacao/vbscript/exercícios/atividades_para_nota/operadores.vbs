dim random, numero1, numero2, cont, resultado, operador, acertos, resposta
acertos = 0

call main()

sub main()
    Randomize(Second(time))
    random = int(rnd * 3) + 1
    numero1 = int(rnd * 10) + 1
    numero2 = int(rnd * 10) + 1

    Select Case random
        case 1
            resultado = numero1 - numero2
            operador = "-"
        case 2
            resultado = numero1 + numero2
            operador = "+"
        case 3
            resultado = numero1 * numero2
            operador = "*"
    end select

    call jogo()
end sub

sub jogo()
    resposta = InputBox("=========================" + vbNewLine & _
            "ACERTO O RESULTADO MATEMÁTICO" + vbNewLine & _
            "=========================" + vbNewLine & _
            "        "& numero1 & " " & operador & " " & numero2 & " = ??" + vbNewLine & _
            "=========================", "OPERADOR MATEMÁTICO")
    if int(resposta) <> resultado Then
        call perdeu()
    Else
        call ganhou()
    end if
end sub

sub ganhou()   
    acertos = acertos + 1 
    msgbox("Parabéns!" + vbNewLine & _
            "Você têm: " & acertos & " ponto(s)"), vbInformation + vbOKOnly, "ATENÇÃO"
    Call main()
end Sub

sub perdeu()
     msgbox("Que pena, você errou." + vbNewLine & _
            "Seu placar é de: " & acertos & " ponto(s)"), vbInformation + vbOKOnly, "ATENÇÃO"
    resposta = msgbox("Deseja jogar novamente?", vbQuestion + vbyesno, "ATENÇÃO")
    if resposta = vbyes Then
        acertos = 0
        call main()
    Else
        WScript.Quit
    end if
end Sub