'Declarar variáveis locais
dim n1, n2, n3, media, situacao, resp
call entrada_notas

sub entrada_notas()
    n1 = cdbl(inputbox("Digite a nota 1", "AVISO"))
    n2 = cdbl(inputbox("Digite a nota 2", "AVISO"))
    n3 = cdbl(inputbox("Digite a nota 3", "AVISO"))
    media = round((n1+n2+n3)/3,1)

    if media < 4 then
        situacao = "Reprovado"
    elseif media >= 4 and media < 6 then
        situacao="Exame"
    else
        sitacao="Aprovado"
    end if

    msgbox("Rendimentodo aluno" + vbnewline & _
           "==================" + VBNEWLINE & _
           "Média do aluno: " & media & "" + vbnewline & _
           "Situação do aluno: " & situacao &""), vbinformation + vbokonly, "AVISO" 
    
    call pergunta
end sub

sub pergunta()
    resp= msgbox("Deseja realizar um novo cálculo? ", vbquestion + vbyesno, "ATENÇÃO")

    if resp = vbyes then
        call entrada_notas()
    else
        wscript.quit
    end if
end sub