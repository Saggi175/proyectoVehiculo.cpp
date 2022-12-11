#ifndef VEHICULO_H_
#define VEHICULO_H_
#include<iostream>

using namespace std;

class Vehiculo{
	private:
		string placa, marca, modelo, motor, color, combustible;
		int kilometraje;
	public:
		Vehiculo();
		Vehiculo(string, string, string, string, string, string, int);
		string getPlaca();
		string getMarca();
		string getModelo();
		string getMotor();
		string getColor();
		string getCombustible();
		int getKilometraje();
		
		void setPlaca(string);
		void setMarca(string);
		void setModelo(string);
		void setMotor(string);
		void setColor(string);
		void setCombustible(string);
		void setKilometraje(int);
		void mostrar_Vehiculo();
};

#endif
