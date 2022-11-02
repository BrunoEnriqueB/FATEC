/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.mycompany.excecoes;

/**
 *
 * @author bruno
 */
public class Produto {
    private String nome;
    private float lucro, precoCusto, precoVenda;
    
    public void calculaLucro() throws ArithmeticException {
        if(this.precoVenda - this.precoCusto  < 150) {
            throw new ArithmeticException("O lucro do produto não deve ser menor que R$150");
        } else {
            this.lucro = this.precoCusto - this.precoVenda;
        }
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) throws NomeProdutoException {
        if(nome.length() < 5) {
            throw new NomeProdutoException("O nome deve ter pelo menos 5 letras!");            
        } else {
            this.nome = nome;    
        }       
    }

    public float getPrecoCusto() {
        return precoCusto;
    }

    public void setPrecoCusto(float precoCusto) throws PrecoVendaException  {
        this.precoCusto = precoCusto;
    }

    public float getPrecoVenda() {
        return precoVenda;
    }

    public void setPrecoVenda(float precoVenda) throws PrecoVendaException {
        if(this.precoCusto > precoVenda) {
            throw new PrecoVendaException("O preço de venda deve ser maior que o de custo");
        } else {
            this.precoVenda = precoVenda;
        }   
    }    
}
