#ifndef PESSOA_H
#define PESSOA_H

#include <string>
using namespace std;

class Pessoa {
	private:
		
		const string NOME, DATANASCIMENTO, NOMEPAI, NOMEMAE, NATURALIDADE,\
			IDENTIDADE, CPF;
		string fone;
		int idade;
	
	public:
		// Construtor
		Pessoa(const string, const string,const string, const string,const string, const string,const string, string, int);
		
		// Destrutores
		~Pessoa();

		// getters
		string getNome() const;
		string getDataNascimento() const;
		string getNomePai() const;
		string getNomeMae() const;
		string getNaturalidade() const;
		string getIdentidade() const;
		string getCpf() const;
		string getFone();
		int getIdade();

		// settes
		void setFone(string);
		void setIdade(int);

		void mostra();
};
#endif
