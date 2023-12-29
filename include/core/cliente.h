#ifndef CLIENTE_H
#define CLIENTE_H

class Cliente:public Pessoa {
	protected:
		string const REGISTRO;
		float totalComprado;
	
	public:
		Cliente(string, float, string, string, string, string, string, string, string, string, int);
		~Cliente();

		//getters
		string getRegistro() const;
		float getTotalComprado();

		//setters
		void setTotalComprado(float);
};
#endif
