#ifndef CAMIONETA_H_
#define CAMIONETA_H_
#include"Vehiculo.h"

class Camioneta : public Vehiculo{
	private:
		int precio_camioneta, puertas_camioneta, ruedas_camioneta;
	public:
		int getPrecioCamioneta();
		int getPuertasCamioneta();
		int getRuedasCamioneta();
		Camioneta(int, int, int, string, string, string, string, string, string, int);
		
		void setPrecioCamioneta(int);
		void setPuertasCamioneta(int);
		void setRuedasCamioneta(int);
		void mostrar_camioneta();
};

#endif
