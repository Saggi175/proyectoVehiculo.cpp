#ifndef BARCO_H_
#define BARCO_H_
#include"Vehiculo.h"

class Barco : public Vehiculo{
	private:
		int precio_barco;
	public:
		int getPrecioBarco();
		Barco(int, string, string, string, string, string, string, int);
		
		void setPrecioBarco(int);
		void mostrar_barco();
};

#endif
