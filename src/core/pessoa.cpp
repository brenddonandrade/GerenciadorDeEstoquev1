// bibliotecas embutidas
#include <iostream>
#include <string>

using namespace std;

// implementacao
#include "../../include/pessoa.h"


	// implementacoes
	
	//construtor e deestrutor
	Pessoa::Pessoa(string nome, int cpf, int fone){
		setNome(nome);
		setCpf(cpf);
		setFone(fone);
	}
	Pessoa::~Pessoa(){
		cout << "\nObjeto \"Pessoa\"  destruído\n" << endl;
	}

	//acessadores e modificadores
	string Pessoa::getNome(){ return nome;}
	int Pessoa::getCpf(){ return cpf; }
	int Pessoa::getFone() { return cpf; }

	void Pessoa::setNome(string nome) { nome = nome ; }
	void Pessoa::setCpf(int cpf) { cpf = cpf; }
	void Pessoa::setFone(int fone) { fone = fone; }

	void Pessoa::mostra() { 
		cout 	<< "Nome: " << getNome() << endl
		    	<< "CPF: " << getCpf() << endl
			<< "Fone: " << getFone() << endl;
	}
