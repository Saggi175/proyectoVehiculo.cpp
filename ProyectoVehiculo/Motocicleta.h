#ifndef MOTOCICLETA_H_
#define MOTOCICLETA_H_
#include"Vehiculo.h"

class Motocicleta : public Vehiculo{
	private:
		int precio_motocicleta, ruedas_motocicleta;
	public:
		int getPrecioMotocicleta();
		int getRuedasMotocicleta();
		Motocicleta(int, int, string, string, string, string, string, string, int);
		
		void setPrecioMotocicleta(int);
		void setRuedasMotocicleta(int);
		void mostrar_motocicleta();
};

#endif
