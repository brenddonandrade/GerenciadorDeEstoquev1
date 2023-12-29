#include <iostream>
#include <string>
using namespace std;

#include "../../include/core/pessoa.h"
#include "../../include/core/funcionario.h"
#include "../../include/core/cliente.h"
#include "../../include/core/empresa.h"

	Empresa::Empresa(int numeroDeFuncionarios, int numeroDeClientes, double capital, const string cnpj, string nomeFantasia, \
			string regimeTributario, string endereco, string fone, string email):CNPJ(cnpj){
		setNumeroDeFuncionarios(numeroDeFuncionarios);
		setNumeroDeClientes(numeroDeClientes);
		setCapital(capital);
		setNomeFantasia(nomeFantasia);
		setRegimeTributario(regimeTributario);
		setEndereco(endereco);
		setFone(fone);
		setEmail(email);
	}

	Empresa::~Empresa() {
		cout << "Objeto " << getNomeFantasia() << " destruido.\n" << endl;
	}

	
	//getters
	int Empresa::getNumeroDeFuncionarios() { return numeroDeFuncionarios; }
	int Empresa::getNumeroDeClientes() { return numeroDeClientes; }
	double Empresa::getCapital() { return capital; }
	string Empresa::getCnpj() const { return CNPJ; }
	string Empresa::getNomeFantasia() { return nomeFantasia; }
	string Empresa::getRegimeTributario() { return regimeTributario; }
	string Empresa::getEndereco() { return endereco; }
	string Empresa::getFone() { return fone; }
	string Empresa::getEmail() { return email; }

	//setters
	void Empresa::setNumeroDeFuncionarios(int letNumeroDeFuncionarios) { numeroDeFuncionarios = letNumeroDeFuncionarios; }
	void Empresa::setNumeroDeClientes(int letNumeroDeClientes) { numeroDeClientes = letNumeroDeClientes; }
	void Empresa::setCapital(double letCapital) { capital = letCapital; }
	void Empresa::setNomeFantasia(string letNomeFantasia) { nomeFantasia = letNomeFantasia; }
	void Empresa::setRegimeTributario(string letRegimeTributario) { regimeTributario = letRegimeTributario; }
	void Empresa::setEndereco(string letEndereco) { endereco = letEndereco; }
	void Empresa::setFone(string letFone) { fone = letFone; } 
	void Empresa::setEmail(string letEmail) { email = letEmail; }




