Public Class Form1
    Private Sub Form1_Load(sender As Object, e As EventArgs) Handles MyBase.Load
        Call conectar_banco()
    End Sub

    Private Sub btn_excluir_Click(sender As Object, e As EventArgs) Handles btn_excluir.Click

    End Sub

    Private Sub btn_buscar_Click(sender As Object, e As EventArgs) Handles btn_buscar.Click

    End Sub

    Private Sub btn_gravar_Click(sender As Object, e As EventArgs) Handles btn_gravar.Click
        Try
            sql = "select * from tb_clientes where cpf='" & txt_cpf.Text & "'"
            rs = db.Execute(sql)
            If rs.EOF = False Then
                MsgBox("CPF: " & txt_cpf.Text & "" + vbNewLine &
                   "Já cadastrado", MsgBoxStyle.Information + MsgBoxStyle.OkOnly, "ATENÇÃO")
            Else
                sql = "insert into tb_clientes values ('" & txt_cpf.Text & "','" & txt_nome.Text & "','" & txt_email.Text & "')"
                rs = db.Execute(UCase(sql))
                MsgBox("Cliente cadastrado com sucesso!", MsgBoxStyle.Information + MsgBoxStyle.OkOnly, "AVISO")
                limpar_cadastro()
            End If
        Catch ex As Exception
            MsgBox("Erro ao gravar os dados!", MsgBoxStyle.Information + MsgBoxStyle.OkOnly, "ATENÇÃO")
        End Try
    End Sub

    Sub limpar_cadastro()
        With Me
            .txt_cpf.Clear()
            .txt_nome.Clear()
            .txt_email.Clear()
            .txt_cpf.Focus()
        End With
    End Sub

End Class
