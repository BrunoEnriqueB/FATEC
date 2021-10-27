<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class frm_registro
    Inherits System.Windows.Forms.Form

    'Form overrides dispose to clean up the component list.
    <System.Diagnostics.DebuggerNonUserCode()> _
    Protected Overrides Sub Dispose(ByVal disposing As Boolean)
        Try
            If disposing AndAlso components IsNot Nothing Then
                components.Dispose()
            End If
        Finally
            MyBase.Dispose(disposing)
        End Try
    End Sub

    'Required by the Windows Form Designer
    Private components As System.ComponentModel.IContainer

    'NOTE: The following procedure is required by the Windows Form Designer
    'It can be modified using the Windows Form Designer.  
    'Do not modify it using the code editor.
    <System.Diagnostics.DebuggerStepThrough()> _
    Private Sub InitializeComponent()
        Dim resources As System.ComponentModel.ComponentResourceManager = New System.ComponentModel.ComponentResourceManager(GetType(frm_registro))
        Me.Panel1 = New System.Windows.Forms.Panel()
        Me.Panel2 = New System.Windows.Forms.Panel()
        Me.Panel3 = New System.Windows.Forms.Panel()
        Me.lbl_login = New System.Windows.Forms.Label()
        Me.txt_celular_rgr = New System.Windows.Forms.MaskedTextBox()
        Me.Label5 = New System.Windows.Forms.Label()
        Me.Label2 = New System.Windows.Forms.Label()
        Me.txt_rsenha_rgr = New System.Windows.Forms.TextBox()
        Me.chk_senha = New System.Windows.Forms.CheckBox()
        Me.txt_cpf_rgr = New System.Windows.Forms.MaskedTextBox()
        Me.Label4 = New System.Windows.Forms.Label()
        Me.Label3 = New System.Windows.Forms.Label()
        Me.txt_email_rgr = New System.Windows.Forms.TextBox()
        Me.btn_rgr = New System.Windows.Forms.Button()
        Me.Label1 = New System.Windows.Forms.Label()
        Me.lbl_senha = New System.Windows.Forms.Label()
        Me.txt_senha_rgr = New System.Windows.Forms.TextBox()
        Me.txt_nome_rgr = New System.Windows.Forms.TextBox()
        Me.Panel1.SuspendLayout()
        Me.Panel3.SuspendLayout()
        Me.SuspendLayout()
        '
        'Panel1
        '
        Me.Panel1.BackColor = System.Drawing.Color.Transparent
        Me.Panel1.BackgroundImage = CType(resources.GetObject("Panel1.BackgroundImage"), System.Drawing.Image)
        Me.Panel1.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle
        Me.Panel1.Controls.Add(Me.Panel2)
        Me.Panel1.Controls.Add(Me.Panel3)
        Me.Panel1.Location = New System.Drawing.Point(250, 30)
        Me.Panel1.Name = "Panel1"
        Me.Panel1.Size = New System.Drawing.Size(600, 500)
        Me.Panel1.TabIndex = 1
        '
        'Panel2
        '
        Me.Panel2.AutoScroll = True
        Me.Panel2.BackgroundImage = CType(resources.GetObject("Panel2.BackgroundImage"), System.Drawing.Image)
        Me.Panel2.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Stretch
        Me.Panel2.Location = New System.Drawing.Point(240, 40)
        Me.Panel2.Name = "Panel2"
        Me.Panel2.Size = New System.Drawing.Size(120, 120)
        Me.Panel2.TabIndex = 0
        '
        'Panel3
        '
        Me.Panel3.BackColor = System.Drawing.Color.White
        Me.Panel3.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle
        Me.Panel3.Controls.Add(Me.lbl_login)
        Me.Panel3.Controls.Add(Me.txt_celular_rgr)
        Me.Panel3.Controls.Add(Me.Label5)
        Me.Panel3.Controls.Add(Me.Label2)
        Me.Panel3.Controls.Add(Me.txt_rsenha_rgr)
        Me.Panel3.Controls.Add(Me.chk_senha)
        Me.Panel3.Controls.Add(Me.txt_cpf_rgr)
        Me.Panel3.Controls.Add(Me.Label4)
        Me.Panel3.Controls.Add(Me.Label3)
        Me.Panel3.Controls.Add(Me.txt_email_rgr)
        Me.Panel3.Controls.Add(Me.btn_rgr)
        Me.Panel3.Controls.Add(Me.Label1)
        Me.Panel3.Controls.Add(Me.lbl_senha)
        Me.Panel3.Controls.Add(Me.txt_senha_rgr)
        Me.Panel3.Controls.Add(Me.txt_nome_rgr)
        Me.Panel3.Location = New System.Drawing.Point(100, 100)
        Me.Panel3.Name = "Panel3"
        Me.Panel3.Size = New System.Drawing.Size(400, 350)
        Me.Panel3.TabIndex = 1
        '
        'lbl_login
        '
        Me.lbl_login.AutoSize = True
        Me.lbl_login.Cursor = System.Windows.Forms.Cursors.Hand
        Me.lbl_login.Font = New System.Drawing.Font("Arial Narrow", 9.75!, System.Drawing.FontStyle.Underline, System.Drawing.GraphicsUnit.Point)
        Me.lbl_login.Location = New System.Drawing.Point(184, 321)
        Me.lbl_login.Name = "lbl_login"
        Me.lbl_login.Size = New System.Drawing.Size(33, 16)
        Me.lbl_login.TabIndex = 19
        Me.lbl_login.Text = "Login"
        '
        'txt_celular_rgr
        '
        Me.txt_celular_rgr.Font = New System.Drawing.Font("Arial Narrow", 12.0!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point)
        Me.txt_celular_rgr.Location = New System.Drawing.Point(13, 252)
        Me.txt_celular_rgr.Mask = "(99),99999,9999"
        Me.txt_celular_rgr.Name = "txt_celular_rgr"
        Me.txt_celular_rgr.Size = New System.Drawing.Size(102, 26)
        Me.txt_celular_rgr.TabIndex = 18
        '
        'Label5
        '
        Me.Label5.AutoSize = True
        Me.Label5.Font = New System.Drawing.Font("Arial Narrow", 12.0!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point)
        Me.Label5.Location = New System.Drawing.Point(13, 231)
        Me.Label5.Name = "Label5"
        Me.Label5.Size = New System.Drawing.Size(50, 20)
        Me.Label5.TabIndex = 17
        Me.Label5.Text = "Celular"
        '
        'Label2
        '
        Me.Label2.AutoSize = True
        Me.Label2.Font = New System.Drawing.Font("Arial Narrow", 12.0!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point)
        Me.Label2.Location = New System.Drawing.Point(139, 122)
        Me.Label2.Name = "Label2"
        Me.Label2.Size = New System.Drawing.Size(105, 20)
        Me.Label2.TabIndex = 16
        Me.Label2.Text = "Confirmar senha"
        '
        'txt_rsenha_rgr
        '
        Me.txt_rsenha_rgr.Font = New System.Drawing.Font("Arial Narrow", 12.0!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point)
        Me.txt_rsenha_rgr.Location = New System.Drawing.Point(139, 143)
        Me.txt_rsenha_rgr.Margin = New System.Windows.Forms.Padding(0)
        Me.txt_rsenha_rgr.Name = "txt_rsenha_rgr"
        Me.txt_rsenha_rgr.PlaceholderText = "             "
        Me.txt_rsenha_rgr.Size = New System.Drawing.Size(117, 26)
        Me.txt_rsenha_rgr.TabIndex = 15
        '
        'chk_senha
        '
        Me.chk_senha.AutoSize = True
        Me.chk_senha.Location = New System.Drawing.Point(278, 149)
        Me.chk_senha.Name = "chk_senha"
        Me.chk_senha.Size = New System.Drawing.Size(109, 19)
        Me.chk_senha.TabIndex = 14
        Me.chk_senha.Text = "Visualizar senha"
        Me.chk_senha.UseVisualStyleBackColor = True
        '
        'txt_cpf_rgr
        '
        Me.txt_cpf_rgr.Font = New System.Drawing.Font("Arial Narrow", 12.0!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point)
        Me.txt_cpf_rgr.Location = New System.Drawing.Point(13, 89)
        Me.txt_cpf_rgr.Mask = "999,999,999-99"
        Me.txt_cpf_rgr.Name = "txt_cpf_rgr"
        Me.txt_cpf_rgr.Size = New System.Drawing.Size(102, 26)
        Me.txt_cpf_rgr.TabIndex = 11
        '
        'Label4
        '
        Me.Label4.AutoSize = True
        Me.Label4.Font = New System.Drawing.Font("Arial Narrow", 12.0!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point)
        Me.Label4.Location = New System.Drawing.Point(13, 68)
        Me.Label4.Name = "Label4"
        Me.Label4.Size = New System.Drawing.Size(35, 20)
        Me.Label4.TabIndex = 10
        Me.Label4.Text = "CPF"
        '
        'Label3
        '
        Me.Label3.AutoSize = True
        Me.Label3.Font = New System.Drawing.Font("Arial Narrow", 12.0!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point)
        Me.Label3.Location = New System.Drawing.Point(13, 177)
        Me.Label3.Name = "Label3"
        Me.Label3.Size = New System.Drawing.Size(42, 20)
        Me.Label3.TabIndex = 8
        Me.Label3.Text = "Email"
        '
        'txt_email_rgr
        '
        Me.txt_email_rgr.Font = New System.Drawing.Font("Arial Narrow", 12.0!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point)
        Me.txt_email_rgr.Location = New System.Drawing.Point(13, 198)
        Me.txt_email_rgr.Margin = New System.Windows.Forms.Padding(0)
        Me.txt_email_rgr.Name = "txt_email_rgr"
        Me.txt_email_rgr.PlaceholderText = "             "
        Me.txt_email_rgr.Size = New System.Drawing.Size(374, 26)
        Me.txt_email_rgr.TabIndex = 7
        '
        'btn_rgr
        '
        Me.btn_rgr.BackColor = System.Drawing.Color.FromArgb(CType(CType(118, Byte), Integer), CType(CType(196, Byte), Integer), CType(CType(244, Byte), Integer))
        Me.btn_rgr.Cursor = System.Windows.Forms.Cursors.Hand
        Me.btn_rgr.Font = New System.Drawing.Font("Arial Narrow", 12.0!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point)
        Me.btn_rgr.ForeColor = System.Drawing.Color.White
        Me.btn_rgr.Location = New System.Drawing.Point(139, 282)
        Me.btn_rgr.Name = "btn_rgr"
        Me.btn_rgr.Size = New System.Drawing.Size(120, 36)
        Me.btn_rgr.TabIndex = 4
        Me.btn_rgr.Text = "Registrar Conta"
        Me.btn_rgr.UseVisualStyleBackColor = False
        '
        'Label1
        '
        Me.Label1.AutoSize = True
        Me.Label1.Font = New System.Drawing.Font("Arial Narrow", 12.0!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point)
        Me.Label1.Location = New System.Drawing.Point(121, 68)
        Me.Label1.Name = "Label1"
        Me.Label1.Size = New System.Drawing.Size(112, 20)
        Me.Label1.TabIndex = 3
        Me.Label1.Text = "Nome do usuário"
        '
        'lbl_senha
        '
        Me.lbl_senha.AutoSize = True
        Me.lbl_senha.Font = New System.Drawing.Font("Arial Narrow", 12.0!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point)
        Me.lbl_senha.Location = New System.Drawing.Point(13, 122)
        Me.lbl_senha.Name = "lbl_senha"
        Me.lbl_senha.Size = New System.Drawing.Size(47, 20)
        Me.lbl_senha.TabIndex = 2
        Me.lbl_senha.Text = "Senha"
        '
        'txt_senha_rgr
        '
        Me.txt_senha_rgr.Font = New System.Drawing.Font("Arial Narrow", 12.0!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point)
        Me.txt_senha_rgr.Location = New System.Drawing.Point(13, 143)
        Me.txt_senha_rgr.Margin = New System.Windows.Forms.Padding(0)
        Me.txt_senha_rgr.Name = "txt_senha_rgr"
        Me.txt_senha_rgr.PlaceholderText = "             "
        Me.txt_senha_rgr.Size = New System.Drawing.Size(117, 26)
        Me.txt_senha_rgr.TabIndex = 1
        '
        'txt_nome_rgr
        '
        Me.txt_nome_rgr.Font = New System.Drawing.Font("Arial Narrow", 12.0!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point)
        Me.txt_nome_rgr.Location = New System.Drawing.Point(121, 89)
        Me.txt_nome_rgr.Margin = New System.Windows.Forms.Padding(0)
        Me.txt_nome_rgr.Name = "txt_nome_rgr"
        Me.txt_nome_rgr.PlaceholderText = "             "
        Me.txt_nome_rgr.Size = New System.Drawing.Size(266, 26)
        Me.txt_nome_rgr.TabIndex = 0
        '
        'frm_registro
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(7.0!, 15.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.BackgroundImage = CType(resources.GetObject("$this.BackgroundImage"), System.Drawing.Image)
        Me.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Center
        Me.ClientSize = New System.Drawing.Size(1084, 561)
        Me.Controls.Add(Me.Panel1)
        Me.Name = "frm_registro"
        Me.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen
        Me.Text = "Registro"
        Me.Panel1.ResumeLayout(False)
        Me.Panel3.ResumeLayout(False)
        Me.Panel3.PerformLayout()
        Me.ResumeLayout(False)

    End Sub

    Friend WithEvents Panel1 As Panel
    Friend WithEvents Panel2 As Panel
    Friend WithEvents Panel3 As Panel
    Friend WithEvents btn_rgr As Button
    Friend WithEvents Label1 As Label
    Friend WithEvents lbl_senha As Label
    Friend WithEvents txt_senha_rgr As TextBox
    Friend WithEvents txt_nome_rgr As TextBox
    Friend WithEvents Label3 As Label
    Friend WithEvents txt_email_rgr As TextBox
    Friend WithEvents txt_celular_rgr As MaskedTextBox
    Friend WithEvents Label5 As Label
    Friend WithEvents Label2 As Label
    Friend WithEvents txt_rsenha_rgr As TextBox
    Friend WithEvents chk_senha As CheckBox
    Friend WithEvents txt_cpf_rgr As MaskedTextBox
    Friend WithEvents Label4 As Label
    Friend WithEvents lbl_login As Label
End Class
