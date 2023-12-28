#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

class Funcionario:public Pessoa{
	private:
		int matricula;
		string data_admissao;
	
	public:
		Funcionario(bool, string, int, string, string, string, string, string, string, string, string, string, int);
		~Funcionario();

		// getters
		bool getStatus();
		string getFuncao();
		int getMatricula();
		string getDataAdmissao();

		// setters
		void setStatus(bool);
		void setFuncao(string);
		void setMatricula(int);
		void setDataAdmissao(string);

		// membros
		void mostra();

};
#endif
