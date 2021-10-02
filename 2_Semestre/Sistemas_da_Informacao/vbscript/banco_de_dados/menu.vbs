dim resp, exec, op

call carregar_menu

sub carregar_menu()
     set exec=CreateObject("wscript.shell")

    op = inputbox("[G] Gravar Dados" + vbnewline &_ 
                  "[C] Consultar Dados" + vbnewline &_
                  "[F] Finalizar Dados", "ESCOLHA UMA OPÇÃO")
    
    Select Case ucase(op)
        Case "G"
            exec.run "C:\Users\bruno\OneDrive\Documentos\fatec\2ºSemestre\Sistemas_da_Informação\vbscript\banco_de_dados\gravas.vbs"
        Case "C"
            exec.run "C:\Users\bruno\OneDrive\Documentos\fatec\2ºSemestre\Sistemas_da_Informação\vbscript\banco_de_dados\consultar.vbs"
        case "F"
            WScript.Quit
        case else:
            msgbox("OPÇÃO INVÁLIDA!!"), vbInformation + vbOKOnly, "ATENÇÃO"
        end Select 

    WScript.quit
end Sub