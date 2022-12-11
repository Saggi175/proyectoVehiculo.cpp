#include<iostream>
#include"Carro.h"

using namespace std;

int Carro::getPrecioCarro() { return precio_carro; }
int Carro::getPuertasCarro() { return puertas_carro; }

void Carro::setPrecioCarro(int precio_carro) { this->precio_carro = precio_carro; }
void Carro::setPuertasCarro(int puertas_carro) { this->puertas_carro = puertas_carro; }

Carro::Carro(int precio_carro, int puertas_carro, string placa, string marca, string modelo, string motor, string color, string combustible, int kilometraje) : Vehiculo(placa, marca, modelo, motor, color, combustible, kilometraje){
	setPrecioCarro(precio_carro);
	setPuertasCarro(puertas_carro);
}

void Carro::mostrar_carro(){
	cout << "Precio: " << precio_carro << endl;
	cout << "Puertas: " << puertas_carro << endl;
	mostrar_Vehiculo();
}
