@echo off
title JOKENPO
mode 56,40
color 0b

:inicio
set /p nome=Digite o nome do jogador:
set /a ganhou=0
set /a perdeu=0
set /a empatou=0
goto jogo

:jogo 
cls
echo --------------------------------------------------------
echo                  Bem vindo ao JO-KEN-PO                              
echo                         %nome%                                   
echo --------------------------------------------------------
echo.
echo ==========================MENU==========================
echo [1] PEDRA
echo [2] PAPEL
echo [3] TESOURA
echo [4] SPOCK
echo [5] LAGARTO
echo [6] ENCERRAR JOGO
echo [7] REGRAS
echo ========================================================
set /a cpu=(%Random% %% 5) + 1

echo 		==PLACAR DO JOGO==
echo 		VITORIAS: %ganhou%
echo 		DERROTAS: %perdeu%
echo 		EMPATOU: %empatou%
echo 		==================

set /p jogador=Escolha uma opcao: 

if %jogador% LSS 1 (goto invalida) 
if %jogador% == 6 (goto estatisticas) 
if %jogador% == 7 (goto regras) 
if %jogador% GTR 7 (goto invalida) else (goto programa)

:programa 

if %jogador% == 1 (set jogadorescrito=Pedra)
if %jogador% == 2 (set jogadorescrito=Papel)
if %jogador% == 3 (set jogadorescrito=Tesoura)
if %jogador% == 4 (set jogadorescrito=Spock)
if %jogador% == 5 (set jogadorescrito=Lagarto)

if %cpu% == 1 (set cpuescrito=Pedra)
if %cpu% == 2 (set cpuescrito=Papel)
if %cpu% == 3 (set cpuescrito=Tesoura)
if %cpu% == 4 (set cpuescrito=Spock)
if %cpu% == 5 (set cpuescrito=Lagarto)

echo %nome% escolheu %jogadorescrito%
echo CPU escolheu %cpuescrito%

if %jogador% == 1 (goto pedra)
if %jogador% == 2 (goto papel)
if %jogador% == 3 (goto tesoura)
if %jogador% == 4 (goto spock)
if %jogador% == 5 (goto lagarto)

:pedra
if %cpu% == 1 (goto empatou)
if %cpu% == 2 (goto perdeu)
if %cpu% == 3 (goto ganhou)
if %cpu% == 4 (goto perdeu)
if %cpu% == 5 (goto ganhou)

:papel
if %cpu% == 1 (goto ganhou)
if %cpu% == 2 (goto empatou)
if %cpu% == 3 (goto perdeu)
if %cpu% == 4 (goto ganhou)
if %cpu% == 5 (goto perdeu)

:tesoura
if %cpu% == 1 (goto perdeu)
if %cpu% == 2 (goto ganhou)
if %cpu% == 3 (goto empatou)
if %cpu% == 4 (goto perdeu)
if %cpu% == 5 (goto ganhou)

:spock
if %cpu% == 1 (goto ganhou)
if %cpu% == 2 (goto perdeu)
if %cpu% == 3 (goto ganhou)
if %cpu% == 4 (goto empatou)
if %cpu% == 5 (goto perdeu)

:lagarto
if %cpu% == 1 (goto perdeu)
if %cpu% == 2 (goto ganhou)
if %cpu% == 3 (goto perdeu)
if %cpu% == 4 (goto ganhou)
if %cpu% == 5 (goto empatou)

:invalida
echo RESPOSTA INVALIDA
pause
goto jogo

:perdeu
echo 		------------------
echo 		   VOCE PERDEU
echo 		------------------
set /a perdeu = perdeu + 1
goto validaresp

:empatou
echo 		------------------
echo 		   VOCE EMPATOU
echo 		------------------
set /a empatou = empatou + 1
goto validaresp

:ganhou
echo 		------------------
echo 		   VOCE GANHOU
echo 		------------------
set /a ganhou = ganhou + 1
goto validaresp

:validaresp 
set /p resp=DESEJA JOGAR NOVAMENTE?[S/N]
if /i %resp% EQU s (goto jogo)
if /i %resp% EQU n (goto estatisticas) else (
	echo RESPOSTA INVALIDA
	pause
	goto validaresp
)

:regras
echo PEDRA X PAPEL = O pedra perde, porque o papel cobre ela.
echo.
echo PEDRA X PEDRA = Empate
echo.
echo PEDRA X TESOURA = A pedra ganha, porque ela quebra a tesoura.
echo.
echo PEDRA X LAGARTO = A pedra ganha, porque ela esmaga o lagarto.
echo.
echo PEDRA X SPOCK = O spock ganha, porque ele vaporiza a pedra.
echo.
echo Papel X PAPEL = Empate
echo.
echo PAPEL X TESOURA = A tesoura ganha, porque ela corta o papel.
echo.
echo PAPEL X LAGARTO = O lagarto ganha, porque ele come o papel.
echo.
echo PAPEL X SPOCK = O papel ganha, porque ele refuta o Spock
echo.
echo TESOURA X TESOURA = Empate
echo.
echo TESOURA X LAGARTO = A tesoura ganha, porque mata o lagarto.
echo.
echo TESOURA X SPOCK = O Spock ganha, porque quebra a tesoura.
echo.
echo LAGARTO X LAGARTO = Empate.
echo.
echo LAGARTO X SPOCK = O lagarto ganha, porque envenena o Spock.
echo.
echo SPOCK X SPOCK = Empate.
echo.
pause
goto jogo

:estatisticas
cls
echo                    ESTATISICAS 
echo 		==PLACAR DO JOGO==
echo 		VITORIAS: %ganhou%
echo 		DERROTAS: %perdeu%
echo 		EMPATOU: %empatou%
echo 		==================
pause