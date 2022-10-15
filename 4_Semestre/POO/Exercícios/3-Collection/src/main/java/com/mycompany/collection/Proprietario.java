/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.mycompany.collection;

import java.util.Collection;
import java.util.HashSet;
import java.util.Iterator;
import java.util.Set;
import javax.swing.JOptionPane;

/**
 *
 * @author bruno
 */
public class Proprietario {
    private String name, cpf;
    private Collection<Veiculo> veiculos = new HashSet<Veiculo>();
    
    public String getName() {
        return this.name;
    }
    
    public void setName(String name) {
        this.name = name;
    }
    
    public String getCpf() {
        return this.cpf;
    }
    
    public void setCpf(String cpf) {
        this.cpf = cpf;
    }
    
    public Collection getVeiculos() {
        return this.veiculos;
    }
    
    public void setVeiculos(Veiculo veiculo) {
        this.veiculos.add(veiculo);
    }
    
    public void addVeiculo(Veiculo veiculo) {
        if(!this.veiculos.equals(veiculo)) { 
            if(this.veiculos.size() > 5){
                this.veiculos.add(veiculo);
            } else {
                int resposta;
                resposta = JOptionPane.showConfirmDialog(null, "Tem certeza que deseja adicionar mais um veiculo?");
                if(resposta == JOptionPane.YES_OPTION) {
                    this.veiculos.add(veiculo);
                }
            }
        }
    }
    
    public float valorBens() {
       float valorTotal = 0;
       Iterator<Veiculo> it = this.veiculos.iterator();
       while(it.hasNext()) {
           valorTotal += it.next().getValor();
       }
       
       return valorTotal;
    }
    
    public Veiculo removeVeiculo(String placa) {
       Veiculo v = new Veiculo();
       for(Veiculo veiculo : veiculos) {
           if(veiculo.getPlaca() == placa) {
               v = veiculo;
               veiculos.remove(veiculo);
           }
       }
       return v;
    }
        
}
