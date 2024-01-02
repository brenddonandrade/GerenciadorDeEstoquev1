#ifndef PRODUTOS_H
#define PRODUTOS_H

class Produtos {
	protected:
		const int CODIGO;
		const string NOME;
		float preco;
		bool promocao;

	public:
		Produtos(const int, string, float, bool);
		~Produtos();

		//getters
		int getCodigo() const;
		string getNome() const;
		float getPreco();
		bool getPromocao();

		//setters
		void setPreco(float);
		void setPromocao(bool letPromocao);

		//membros
		void mostra();

