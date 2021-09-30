@echo off 
title Advinhe o Numero
mode 50,30
color 0b

set /a ganhou=0
set /a perdeu=0

:inicio 
set /a chances=5
set /a numero=(%Random% %% 50) + 1
goto jogo

:jogo
cls
echo ==================================================
echo       ACERTE O NUMERO SORTEADO ENTRE 1 E 50
echo.
echo              VOCE TEM %chances% CHANCES
echo ==================================================                                 
set /p number=Digite seu palpite: 
if  %numero% LSS %number% (goto menor)
if  %numero% EQU %number% (goto igual)
if  %numero% GTR %number% (goto maior) else (echo 
    echo ----------------------
    echo     OPÇÃO INVÁLIDA
    echo ----------------------
)
pause > nul

:menor 
set /a chances=chances - 1
if %chances% == 0 (goto perdeu)   
echo ==================================================
echo              DIGITE UM NUMERO MENOR
echo ==================================================
pause
goto jogo

:igual 
echo ==================================================
echo                   VOCE GANHOU
echo ==================================================
set /a ganhou = ganhou + 1
goto final

:maior 
set /a chances = chances - 1
if %chances% == 0 (goto perdeu)   
echo ==================================================
echo              DIGITE UM NUMERO MAIOR
echo ==================================================
pause
goto jogo

:final
set /p resp=DESEJA JOGAR NOVAMENTE?[S/N]
if /i %resp% EQU s (goto inicio) 
if /i %resp% EQU n (goto estatisticas) else (
    echo RESPOSTA INVALIDA!
    pause
    cls
    goto final
)

:perdeu
cls
echo ==================================================
echo                  VOCE PERDEU!
echo            O NUMERO SORTEADO ERA %numero%
echo ==================================================
set /a perdeu = perdeu + 1
goto final

:estatisticas 
cls
echo ==================================================
echo           VOCE GANHOU %ganhou% partidas!
echo           VOCE PERDEU %perdeu% partidas!
echo ==================================================
echo PRESSIONE ALGUMA TECLA PARA FECHAR...
pause > nul
