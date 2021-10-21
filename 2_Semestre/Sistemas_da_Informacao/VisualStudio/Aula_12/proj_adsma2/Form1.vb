Public Class Form1
    Private Sub ClientesToolStripMenuItem_Click(sender As Object, e As EventArgs) Handles ClientesToolStripMenuItem.Click
        frm_clientes.ShowDialog()
    End Sub

    Private Sub SairDoSistemaToolStripMenuItem_Click(sender As Object, e As EventArgs) Handles SairDoSistemaToolStripMenuItem.Click
        Try
            resp = MsgBox("Deseja sair do sistema?", MsgBoxStyle.Question + MsgBoxStyle.YesNo, "ATENÇÃO")
            If (resp = MsgBoxResult.Yes) Then
                Application.Exit()
            End If
        Catch ex As Exception
            MsgBox("Erro ao processar!", MsgBoxStyle.Critical + MsgBoxStyle.OkOnly, "ATENÇÃO")
        End Try
    End Sub

    Private Sub CalculadoraToolStripMenuItem2_Click(sender As Object, e As EventArgs) Handles CalculadoraToolStripMenuItem2.Click
        Shell("calc.exe")
    End Sub
End Class
