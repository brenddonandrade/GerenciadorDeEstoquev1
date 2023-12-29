#include <iostream>
#include <string>
using namespace std;

#include "../../include/core/produto.h"

	Produto::Produto(const int codigo, string nome, float preco, bool promocao):CODIGO(codigo), NOME(nome) {
		setPreco(preco);
		setPromocao(promocao);
	}

	//getters
	int Produto::getCodigo() const { return CODIGO; }
	string Produto::getNome() const { return NOME; }
	float Produto::getPreco() { return preco; }
	bool Produto::getPromocao() { return promocao; }

	//setters
	void Produto::setPreco(float letPreco) { preco = letPreco; }
	void Produto::setPromocao(bool letPromocao) { promocao = letPromocao; }
