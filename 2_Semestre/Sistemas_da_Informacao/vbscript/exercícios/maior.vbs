dim resp, n1, n2, n3, verifica_maior
dim audio

call main()

sub main()
    set audio=CreateObject("SAPI.SPVOICE")
    audio.volume = 100
    audio.rate = 2
    resp = msgbox("Deseja utilizar �udio?", vbquestion + vbyesno, "ATEN��O")
    if resp = vbyes then 
        audio.speak("Digite a n�mero 1")
        n1 = cdbl(inputbox("Digite o n�mero 1: ", "AVISO"))
        audio.speak("Digite o n�mero 2")
        n2 = cdbl(inputbox("Digite o n�mero 2: ", "AVISO"))
        audio.speak("Digite o n�mero 3")
        n3 = cdbl(inputbox("Digite o n�mero 3: ", "AVISO"))
        call verificar_maior(n1, n2, n3, maior)
        audio.speak("O maior o n�mero �: " & maior &"")
    else
         n1 = cdbl(inputbox("Digite o n�mero 1: ", "AVISO"))
         n2 = cdbl(inputbox("Digite o n�mero 2: ", "AVISO"))
         n3 = cdbl(inputbox("Digite o n�mero 3: ", "AVISO"))
         call verificar_maior(n1, n2, n3, maior)
    end if
    msgbox("O maior o n�mero �: " & maior &""), vbinformation + vbokonly, "Aten��o"
end sub

function verificar_maior(nota1, nota2, nota3, nota4)
     if nota1 > nota2 and nota1 > nota3 then
        nota4 = n1
    elseif nota2 > nota1 and nota2 > nota3 then
        nota4 = n2
    else
        nota4 = nota3
    end if
end function