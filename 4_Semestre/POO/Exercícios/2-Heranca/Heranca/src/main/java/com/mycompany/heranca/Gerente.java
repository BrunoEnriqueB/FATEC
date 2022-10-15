/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.mycompany.heranca;

/**
 *
 * @author bruno
 */
public class Gerente extends Funcionario{
    private float bonificacao;
    private Secretaria secretaria;
    private int ferias;
    
    public Gerente(Secretaria secretaria) {
        this.secretaria = secretaria;
    }   

    public float getBonificacao() {
        return bonificacao;
    }

    public Secretaria getSecretaria() {
        return secretaria;
    }

    public void setSecretaria(Secretaria secretaria) {
        this.secretaria = secretaria;
    }

    @Override
    public int getFerias() {
        return ferias;
    }

    public void setFerias(int ferias) {
        this.ferias = ferias;
    }

    public void setBonificacao(float bonificacao) {
        this.bonificacao = bonificacao;
    }
    
    @Override
    public void programarFerias() {
        this.ferias = 40;
    }
}
