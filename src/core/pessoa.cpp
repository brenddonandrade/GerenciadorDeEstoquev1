// bibliotecas embutidas
#include <iostream>
#include <string>

using namespace std;

// implementacao
#include "../../include/core/pessoa.h"


	// implementacoes
	
	//construtor e deestrutor
	Pessoa::Pessoa(string nome, string data_nascimento, string nome_pai, string nome_mae, string naturalidade, string identidade,\
			string cpf, string fone, int idade){
		setNome(nome);
		setDataNascimento(data_nascimento);
		setNomePai(nome_pai);
		setNomeMae(nome_mae);
		setNaturalidade(naturalidade);
		setIdentidade(identidade);
		setCpf(cpf);
		setFone(fone);
		setIdade(idade);
	}
	Pessoa::~Pessoa(){
		cout << "\nObjeto " << getNome() << " destruído\n" << endl;
	}

	//acessadores e modificadores
	string Pessoa::getNome(){ return nome;}
	string Pessoa::getDataNascimento(){ return data_nascimento; }
	string Pessoa::getNomePai() { return nome_pai; }
	string Pessoa::getNomeMae() { return nome_mae; }
	string Pessoa::getNaturalidade() { return naturalidade; }
	string Pessoa::getIdentidade() { return identidade; }
	string Pessoa::getCpf(){ return cpf; }
	string Pessoa::getFone() { return cpf; }
	int Pessoa::getIdade() { return idade; }

	void Pessoa::setNome(string let_nome) { nome = let_nome ; }
	void Pessoa::setDataNascimento(string let_data_nascimento){ data_nascimento = let_data_nascimento ; }
	void Pessoa::setNomePai(string let_nome_pai){ nome_pai = let_nome_pai; }
	void Pessoa::setNomeMae(string let_nome_mae) { nome_mae = let_nome_mae; }
	void Pessoa::setNaturalidade(string let_naturalidade) { naturalidade = let_naturalidade; }
	void Pessoa::setIdentidade(string let_identidade) { identidade = let_identidade; }
	void Pessoa::setCpf(string let_cpf) { cpf = let_cpf; }
	void Pessoa::setFone(string let_fone) { fone = let_fone; }
	void Pessoa::setIdade(int let_idade) { idade = let_idade; }

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
