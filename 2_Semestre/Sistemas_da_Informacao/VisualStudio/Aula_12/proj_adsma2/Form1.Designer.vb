<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class Form1
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
        Dim resources As System.ComponentModel.ComponentResourceManager = New System.ComponentModel.ComponentResourceManager(GetType(Form1))
        Me.MenuStrip1 = New System.Windows.Forms.MenuStrip()
        Me.GERENCIAMENTOToolStripMenuItem = New System.Windows.Forms.ToolStripMenuItem()
        Me.ClientesToolStripMenuItem = New System.Windows.Forms.ToolStripMenuItem()
        Me.FuncionáriosToolStripMenuItem = New System.Windows.Forms.ToolStripMenuItem()
        Me.APLICATIVOSToolStripMenuItem = New System.Windows.Forms.ToolStripMenuItem()
        Me.ContasToolStripMenuItem = New System.Windows.Forms.ToolStripMenuItem()
        Me.CriarContasToolStripMenuItem = New System.Windows.Forms.ToolStripMenuItem()
        Me.AlterarContasToolStripMenuItem = New System.Windows.Forms.ToolStripMenuItem()
        Me.ExcluirContasToolStripMenuItem = New System.Windows.Forms.ToolStripMenuItem()
        Me.ContasToolStripMenuItem1 = New System.Windows.Forms.ToolStripMenuItem()
        Me.ENCERRARToolStripMenuItem = New System.Windows.Forms.ToolStripMenuItem()
        Me.CalculadoraToolStripMenuItem2 = New System.Windows.Forms.ToolStripMenuItem()
        Me.ENCERRARToolStripMenuItem1 = New System.Windows.Forms.ToolStripMenuItem()
        Me.SairDoSistemaToolStripMenuItem = New System.Windows.Forms.ToolStripMenuItem()
        Me.MenuStrip1.SuspendLayout()
        Me.SuspendLayout()
        '
        'MenuStrip1
        '
        Me.MenuStrip1.Items.AddRange(New System.Windows.Forms.ToolStripItem() {Me.GERENCIAMENTOToolStripMenuItem, Me.APLICATIVOSToolStripMenuItem, Me.ENCERRARToolStripMenuItem, Me.ENCERRARToolStripMenuItem1})
        Me.MenuStrip1.Location = New System.Drawing.Point(0, 0)
        Me.MenuStrip1.Name = "MenuStrip1"
        Me.MenuStrip1.Size = New System.Drawing.Size(800, 24)
        Me.MenuStrip1.TabIndex = 0
        Me.MenuStrip1.Text = "MenuStrip1"
        '
        'GERENCIAMENTOToolStripMenuItem
        '
        Me.GERENCIAMENTOToolStripMenuItem.DropDownItems.AddRange(New System.Windows.Forms.ToolStripItem() {Me.ClientesToolStripMenuItem, Me.FuncionáriosToolStripMenuItem})
        Me.GERENCIAMENTOToolStripMenuItem.Name = "GERENCIAMENTOToolStripMenuItem"
        Me.GERENCIAMENTOToolStripMenuItem.Size = New System.Drawing.Size(79, 20)
        Me.GERENCIAMENTOToolStripMenuItem.Text = "&CADASTRO"
        '
        'ClientesToolStripMenuItem
        '
        Me.ClientesToolStripMenuItem.Image = CType(resources.GetObject("ClientesToolStripMenuItem.Image"), System.Drawing.Image)
        Me.ClientesToolStripMenuItem.Name = "ClientesToolStripMenuItem"
        Me.ClientesToolStripMenuItem.ShortcutKeys = System.Windows.Forms.Keys.F1
        Me.ClientesToolStripMenuItem.Size = New System.Drawing.Size(161, 22)
        Me.ClientesToolStripMenuItem.Text = "Clientes"
        '
        'FuncionáriosToolStripMenuItem
        '
        Me.FuncionáriosToolStripMenuItem.Name = "FuncionáriosToolStripMenuItem"
        Me.FuncionáriosToolStripMenuItem.ShortcutKeys = System.Windows.Forms.Keys.F2
        Me.FuncionáriosToolStripMenuItem.Size = New System.Drawing.Size(161, 22)
        Me.FuncionáriosToolStripMenuItem.Text = "Funcionários"
        '
        'APLICATIVOSToolStripMenuItem
        '
        Me.APLICATIVOSToolStripMenuItem.DropDownItems.AddRange(New System.Windows.Forms.ToolStripItem() {Me.ContasToolStripMenuItem, Me.ContasToolStripMenuItem1})
        Me.APLICATIVOSToolStripMenuItem.Name = "APLICATIVOSToolStripMenuItem"
        Me.APLICATIVOSToolStripMenuItem.Size = New System.Drawing.Size(114, 20)
        Me.APLICATIVOSToolStripMenuItem.Text = "&GERENCIAMENTO"
        '
        'ContasToolStripMenuItem
        '
        Me.ContasToolStripMenuItem.DropDownItems.AddRange(New System.Windows.Forms.ToolStripItem() {Me.CriarContasToolStripMenuItem, Me.AlterarContasToolStripMenuItem, Me.ExcluirContasToolStripMenuItem})
        Me.ContasToolStripMenuItem.Name = "ContasToolStripMenuItem"
        Me.ContasToolStripMenuItem.Size = New System.Drawing.Size(111, 22)
        Me.ContasToolStripMenuItem.Text = "Contas"
        '
        'CriarContasToolStripMenuItem
        '
        Me.CriarContasToolStripMenuItem.Name = "CriarContasToolStripMenuItem"
        Me.CriarContasToolStripMenuItem.Size = New System.Drawing.Size(147, 22)
        Me.CriarContasToolStripMenuItem.Text = "Criar contas"
        '
        'AlterarContasToolStripMenuItem
        '
        Me.AlterarContasToolStripMenuItem.Name = "AlterarContasToolStripMenuItem"
        Me.AlterarContasToolStripMenuItem.Size = New System.Drawing.Size(147, 22)
        Me.AlterarContasToolStripMenuItem.Text = "Alterar contas"
        '
        'ExcluirContasToolStripMenuItem
        '
        Me.ExcluirContasToolStripMenuItem.Name = "ExcluirContasToolStripMenuItem"
        Me.ExcluirContasToolStripMenuItem.Size = New System.Drawing.Size(147, 22)
        Me.ExcluirContasToolStripMenuItem.Text = "Excluir contas"
        '
        'ContasToolStripMenuItem1
        '
        Me.ContasToolStripMenuItem1.Name = "ContasToolStripMenuItem1"
        Me.ContasToolStripMenuItem1.Size = New System.Drawing.Size(111, 22)
        Me.ContasToolStripMenuItem1.Text = "Contas"
        '
        'ENCERRARToolStripMenuItem
        '
        Me.ENCERRARToolStripMenuItem.DropDownItems.AddRange(New System.Windows.Forms.ToolStripItem() {Me.CalculadoraToolStripMenuItem2})
        Me.ENCERRARToolStripMenuItem.Name = "ENCERRARToolStripMenuItem"
        Me.ENCERRARToolStripMenuItem.Size = New System.Drawing.Size(89, 20)
        Me.ENCERRARToolStripMenuItem.Text = "&APLICATIVOS"
        '
        'CalculadoraToolStripMenuItem2
        '
        Me.CalculadoraToolStripMenuItem2.Image = CType(resources.GetObject("CalculadoraToolStripMenuItem2.Image"), System.Drawing.Image)
        Me.CalculadoraToolStripMenuItem2.Name = "CalculadoraToolStripMenuItem2"
        Me.CalculadoraToolStripMenuItem2.Size = New System.Drawing.Size(137, 22)
        Me.CalculadoraToolStripMenuItem2.Text = "Calculadora"
        '
        'ENCERRARToolStripMenuItem1
        '
        Me.ENCERRARToolStripMenuItem1.DropDownItems.AddRange(New System.Windows.Forms.ToolStripItem() {Me.SairDoSistemaToolStripMenuItem})
        Me.ENCERRARToolStripMenuItem1.Name = "ENCERRARToolStripMenuItem1"
        Me.ENCERRARToolStripMenuItem1.Size = New System.Drawing.Size(77, 20)
        Me.ENCERRARToolStripMenuItem1.Text = "&ENCERRAR"
        '
        'SairDoSistemaToolStripMenuItem
        '
        Me.SairDoSistemaToolStripMenuItem.Name = "SairDoSistemaToolStripMenuItem"
        Me.SairDoSistemaToolStripMenuItem.Size = New System.Drawing.Size(153, 22)
        Me.SairDoSistemaToolStripMenuItem.Text = "Sair do sistema"
        '
        'Form1
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(7.0!, 15.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(800, 450)
        Me.Controls.Add(Me.MenuStrip1)
        Me.MainMenuStrip = Me.MenuStrip1
        Me.Name = "Form1"
        Me.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen
        Me.Text = "Menu Principal"
        Me.MenuStrip1.ResumeLayout(False)
        Me.MenuStrip1.PerformLayout()
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub

    Friend WithEvents MenuStrip1 As MenuStrip
    Friend WithEvents GERENCIAMENTOToolStripMenuItem As ToolStripMenuItem
    Friend WithEvents APLICATIVOSToolStripMenuItem As ToolStripMenuItem
    Friend WithEvents ENCERRARToolStripMenuItem As ToolStripMenuItem
    Friend WithEvents FuncionáriosToolStripMenuItem As ToolStripMenuItem
    Friend WithEvents ClientesToolStripMenuItem As ToolStripMenuItem
    Friend WithEvents ContasToolStripMenuItem As ToolStripMenuItem
    Friend WithEvents CalculadoraToolStripMenuItem2 As ToolStripMenuItem
    Friend WithEvents ENCERRARToolStripMenuItem1 As ToolStripMenuItem
    Friend WithEvents SairDoSistemaToolStripMenuItem As ToolStripMenuItem
    Friend WithEvents CriarContasToolStripMenuItem As ToolStripMenuItem
    Friend WithEvents AlterarContasToolStripMenuItem As ToolStripMenuItem
    Friend WithEvents ExcluirContasToolStripMenuItem As ToolStripMenuItem
    Friend WithEvents ContasToolStripMenuItem1 As ToolStripMenuItem
End Class
