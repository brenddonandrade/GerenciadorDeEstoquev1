#include <iostream>
#include <string>
using namespace std;

#include "../../include/core/pessoa.h"
#include "../../include/core/funcionario.h"

	Funcionario::Funcionario(bool status, int matricula, string dataAdmissao, string funcao, float salario, string nome, string dataNascimento,\
			string nomePai, string nomeMae, string naturalidade, string identidade, \
			string cpf, string fone, int idade):Pessoa(nome, dataNascimento, nomePai, nomeMae,\
				naturalidade, identidade, cpf, fone, idade), MATRICULA(matricula) {
				setStatus(status);
				setFuncao(funcao);
				setDataAdmissao(dataAdmissao);
				setSalario(salario);
			}
	Funcionario::~Funcionario(){
		cout << "Funcionario " << getNome() << " de matricula " << getMatricula() << " foi destruido\n" << endl;
	}

	
	// getters
	bool Funcionario::getStatus() { return status; }
	string Funcionario::getFuncao() { return funcao; }
	int Funcionario::getMatricula() const{ return MATRICULA; }
	string Funcionario::getDataAdmissao() { return dataAdmissao; }
	float Funcionario::getSalario() { return salario; }

	// setters
	void Funcionario::setStatus(bool letStatus) { status = letStatus; }
	void Funcionario::setFuncao(string letFuncao) { funcao = letFuncao; }
	void Funcionario::setDataAdmissao(string letDataAdmissao) { dataAdmissao = letDataAdmissao; }
	void Funcionario::setSalario(float letSalario ) { salario = letSalario; }
	
	// Metodos membros
	void Funcionario::mostra() {
		cout 	<< "Nome: " << getNome() << endl
			if (getStatus())
				<< "Funcionário ativo" << endl
			else
				<< "Funcionário inativo" << endl
			<< "Matricula: " << getMatricula() << endl
			<< "Admissao: " << getDataAdmissao() << endl
			<< "Idade: " << getIdade() << endl
			<< "Data de Nascimento: " << getDataNascimento() << endl
			<< "Nome da Mãe: " << getNomeMae() << endl
			<< "Nome do pai: " << getNomePai() << endl
			<< "Natural de: " << getNaturalidade() << endl
			<< "Identidade: " << getIdentidade() << endl
		    	<< "CPF: " << getCpf() << endl
			<< "Fone: " << getFone() << endl; 
	}

