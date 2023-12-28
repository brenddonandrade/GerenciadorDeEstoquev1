#include <iostream>
#include <string>
using namespace std;

#include "../core/pessoa.h"
#include "../core/funcionario.h"


void operacoes(){
	bool ativo = true;
	int operacoes;
	int tipo_operacao = 0;

	do {
		cout 	<< "Operacao desejada: " << endl
			<< "Quadro de funcionarios: " << tipo_operacao << endl
			<< "Sair do sistema: " << tipo_operacao++ << endl;

		cint >> operacao;

		switch (operacao) {
			case 0:
				cout << "Quadro de funcionarios:" << quadro_de_funcionarios();
				break;
			case 1:
				cout << "Saindo do sistema de operações. \nEXIT!!\n" << endl;
				ativo = false;	
			default:
				cout << "Oção inválida." << endl;
				break;

	} while(ativo);
	return;	
}
