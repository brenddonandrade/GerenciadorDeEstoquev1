// bibliotecas embutidas
#include <iostream>
#include <string>

using namespace std;

// implementacao
#include "../../include/core/pessoa.h"


	// implementacoes
	
	//construtor e deestrutor
	Pessoa::Pessoa(string nome, string dataNascimento, string nomePai, string nomeMae, string naturalidade, string identidade,string cpf, string fone, int idade):NOME(nome), DATANASCIMENTO(dataNascimento), NOMEPAI(nomePai), NOMEMAE(nomeMae), NATURALIDADE(naturalidade), IDENTIDADE(identidade), CPF(cpf) {
		setFone(fone);
		setIdade(idade);
	}
	Pessoa::~Pessoa(){
		cout << "\nObjeto " << getNome() << " destruído\n" << endl;
	}

	//acessadores e modificadores
	string Pessoa::getNome() const{ return nome;}
	string Pessoa::getDataNascimento() const{ return dataNascimento; }
	string Pessoa::getNomePai() const{ return nomePai; }
	string Pessoa::getNomeMae() const { return nomeMae; }
	string Pessoa::getNaturalidade() const{ return naturalidade; }
	string Pessoa::getIdentidade() const{ return identidade; }
	string Pessoa::getCpf() const{ return cpf; }
	string Pessoa::getFone() const{ return cpf; }
	int Pessoa::getIdade() const{ return idade; }

	void Pessoa::setFone(string letFone) { fone = letFone; }
	void Pessoa::setIdade(int letIdade) { idade = letIdade; }

	void Pessoa::mostra() { 
		cout 	<< "Nome: " << getNome() << endl
			<< "Idade: " << getIdade() << endl
			<< "Data de Nascimento: " << getDataNascimento() << endl
			<< "Nome da Mãe: " << getNomeMae() << endl
			<< "Nome do pai: " << getNomePai() << endl
			<< "Natural de: " << getNaturalidade() << endl
			<< "Identidade: " << getIdentidade() << endl
		    	<< "CPF: " << getCpf() << endl
			<< "Fone: " << getFone() << endl;
	}
