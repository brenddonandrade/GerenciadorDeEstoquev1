#include <iostream>
#include <string>
#include <chrome>
#include <ctime>
using namespace std;

#include "../../include/utils/data_atual.h"

string dataAtual() {
	// Obtém o tempo atual
	auto currentTime = chrono::system_clock::to_time_t(chrono::system_clock::now());

	// Converte para uma estrutura de tempo local
	struct tm* localTime = localtime(&currentTime);

	// Extrai o dia do mês
	int day = localTime->tm_mday;

	return day;
}
