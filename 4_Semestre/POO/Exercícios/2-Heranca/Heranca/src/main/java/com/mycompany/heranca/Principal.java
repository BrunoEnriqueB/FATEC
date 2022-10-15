/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Project/Maven2/JavaApp/src/main/java/${packagePath}/${mainClassName}.java to edit this template
 */

package com.mycompany.heranca;

/**
 *
 * @author bruno
 */
public class Principal {
    public static void main(String[] args) {
        Secretaria kelly = new Secretaria();
        Veiculo bmw = new Veiculo();
        bmw.setPlaca("BMW-0000");
        bmw.setVeiculo("BMW X6");
        
        kelly.setNome("Kelly");
        kelly.setSalario(1800);
        kelly.setRegistro(52324);
         
        Diretor joao = new Diretor(kelly);
        joao.setNome("Joao");
        joao.setBonificacao(600);
        joao.setSalario(5600);
        joao.setVeiculo(bmw);
        
        System.out.println("Nome da secretaria: " + kelly.getNome());
        System.out.println("Salario atual do diretor: " + joao.getSalario());
        System.out.println("Salario atual da secretaria: " + kelly.getSalario());
        System.out.println("Placa do veiculo: " + joao.getVeiculo().getPlaca());
        System.out.println("Salario atual do diretor: " + joao.getSalario());
        
    }
}
