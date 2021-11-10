Module Module1
    Public db As ADODB.Connection
    Public rs As ADODB.Recordset

    Public resp, diretorio, sql As String
    Public cont As Integer

    Function conectar_banco()
        Try
            db = CreateObject("ADODB.Connection")
            db.Open("Driver={MySQL ODBC 8.0 Unicode Driver};Server=localhost;PORT=3312;Database=beto_vbnet;User=root;Password=")
            MsgBox("Conexão com Mysql executada", MsgBoxStyle.Information + MsgBoxStyle.OkOnly, "Aviso")
        Catch ex As Exception
            MsgBox("Erro ao conectar!", MsgBoxStyle.Critical + MsgBoxStyle.OkOnly, "Aviso")
        End Try
    End Function

    Sub carregar_dados()
        Try
            sql = "SELECT * from tb_cadastro ORDER BY nome asc"
            rs = db.Execute(sql)
            With frm_clientes.dgv_dados
                cont = 1
                .Rows.Clear()
                Do While rs.EOF = False
                    .Rows.Add(cont, rs.Fields(0).Value, rs.Fields(1).Value, Nothing, Nothing)
                    rs.MoveNext()
                    cont = cont + 1
                Loop
            End With
        Catch ex As Exception
            MsgBox("Erro ao conectar!", MsgBoxStyle.Critical + MsgBoxStyle.OkOnly, "Aviso")
        End Try

    End Sub
End Module
