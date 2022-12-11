#include<iostream>
#include"Barco.h"

using namespace std;

int Barco::getPrecioBarco() { return precio_barco; }
void Barco::setPrecioBarco(int precio_barco) { this->precio_barco = precio_barco; }

Barco::Barco(int precio_barco, string placa, string marca, string modelo, string motor, string color, string combustible, int kilometraje) : Vehiculo(placa, marca, modelo, motor, color, combustible, kilometraje){
	setPrecioBarco(precio_barco);
}

void Barco::mostrar_barco(){
	cout << "Precio: " << precio_barco << endl;
	mostrar_Vehiculo();
}
