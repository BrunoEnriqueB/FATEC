/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Project/Maven2/JavaApp/src/main/java/${packagePath}/${mainClassName}.java to edit this template
 */

package com.mycompany.excecoes;

import java.util.Scanner;

/**
 *
 * @author bruno
 */
public class App {

    public static void main(String[] args) {
        Scanner teclado = new Scanner(System.in);
        try {
            Produto produto = new Produto();
            System.out.println("Digite o nome do produto: ");
            produto.setNome(teclado.nextLine());
            System.out.println("Digite o preco de custo do produto: ");
            produto.setPrecoCusto(teclado.nextFloat());
            teclado.nextLine();
            System.out.println("Digite o preco de venda do produto: ");
            produto.setPrecoVenda(teclado.nextFloat());
            produto.calculaLucro();
            System.out.println("Produto criado com sucesso!");
        } catch (NomeProdutoException nomeProdutoException) {
            System.out.println(nomeProdutoException.getMessage());
        } catch(PrecoVendaException precoVendaException) {
            System.out.println(precoVendaException.getMessage());
        } catch (ArithmeticException lucroException) {
            System.out.println(lucroException.getMessage());
        } 
    }
}
