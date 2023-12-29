#ifndef EMPRESA_H
#define EMPRESA_H

class Funcionario;
class Clientes;

class Empresa {
	protected:
		int numeroDeFucinarios, numeroDeClientes;
		double capital;
		const string CPNJ;
		string nomeFantasia, regimeTributario, endereco, fone, email;
	
	public:
		// Construtor e destrutor
		Empresa(int, int,  double, string,  string, string, string, string, string);
		~Empresa();

		//getters
		int getNumeroDeFuncionarios();
		int getNumeroDeClientes();
		double getCapital();
		string getCnpj() const();
		string getNomeFantasia();
		string getRegimeTributario();
		string getEndereco();
		string getFone();
		string getEmail();

		//setters
		void setNumeroDeFuncionarios(int);
		void setNumeroDeClientes(int);
		void setCapital();
		void setNomeFantasia(string);
		void setRegimeTributario(string);
		void setEndereco(string);
		void setFone(string);
		void setEmail(string);

		// declarando classe amiga
		friend class Gerente;
		friend class SubGerente;
		friend class Vendedor;

		// membros
		friend bool adicionarFuncionario(Funcionario);
		friend bool adicionarCliente(Cliente);


};
#endif
