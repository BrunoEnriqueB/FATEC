/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Project/Maven2/JavaApp/src/main/java/${packagePath}/${mainClassName}.java to edit this template
 */

package com.mycompany.collection;

import java.util.Collection;
import java.util.HashSet;
import java.util.Iterator;
import java.util.Set;

/**
 *
 * @author bruno
 */
public class Principal {

    public static void main(String[] args) {
        Veiculo v1, v2, v3, v4, v5, v6;
        v1 = new Veiculo();
        v2 = new Veiculo();
        v3 = new Veiculo();
        v4 = new Veiculo();
        v5 = new Veiculo();
        v6 = new Veiculo();
        
        v1.setPlaca("RIO2A18");
        v2.setPlaca("VAL2A18");
        v3.setPlaca("SAP2A18");
        v4.setPlaca("MGS2A18");
        v5.setPlaca("SCS2A18");
        v6.setPlaca("SBC2A18");
        
        
        v1.setValor(20000);
        v2.setValor(30000);
        v3.setValor(40000);
        v4.setValor(50000);
        v5.setValor(60000);
        v6.setValor(70000);
        
        
        Proprietario viotti = new Proprietario();
        
        viotti.setName("Flávio Viotti");
        viotti.setCpf("111111111");
        viotti.addVeiculo(v1);
        viotti.addVeiculo(v2);
        viotti.addVeiculo(v3);
        viotti.addVeiculo(v4);
        viotti.addVeiculo(v5);
        viotti.addVeiculo(v6);

        Collection<Veiculo> veiculos = viotti.getVeiculos();
        System.out.println("Seus veículos são: ");
        for(Veiculo vei : veiculos) {
            System.out.println("Placa: " + vei.getPlaca());
            System.out.println("Valor: " + vei.getValor());
        }
        
        System.out.println("O valor total dos seus carros são: " + viotti.valorBens());
    }
}
