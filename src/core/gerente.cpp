#include <iostream>
#include <string>
#include <chromo>
using namespace std;

#include "../../include/core/gerente.h"
#include "../../include/core/empresa.h"
#include "../../include/utils/data_atual.h"

	Gerente::Gerente(float meta, bool status, int matricula, string dataAdmissao, string funcao, float salario,\
			string nome, string dataNascimento, string nomePai, string nomeMae, string naturalidade\
			string identidade, string cpf, string fone, int idade):Funcionario(status, matricula\
				dataAdmissao, funcao, salario, nome, dataNascimento, nomePai, nomeMae, \
				naturalidade, identidade, cpf, fone, idade) {
				setMeta(meta);
	Gerente::~Gerente() {
		cout << "Funcionario " << getNome() << " de matricula " << getMatricula() << " foi destruido" << endl;
	}
	
	//getters
	float Gerente::getMeta() { return meta; }

	//setters
	void Gerente::setMeta(float letMeta) { meta = letMeta; }

	// membros
	bool Gerente::adicionaFuncionario(Empresa e){
		string nome, dataNascimento, nomePai, nomeMae, naturalidade, identidade,\
			cpf, fone, dataAdmissao;
		int idade, matricula;
		float salario; 
		bool status;
		bool sucesso = false;
		int continuacao, tentativas=0, funcao;

		cout << "Bem vindo ao processo de inclusão de um Funcionário\n\
			Digite as informações necessárias para esta tarefa. Elas são:\
			1)Nome\n2)Data de Nascimento\n3)Nome do pai\n4)Nome da mãe\n\
			5)Naturalidade\n6)Identidade\n7)CPF\n8)Telefone\n9)Função\n\
			10)Salário" << "\nDeseja prosseguir com\
			esta tarefa?\n1. Sim\n2. Não" << endl;

		cin >> continuacao;
		if (continuacao == 1)
			cout << "Prosseguindo com a inclusão." << endl;
		else if(continuacao == 2){
			cout << "Cancelando processo." << endl;
			return false;
		}
			
		cout << "Nome: ";
		cin >> nome;
		cout << "\nData de Nascimento: (DD/MM/AA)" ;
		cin >> dataNascimento;
		cout << "\nNome do pai: ";
		cin >> nomePai;
		cout << "\nNome da mae: ";
		cin >> nomeMae ;
		cout << "\nNaturalidade: ";
	       	cin >> naturalidade;
		cout << "\nIdentidade: "; 
		cin >> identidade;
		cout << "\nCPF: ";
		cin >> cpf;
		cout >> "\nTelefone: " ;
		cin >> fone; 
		cout << "\nIdade";
		cin >> idade;
		cout << "\nFunção: " << endl;
		cout << "Opções: 1)administrador\n2)estoquista\n3)marketeiro\n\
			4)subgerente\n5)ti\n6)vendedor\nOpção: ";
		cin >> funcao;
		
		cout << "\nMatricula: ";
		cin >> matricula;
		cout << "Salario: ";
		cin >> salario;
		dataAdmissao = dataAtual();
		cout << "\nStatus: ";
		cin >> status;

		do { 
			switch (funcao){
				case 1:
			       		cout << "Adicionando um administrador." << endl;
					sucesso = true;
					return True;
				       	break;

				case 2:
					cout << "Adicionando estoquista." << endl;
					sucesso = true;
					return True;
					break;
	
				case 3:
					sucesso = true;
					cout << "Adicionando um marketeiro." << endl;
					return True;
					break;
			
				case 4:
					cout << "Adicionando um subgerente." << endl;
					sucesso = true;
					return True;
					break;

				case 5:
					cout << "Adicionando um ti." << endl;
					sucesso = true;
					return True;
					break;
	
				case 6:
					cout << "Adicionando um vendedor." << endl;
					sucesso = true;
					return True;
					break;

				default:
					cout << "Opção inválida. Recomece o processo." << endl;
					tentativas++;
					if (tentativas > 2){
						sucesso = True;
						cout << "3 tentativas inválidas. Cancelando processo." << endl;
						return false;
					}
					break;
		}while (sucesso);
	}
