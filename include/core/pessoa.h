#ifndef PESSOA_H
#define PESSOA_H

class Pessoa {
	private:
		string nome;
		int cpf, fone;
	
	public:
		// Construtor
		Pessoa(string, int, int);
		
		// Destrutores
		~Pessoa();

		// getters
		string getNome();
		int getCpf();
		int getFone();

		// settes
		void setNome(string);
		void setCpf(int);
		void setFone(int);
};
#endif
