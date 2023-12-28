#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

class Funcionario:public Pessoa{
	private:
		int matricula;
		string data_admissao;
	
	public:
		Funcionario(int, string, string, string, string, string, string, string, string, string, int);
		~Funcionario();

		// getters
		int getMatricula();
		string getDataAdmissao();

		// setters
		void setMatricula(int);
		void setDataAdmissao(string);

		// membros
		void mostra();

};
#endif
