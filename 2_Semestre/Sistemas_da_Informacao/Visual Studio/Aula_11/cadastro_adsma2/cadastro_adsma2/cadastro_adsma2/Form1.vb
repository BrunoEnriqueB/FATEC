Imports System.ComponentModel

Public Class Form1
    Private Sub Form1_Load(sender As Object, e As EventArgs) Handles MyBase.Load
        Call conectar_banco()
    End Sub

    Private Sub btn_excluir_Click(sender As Object, e As EventArgs) Handles btn_excluir.Click
        Try
            resp = MsgBox("Deseja realmente exlcuir os dados?", MsgBoxStyle.Question + MsgBoxStyle.YesNo, "ATENÇÃO")
            If resp = MsgBoxResult.Yes Then
                sql = "select * from tb_clientes where cpf='" & txt_cpf.Text & "'"
                rs = db.Execute(sql)
                If rs.EOF = True Then
                    MsgBox("CPF: " & txt_cpf.Text & "" + vbNewLine &
                       "Não existe no nosso registro de dados!", MsgBoxStyle.Information + MsgBoxStyle.OkOnly, "ATENÇÃO!")
                Else
                    sql = "delete from tb_clientes where cpf='" & txt_cpf.Text & "'"
                    rs = db.Execute(sql)
                    MsgBox("Os dados foram excluídos com sucesso!", MsgBoxStyle.Information + MsgBoxStyle.OkOnly, "ATENÇÃO")
                    limpar_cadastro()
                End If
            End If
        Catch ex As Exception
            MsgBox("Erro ao procurar os dados!", MsgBoxStyle.Information + MsgBoxStyle.OkOnly, "ATENÇÃO")
        End Try
    End Sub

    Private Sub btn_buscar_Click(sender As Object, e As EventArgs) Handles btn_buscar.Click
        Try
            sql = "select * from tb_clientes where cpf='" & txt_cpf.Text & "'"
            rs = db.Execute(sql)
            If rs.EOF = True Then
                MsgBox("CPF: " & txt_cpf.Text & "" + vbNewLine &
                       "Não existe no nosso registro de dados!", MsgBoxStyle.Information + MsgBoxStyle.OkOnly, "ATENÇÃO!")
                txt_cpf.Clear()
                txt_cpf.Focus()
            Else
                txt_nome.Text = rs.Fields(1).Value
                txt_email.Text = rs.Fields(2).Value
                btn_excluir.Enabled = True
            End If
        Catch ex As Exception
            MsgBox("Erro ao procurar os dados!", MsgBoxStyle.Information + MsgBoxStyle.OkOnly, "ATENÇÃO")
        End Try
    End Sub

    Private Sub btn_gravar_Click(sender As Object, e As EventArgs) Handles btn_gravar.Click
        Try
            sql = "select * from tb_clientes where cpf='" & txt_cpf.Text & "'"
            rs = db.Execute(sql)
            If rs.EOF = False Then
                sql = "update tb_clientes set nome='" & txt_nome.Text & "', email='" & txt_nome.Text & "' where cpf='" & txt_cpf.Text & "'"
                rs = db.Execute(sql)
                MsgBox("Dados alterados com sucesso!", MsgBoxStyle.Exclamation + MsgBoxStyle.OkOnly, "AVISO")
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
            .btn_excluir.Enabled = False
        End With
    End Sub

    Private Sub txt_cpf_DoubleClick(sender As Object, e As EventArgs) Handles txt_cpf.DoubleClick
        limpar_cadastro()
    End Sub


    Private Sub txt_cpf_LostFocus(sender As Object, e As EventArgs) Handles txt_cpf.LostFocus
        sql = "select * from tb_clientes where cpf='" & txt_cpf.Text & "'"
        rs = db.Execute(sql)
        If rs.EOF = False Then
            txt_nome.Text = rs.Fields(1).Value
            txt_email.Text = rs.Fields(2).Value
            btn_excluir.Enabled = True
        End If
    End Sub
End Class
