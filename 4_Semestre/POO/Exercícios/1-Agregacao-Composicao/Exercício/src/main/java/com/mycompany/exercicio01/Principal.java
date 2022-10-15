/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.mycompany.exercicio01;

import java.util.Scanner;

/**
 *
 * @author bruno
 */
public class Principal {
    public static void main(String[] args) {
        Scanner teclado = new Scanner(System.in);
        
        Console console = new Console(new Fabricante());
        Jogo jogo = new Jogo();
        
        System.out.print("Nome do jogo: ");
        jogo.setNome(teclado.nextLine());
        
        //CONSOLE
        System.out.println("---CONSOLE---");
        System.out.print("Nome do fabricante: ");
        console.getFabricante().setNome(teclado.nextLine());
        System.out.print("Nome do console: ");
        console.setNome(teclado.nextLine());
        System.out.print("Ano de lancamento do console: ");
        console.setAnoLancamento(teclado.nextInt());
        
        //JOGO
        jogo.setConsole(console);
        System.out.println("---JOGO---");
        System.out.print("Quantidade de jogadores do jogo " + jogo.getNome() + ":");
        jogo.setQtdJogadores(teclado.nextInt());
        
        
        String status;
        do {
            System.out.println("O jogo está online? (Sim/Nao)");
            status = teclado.next();
            if(status.equalsIgnoreCase("sim")) {
                jogo.setOnline(true);
            } 
            else if (status.equalsIgnoreCase("nao")) {
                jogo.setOnline(false);
            }
        } while(!status.equalsIgnoreCase("Sim") && !status.equalsIgnoreCase("Nao"));

        //INFORMACOES DO JOGO
        System.out.println("----INFORMACOES DO JOGO----");
        System.out.println("Nome do jogo: " + jogo.getNome());
        System.out.println("Quantidades de jogadores do jogo: " + jogo.getQtdJogadores());
        status = jogo.isOnline() ? "online" : "offline";
        System.out.println("Status do jogo: " + status);
        jogo.getConsole().dados();        
        
    }
}
