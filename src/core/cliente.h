#include <iostream>
#include <string>
using namespace std;

#include "../../include/core/pessoa.h"
#include "../../include/core/cliente.h"

	Cliente::Cliente(const string registro, float totalComprado,const string nome,const string dataNascimento,\
			const string nomePai, const string nomeMae, const string naturalidade, const string identidade,\
			const string cpf, string fone, int idade):Pessoa(nome, dataNascimento, nomePai, nomeMae,\
				naturalidade, identidade, cpf, fone, idade), REGISTRO(registro) {
				setTotalComprado(totalComprado);
			}
	Cliente::~Cliente(){
		cout << "Cliente " << getNome() << " de registo " << getRegistro() << " foi destruido.\n" << endl;
	}

	// getters
	string Cliente::getRegistro() const { return REGISTRO; }
	float Cliente::getTotalComprado() { return totalComprado; }

	//setters
	void Cliente::setTotalComprado(float letTotalComprado) { totalComprado = letTotalComprado; }

	
