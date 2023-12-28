#include <iostream>
#include <string>
using namespace std;

#include "../../include/core/pessoa.h"
#include "../../include/core/funcionario.h"

	Funcionario::Funcionario(int matricula, string data_admissao, string nome, string data_nascimento,\
			string nome_pai, string nome_mae, string naturalidade, string identidade, \
			string cpf, string fone, int idade):Pessoa(nome, data_nascimento, nome_pai, nome_mae,\
				naturalidade, identidade, cpf, fone, idade) {
				setMatricula(matricula);
				setDataAdmissao(data_admissao);
			}
	Funcionario::~Funcionario(){
		cout << "Funcionario " << getNome() << " de matricula " << getMatricula() << " foi destruido\n" << endl;
	}

	
	// getters
	int Funcionario::getMatricula(){ return matricula; }
	string Funcionario::getDataAdmissao() { return data_admissao; }

	// setters
	void Funcionario::setMatricula(int let_matricula) { matricula = let_matricula ; }
	void Funcionario::setDataAdmissao(string let_data_admissao) { data_admissao = let_data_admissao; }
	
	void Funcionario::mostra() {
		cout 	<< "Nome: " << getNome() << endl
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

