Public Class frm_clientes
    Private Sub img_foto_Click(sender As Object, e As EventArgs) Handles img_foto.Click
        Try
            With OpenFileDialog1
                .Title = "SELECIONE UMA FOTO"
                .InitialDirectory = Application.StartupPath & "..\fotos\"
                .ShowDialog()
                diretorio = Replace(.FileName, "\", "\\")
                img_foto.Load(diretorio)
            End With
        Catch ex As Exception
            Exit Sub
        End Try
    End Sub

    Private Sub frm_clientes_Load(sender As Object, e As EventArgs) Handles Me.Load
        Call conectar_banco()
        Call carregar_dados()
    End Sub

    Private Sub txt_cep_LostFocus(sender As Object, e As EventArgs) Handles txt_cep.LostFocus
        Try
            sql = "Select * from tb_cep where cep= '" & txt_cep.Text & "'"
            rs = db.Execute(sql)
            If rs.EOF Then
                MsgBox("CEP" & txt_cep.Text & " não encontrado!", MsgBoxStyle.Information + MsgBoxStyle.OkOnly, "AVISO")
            Else
                txt_endereco.Text = rs.Fields(1).Value
                txt_bairro.Text = rs.Fields(3).Value
                txt_cidade.Text = rs.Fields(2).Value
                txt_uf.Text = rs.Fields(4).Value
                txt_complemento.Focus()
            End If
        Catch ex As Exception
            MsgBox("Erro ao processar o código!", MsgBoxStyle.Critical + MsgBoxStyle.OkOnly, "ATENÇÃO!")
        End Try
    End Sub

    Private Sub btn_gravar_Click(sender As Object, e As EventArgs) Handles btn_gravar.Click
        Try
            sql = "select * from tb_cadastro where cpf='" & txt_cpf.Text & "'"
            rs = db.Execute(sql)
            If rs.EOF = False Then
                MsgBox("CPF: " & txt_cpf.Text & " já existe na base de dados!", MsgBoxStyle.Exclamation + MsgBoxStyle.OkOnly, "ATENÇÃO!")
            Else
                If txt_cpf.Text = "" Or
               txt_data.Text = "" Or
               txt_nome.Text = "" Or
               txt_cep.Text = "" Or
               txt_endereco.Text = "" Or
               txt_complemento.Text = "" Or
               txt_bairro.Text = "" Or
               txt_cidade.Text = "" Or
               txt_uf.Text = "" Or
               txt_residencial.Text = "" Or
               txt_celular.Text = "" Or
               txt_email.Text = "" Then
                    MsgBox("Preencha todos os campos!", MsgBoxStyle.Information + MsgBoxStyle.OkOnly, "AVISO!")
                Else
                    sql = "insert into tb_cadastro values ('" & txt_cpf.Text & "', '" & txt_nome.Text & "', '" & txt_data.Text & "'," &
                                                   "'" & txt_endereco.Text & "', '" & txt_complemento.Text & "', '" & txt_bairro.Text & "'," &
                                                   "'" & txt_cidade.Text & "', '" & txt_uf.Text & "', '" & txt_cep.Text & "'," &
                                                   "'" & txt_residencial.Text & "', '" & txt_celular.Text & "', '" & txt_email.Text & "', '" & diretorio & "') "
                    rs = db.Execute(UCase(sql))
                    MsgBox("Dados cadastrados com sucesso!", MsgBoxStyle.Exclamation + MsgBoxStyle.OkOnly, "ATENÇÃO")
                    Call carregar_dados()
                    Call limpar_cadastro()
                End If
            End If

        Catch ex As Exception
            MsgBox("Erro ao processar o codigo!", MsgBoxStyle.Critical + MsgBoxStyle.OkOnly, "ATENÇÃO!")
        End Try
    End Sub
    Function limpar_cadastro()
        With Me
            .txt_cpf.Clear()
            .txt_data.ResetText()
            .txt_nome.Clear()
            .txt_cep.Clear()
            .txt_endereco.Clear()
            .txt_complemento.Clear()
            .txt_bairro.Clear()
            .txt_cidade.Clear()
            .txt_uf.Clear()
            .txt_residencial.Clear()
            .txt_celular.Clear()
            .txt_email.Clear()
            .img_foto.Load(Application.StartupPath & "..\\fotos\\user-add-icon.png")
            .txt_cpf.Focus()
        End With
    End Function

    Private Sub txt_busca_TextChanged(sender As Object, e As EventArgs) Handles txt_busca.TextChanged
        Try
            sql = "SELECT * from tb_cadastro where nome like '" & txt_busca.Text & "%' order by nome asc"
            rs = db.Execute(sql)
            With dgv_dados
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

    Private Sub txt_cpf_LostFocus(sender As Object, e As EventArgs) Handles txt_cpf.LostFocus
        Try
            sql = "SELECT * FROM tb_cadastro WHERE cpf = '" & txt_cpf.Text & "'"
            rs = db.Execute(sql)
            If rs.EOF = True Then
                txt_nome.Focus()
            Else
                txt_nome.Text = rs.Fields(1).Value
                txt_data.Text = rs.Fields(2).Value
                txt_endereco.Text = rs.Fields(3).Value
                txt_complemento.Text = rs.Fields(4).Value
                txt_bairro.Text = rs.Fields(5).Value
                txt_cidade.Text = rs.Fields(6).Value
                txt_uf.Text = rs.Fields(7).Value
                txt_cep.Text = rs.Fields(8).Value
                txt_residencial.Text = rs.Fields(9).Value
                txt_celular.Text = rs.Fields(10).Value
                txt_email.Text = rs.Fields(11).Value
                img_foto.Load(rs.Fields(12).Value)
            End If
        Catch ex As Exception
            MsgBox("Erro ao processar!", MsgBoxStyle.Critical + MsgBoxStyle.OkOnly, "Aviso")
        End Try
    End Sub
End Class
