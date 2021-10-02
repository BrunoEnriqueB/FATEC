dim resp, num, nummenos, nummais
dim audio

call main()

sub main()
    nummenos = 0
    nummais = 0
    set audio=CreateObject("SAPI.SPVOICE")
    audio.volume = 100
    audio.rate = 2
    resp = msgbox("Deseja utilizar áudio?", vbquestion + vbyesno, "ATENÇÃO")
    if resp = vbyes then 
        audio.speak("Digite o número ")
        num = cdbl(inputbox("Digite o número: ", "AVISO"))
        call ante_suce(num, nummenos, nummais)
        audio.speak("O número anterior é: " & nummenos & " e o próximo número é: " & nummais & "")
    else
        num = cdbl(inputbox("Digite o número: ", "AVISO"))
        call ante_suce(num, nummenos, nummais)
    end if
    msgbox("O número anterior é: " & nummenos & "" + vbnewline & _
            "e o próximo número é: " & nummais & ""), vbinformation + vbokonly, "ATENÇÃO"
end sub

function ante_suce(num, nummenos, nummais)
    nummenos = num - 1
    nummais = num + 1
end function
