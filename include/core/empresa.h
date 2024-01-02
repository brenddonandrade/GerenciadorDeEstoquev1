#ifndef EMPRESA_H
#define EMPRESA_H
#include <vector>

using namespace std;

class Cliente;
//class Ti;
//class Estoquista;
class Gerente;
//class SubGerente;
//class Vendedor;
//class Produtos;


class Empresa {
	protected:
		// padrao
		int numeroDeFuncionarios, numeroDeClientes;
		double capital;
		const string CNPJ;
		string nomeFantasia, regimeTributario, endereco, fone, email;

		// criados
		vector <Cliente*> Clientes;
		//Ti tis[2];
		//Estoquista estoquistas[2];
		vector <Gerente*> gerente;
		//SubGerente subgerente;
		//Vendedor vendedores[2];
	
	public:
		// Construtor e destrutor
		Empresa(int, int,  double, string,  string, string, string, string, string);
		~Empresa();

		//getters
		int getNumeroDeFuncionarios();
		int getNumeroDeClientes();
		double getCapital();
		string getCnpj() const;
		string getNomeFantasia();
		string getRegimeTributario();
		string getEndereco();
		string getFone();
		string getEmail();

		//setters
		void setNumeroDeFuncionarios(int);
		void setNumeroDeClientes(int);
		void setCapital(double);
		void setNomeFantasia(string);
		void setRegimeTributario(string);
		void setEndereco(string);
		void setFone(string);
		void setEmail(string);

		// declarando classe amiga
		friend class Gerente;
		//friend class SubGerente;
		//friend class Vendedor;

		// membros
		//friend bool adicionarFuncionario(Administrador);
		//friend bool adicionarFuncionario(Estoquista);
		//friend bool adicionarFuncionario(Gerente);
		//friend bool adicionarFuncionario(SubGerente);
		//friend bool adicionarFuncionario(Ti);
		//friend bool adicionarFuncionario(Vendedor);
		//friend bool adicionarCliente(Cliente);


};
#endif
