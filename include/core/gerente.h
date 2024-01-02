#ifndef GERENTE_H
#define GERENTE_H

class Empresa;
class Funcionario;

class Gerente:public Funcionario {
	protected:
		float meta;

	public:
		Gerente(float, bool, const int, string, string, float,const string, const string,const string, const string, const string, const string,const string, string, int);

		//getters
		float getMeta();

		//settes
		void setMeta(float);

		// membros
		bool adicionaFuncionario(Empresa);

};
#endif
