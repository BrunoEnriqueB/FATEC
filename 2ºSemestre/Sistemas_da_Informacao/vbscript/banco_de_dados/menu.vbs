dim resp, exec, op

call carregar_menu

sub carregar_menu()
     set exec=CreateObject("wscript.shell")

    op = inputbox("[G] Gravar Dados" + vbnewline &_ 
                  "[C] Consultar Dados" + vbnewline &_
                  "[F] Finalizar Dados", "ESCOLHA UMA OP��O")
    
    Select Case ucase(op)
        Case "G"
            exec.run "C:\Users\bruno\OneDrive\Documentos\fatec\2�Semestre\Sistemas_da_Informa��o\vbscript\banco_de_dados\gravas.vbs"
        Case "C"
            exec.run "C:\Users\bruno\OneDrive\Documentos\fatec\2�Semestre\Sistemas_da_Informa��o\vbscript\banco_de_dados\consultar.vbs"
        case "F"
            WScript.Quit
        case else:
            msgbox("OP��O INV�LIDA!!"), vbInformation + vbOKOnly, "ATEN��O"
        end Select 

    WScript.quit
end Sub