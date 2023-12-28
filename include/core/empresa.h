#ifndef EMPRESA_H
#define EMPRESA_H

class Funcionario;
class Clientes;

class Empresa {
	private:
		int numeroDeFucionario;
		double capital;
		string cnpj, nomeFantasia, regimeTributario, endereco, fone, email;
	
	public:
		// Construtor e destrutor
		Empresa(int, double, string, string, string, string, string);
		~Empresa();

		//getters
		int getNumeroDeFuncionario();
		double getCapital();
		string getCnpj();
		string getNomeFantasia();
		string getRegimeTributario();
		string getEndereco();
		string getFone();
		string getEmail();

		//setters
		void setNumeroDeFuncionario(int);
		void setCapital();
		void setCpnj();
		void setNomeFantasia(string);
		void setRegimeTributario(string);
		void setEndereco(string);
		void setFone(string);
		void setEmail(string);

		// declarando classe amiga
		friend class Gerente;
		friend class SubGerente;

		// membros
		friend bool adicionarFuncionario(Funcionario);
		friend bool adicionarCliente(Cliente);


};
#endif
