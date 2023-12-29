#ifndef GERENTE_H
#define GERENTE_H

class Empresa;
class Funcionario;

class Gerente:public Funcionario {
	protected:
		float meta;

	public:
		Gerente(float, bool, int , string, string, float, string, string, string, string, int);
		~Gerente();

		//getters
		float getMeta();

		//settes
		void setMeta(float);

		// membros
		bool adicionaFuncionario(Empresa, Funcionario);


