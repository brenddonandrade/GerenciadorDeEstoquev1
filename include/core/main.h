#ifndef MAIN_H
#define MAIN_H

#include <string>
using namespace std;

#include "pessoa.h"
#include "funcionario.h"

void inicialize(){
	Pessoa p1("Brenddon Nascimento Pereira", "06/12/1992","Igor Nascimento", "Gisele Pereira da Silva", "Volta Redonda", "38.344.813-0", "102.234.567-67", "(22) 99999-9999", 24);
        p1.mostra();
	
	cout << "\n" << endl;
	Funcionario f1(1122, "12/10/18", "Brenddon Nascimento Pereira", "06/12/1992","Igor Nascimento", "Gisele Pereira da Silva", "Volta Redonda", "38.344.813-0", "102.234.567-67", "(22) 99999-9999", 24);

	f1.mostra();
	return;
};
#endif


