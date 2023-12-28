#ifndef PESSOA_H
#define PESSOA_H

#include <string>
using namespace std;

class Pessoa {
	private:
		string nome;
		string cpf;
	       	string fone;
	
	public:
		// Construtor
		Pessoa(string, string, string);
		
		// Destrutores
		~Pessoa();

		// getters
		string getNome();
		string getCpf();
		string getFone();

		// settes
		void setNome(string);
		void setCpf(string);
		void setFone(string);

		void mostra();
};
#endif
