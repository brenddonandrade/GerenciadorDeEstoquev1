// bibliotecas embutidas
#include <iostream>
#include <string>

using namespace std;

// implementacao
#include "../../include/core/pessoa.h"


	// implementacoes
	
	//construtor e deestrutor
	Pessoa::Pessoa(string nome, string cpf, string fone){
		setNome(nome);
		setCpf(cpf);
		setFone(fone);
	}
	Pessoa::~Pessoa(){
		cout << "\nObjeto \"Pessoa\"  destruído\n" << endl;
	}

	//acessadores e modificadores
	string Pessoa::getNome(){ return nome;}
	string Pessoa::getCpf(){ return cpf; }
	string Pessoa::getFone() { return cpf; }

	void Pessoa::setNome(string nome) { nome = nome ; }
	void Pessoa::setCpf(string cpf) { cpf = cpf; }
	void Pessoa::setFone(string fone) { fone = fone; }

	void Pessoa::mostra() { 
		cout 	<< "Nome: " << getNome() << endl
		    	<< "CPF: " << getCpf() << endl
			<< "Fone: " << getFone() << endl;
	}
