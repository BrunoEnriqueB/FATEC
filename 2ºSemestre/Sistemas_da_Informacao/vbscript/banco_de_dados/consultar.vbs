dim db, rs, mysql, entrada_cpf, entrada_nome, entrada_idade, resp

call conectar_banco

sub conectar_banco

    resp = cint(inputbox("[1] MYSQL" + vbNewLine &_
                         "[2] ENCERRAR SCRIPT", "ESCOLHA SUA CONEX?O"))
    
    select case resp
        case 1:
            set db=CreateObject("ADODB.Connection")
            db.open("Driver={MySQL ODBC 8.0 Unicode Driver};Server=localhost;PORT=3312;Database=beto;User=root;Password=")
            msgbox("Conex?o com MYSQL"  + vbnewline & _
                   "Feita com Sucesso!!!"), vbInformation + vbOKOnly, "AVISO"
        case 2:
            WScript.Quit
    end select
    call consulta_dados
end Sub

sub consulta_dados()
    entrada_cpf = inputbox("Digite o CPF do cliente", "CONSULTA DE CLIENTES")

    mysql = "select * from cadastro where CPF='" & entrada_cpf & "'" 
    set rs = db.execute(mysql)

    if rs.EOF=false Then
        msgbox("CPF: " & rs.fields(0).value & "" + vbnewline &_
               "Nome: " & rs.fields(1).value & "" + vbnewline &_
               "Idade" & rs.fields(2).value & ""), vbExclamation + vbOKOnly, "ATEN??O"
    Else
       msgbox("CPF: " & entrada_cpf &" não encontrado!"), vbInformation + vbOKOnly, "ATENÇÃO"
    end If

    call continuar()

end Sub

sub continuar()
    resp=msgbox("Deseja consultar outro cliente?" + vbnewline &_
                "no mesmo banco de dados?", vbquestion + vbyesno, "ATEN??O")
    if resp=vbYes Then
        call consulta_dados
    Else
        call conectar_banco
    end If
end Sub
