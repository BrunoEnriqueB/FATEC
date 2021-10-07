Imports MySql.Data.MySqlClient

Module Module1
    Public db As New ADODB.Connection
    Public rs As New ADODB.Recordset
    Public sql As String

    Sub conectar_banco()
        Try
            db = CreateObject("ADODB.Connection")
            db.Open("Driver={MySQL ODBC 8.0 Unicode Driver};Server=localhost;PORT=3312;Database=cadastro_clientes_adsma2;User=root;Password=")
            MsgBox("Conexão com Banco de Dados estabelecida!", MsgBoxStyle.Information + MsgBoxStyle.OkOnly, "AVISO")
        Catch ex As Exception
            MsgBox("Conexão com Banco de Dados FALHA!", MsgBoxStyle.Information + MsgBoxStyle.OkOnly, "ATENÇÁO")
        End Try
    End Sub

End Module
