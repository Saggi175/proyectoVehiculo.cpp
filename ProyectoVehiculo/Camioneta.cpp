#include<iostream>
#include"Camioneta.h"

using namespace std;

int Camioneta::getPrecioCamioneta() { return precio_camioneta; }
int Camioneta::getPuertasCamioneta() { return puertas_camioneta; }
int Camioneta::getRuedasCamioneta() { return ruedas_camioneta; }

void Camioneta::setPrecioCamioneta(int precio_camioneta) { this->precio_camioneta = precio_camioneta; }
void Camioneta::setPuertasCamioneta(int puertas_camioneta) { this->puertas_camioneta = puertas_camioneta; }
void Camioneta::setRuedasCamioneta(int ruedas_camioneta) { this->ruedas_camioneta = ruedas_camioneta; }

Camioneta::Camioneta(int precio_camioneta, int puertas_camioneta, int ruedas_camioneta, string placa, string marca, string modelo, string motor, string color, string combustible, int kilometraje) : Vehiculo(placa, marca, modelo, motor, color, combustible, kilometraje){
	setPrecioCamioneta(precio_camioneta);
	setPuertasCamioneta(puertas_camioneta);
	setRuedasCamioneta(ruedas_camioneta);
}

void Camioneta::mostrar_camioneta(){
	cout << "Precio: " << precio_camioneta << endl;
	cout << "Puertas: " << puertas_camioneta << endl;
	cout << "Ruedas: " << ruedas_camioneta << endl;
	mostrar_Vehiculo();
}
