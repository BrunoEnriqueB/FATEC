/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.mycompany.exercicio01;

/**
 *
 * @author bruno
 */
public class Console {
    private String nome;
    private int anoLancamento;
    private Fabricante fab;
        
    public Console(Fabricante fab) {
        this.fab = fab;
    }
        
    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public int getAnoLancamento() {
        return anoLancamento;
    }

    public void setAnoLancamento(int anoLancamento) {
        this.anoLancamento = anoLancamento;
    }
    
    public Fabricante getFabricante() {
        return fab;
    }
    
    public void setFabricante(Fabricante fab) {
        this.fab = fab;
    }
    
    public void dados() {
        System.out.println("Nome fabricante: " + fab.getNome());
        System.out.println("Nome console: " + getNome());
        System.out.println("Ano lancamente console: " + anoLancamento);
    }
}
