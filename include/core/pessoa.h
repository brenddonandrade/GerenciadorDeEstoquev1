#ifndef PESSOA_H
#define PESSOA_H

#include <string>
using namespace std;

class Pessoa {
	private:
		string nome, data_nascimento, nome_pai, nome_mae, naturalidade,\
			identidade, cpf, fone;
		int idade;
	
	public:
		// Construtor
		Pessoa(string, string, string, string, string, string, string, string, int);
		
		// Destrutores
		~Pessoa();

		// getters
		string getNome();
		string getDataNascimento();
		string getNomePai();
		string getNomeMae();
		string getNaturalidade();
		string getIdentidade();
		string getCpf();
		string getFone();
		int getIdade();

		// settes
		void setNome(string);
		void setDataNascimento(string);
		void setNomePai(string);
		void setNomeMae(string);
		void setNaturalidade(string);
		void setIdentidade(string);
		void setCpf(string);
		void setFone(string);
		void setIdade(int);

		void mostra();
};
#endif
