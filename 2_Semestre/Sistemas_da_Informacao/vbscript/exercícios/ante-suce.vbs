dim resp, num, nummenos, nummais
dim audio

call main()

sub main()
    nummenos = 0
    nummais = 0
    set audio=CreateObject("SAPI.SPVOICE")
    audio.volume = 100
    audio.rate = 2
    resp = msgbox("Deseja utilizar �udio?", vbquestion + vbyesno, "ATEN��O")
    if resp = vbyes then 
        audio.speak("Digite o n�mero ")
        num = cdbl(inputbox("Digite o n�mero: ", "AVISO"))
        call ante_suce(num, nummenos, nummais)
        audio.speak("O n�mero anterior �: " & nummenos & " e o pr�ximo n�mero �: " & nummais & "")
    else
        num = cdbl(inputbox("Digite o n�mero: ", "AVISO"))
        call ante_suce(num, nummenos, nummais)
    end if
    msgbox("O n�mero anterior �: " & nummenos & "" + vbnewline & _
            "e o pr�ximo n�mero �: " & nummais & ""), vbinformation + vbokonly, "ATEN��O"
end sub

function ante_suce(num, nummenos, nummais)
    nummenos = num - 1
    nummais = num + 1
end function
