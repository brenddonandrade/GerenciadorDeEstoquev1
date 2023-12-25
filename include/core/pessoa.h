#ifndef PESSOA_H
#define PESSOA_H

class Pessoa {
	private:
		string nome, cpf, fone;
	
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
