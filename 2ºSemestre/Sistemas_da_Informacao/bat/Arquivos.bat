@echo off
title Aula 02 - Programacao em Bat
mode 60,30
color 0e
:inicio
cls
echo =============================
echo   GERENCIAMENTO DE ARQUIVOS
echo =============================
echo [G] GERAR ARQUIVOS
echo [O] ORGANIZAR ARQUIVOS
echo [E] ENCERRAR O SCRIPT
echo ===============================
echo.
set /p op=Escolha a opcao...: 

if /i %op% equ G (goto:gerar)
if /i %op% equ O (goto:organizar)
if /i %op% equ E (goto:sair) else (
   echo.
   echo ------------------
   echo   Opcao invalida
   echo ------------------
   pause > nul
   goto:inicio )
   
:gerar
set /p arquivo=Digite o nome do arquivo:
set /p quantidade=Digite a quantidade de arquivos:
set /p extensao=Digite a extensao do arquivo:
c:
C:\Users\bruno\OneDrive\Documentos\fatec\2_Semestre\Sistemas_da_Informacao\bat\%pasta%
for /L %%n in (1,1,%quantidade%) do echo Sistemas de Informacao > %arquivo%%%n.%extensao%
echo.
echo ---------------------------------
echo  ARQUIVOS GERADOS COM SUCESSO!
echo ---------------------------------
pause > nul
goto inicio

:organizar
c:
C:\Users\bruno\OneDrive\Documentos\fatec\2_Semestre\Sistemas_da_Informacao\bat\%pasta%
set /p pasta=Digite a pasta a ser movida:
set /p extensao=Digite a extensao do arquivo a ser organizado:
md %pasta%
move *.%extensao% C:\Users\bruno\OneDrive\Documentos\fatec\2_Semestre\Sistemas_da_Informacao\bat\%pasta%
echo.
echo ------------------------------------
echo  ARQUIVOS ORGANIZADOS COM SUCESSO!
echo ------------------------------------
pause > nul
goto inicio
   
:sair
echo.
set /p resp=Deseja realmente sair? [S/N]:
if /i %resp% equ s (exit) else (goto:inicio)
