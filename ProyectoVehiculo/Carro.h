#ifndef CARRO_H_
#define CARRO_H_
#include"Vehiculo.h"

class Carro : public Vehiculo{
	private:
		int precio_carro, puertas_carro;
	public:
		int getPrecioCarro();
		int getPuertasCarro();
		Carro();
		Carro(int, int, string, string, string, string, string, string, int);
		
		void setPrecioCarro(int);
		void setPuertasCarro(int);
		void mostrar_carro();
};

#endif
