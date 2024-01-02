#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

class Funcionario:public Pessoa{
	private:
		bool status;
		const int MATRICULA;
		string dataAdmissao, funcao;
		float salario;
	
	public:
		Funcionario(bool, const int, string, string, float,const string, const string,const string, const string,const string, const string,const string, string, int);
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
