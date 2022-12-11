#include<iostream>
#include"Motocicleta.h"

using namespace std;

int Motocicleta::getPrecioMotocicleta() { return precio_motocicleta; }
int Motocicleta::getRuedasMotocicleta() { return ruedas_motocicleta; }

void Motocicleta::setPrecioMotocicleta(int precio_motocicleta){
	this->precio_motocicleta = precio_motocicleta; 
}
	
void Motocicleta::setRuedasMotocicleta(int ruedas_motocicleta){
	this->ruedas_motocicleta = ruedas_motocicleta;
}

Motocicleta::Motocicleta(int precio, int puertas, string placa, string marca, string modelo, string motor, string color, string combustible, int kilometraje) : Vehiculo(placa, marca, modelo, motor, color, combustible, kilometraje){
	setPrecioMotocicleta(precio_motocicleta);
	setRuedasMotocicleta(ruedas_motocicleta);
}

void Motocicleta::mostrar_motocicleta(){
	cout << "Precio: " << precio_motocicleta << endl;
	cout << "Ruedas: " << ruedas_motocicleta << endl;
	mostrar_Vehiculo();
}
