dim db, rs, mysql, entrada_cpf, entrada_nome, entrada_idade, resp

call conectar_banco

sub conectar_banco

    resp = cint(inputbox("[1] MYSQL" + vbNewLine &_
                         "[2] ENCERRAR SCRIPT", "ESCOLHA SUA CONEXÃO"))
    
    select case resp
        case 1:
            set db=CreateObject("ADODB.Connection")
            db.open("Driver={MySQL ODBC 8.0 Unicode Driver};Server=localhost;PORT=3312;Database=beto;User=root;Password=")
            msgbox("Conexão com MYSQL"  + vbnewline & _
                   "Feita com Sucesso!!!"), vbInformation + vbOKOnly, "AVISO"
        case 2:
            WScript.Quit
    end select
    call gravar_dados
end Sub

sub gravar_dados()
    entrada_cpf = inputbox("Digite o CPF do cliente", "CADASTRO DE CLIENTES")
    entrada_nome = inputbox("Digite o Nome do cliente", "CADASTRO DE CLIENTES")
    entrada_idade = inputbox("Digite a idade do cliente", "CADASTRO DE CLIENTES")

    mysql = "select * from cadastro where CPF='" & entrada_cpf & "'" 
    set rs = db.execute(mysql)

    if rs.EOF=false Then
        msgbox("CPF já cadastro na base de dados!"), vbExclamation + vbOKOnly, "ATENÇÃO"
        call gravar_dados
    Else
        mysql="insert into cadastro values('" & entrada_cpf & "', '" & entrada_nome & "', " & entrada_idade & ")"

        set rs=db.execute(ucase(mysql))

        msgbox("Cliente cadastrado com sucesso!"), vbInformation + vbOKOnly, "ATENÇÃO  "
    end If

    call continuar()
end Sub

sub continuar()
    resp=msgbox("Deseja cadastro novo cliente?" + vbnewline &_
                "no mesmo banco de dados?", vbquestion + vbyesno, "ATENÇÃO")
    if resp=vbYes Then
        call gravar_dados
    Else
        call conectar_banco
    end If
end Sub
