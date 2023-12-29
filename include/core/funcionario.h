#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

class Funcionario:public Pessoa{
	private:
		bool status;
		const int MATRICULA;
		string dataAdmissao, funcao;
		float salario;
	
	public:
		Funcionario(bool, int, string, string, float, string, string, string, string, string, string, string, string, string, int);
		~Funcionario();

		// getters
		bool getStatus();
		int getMatricula() const;
		string getFuncao();
		string getDataAdmissao();
		float getSalario();

		// setters
		void setStatus(bool);
		void setFuncao(string);
		void setDataAdmissao(string);
		void setSalario(float);

		// membros
		void mostra();

};
#endif
