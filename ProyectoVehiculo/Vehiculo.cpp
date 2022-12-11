#include<iostream>
#include"Vehiculo.h"

using namespace std;

string Vehiculo::getPlaca() { return placa; }
string Vehiculo::getMarca() { return marca; }
string Vehiculo::getModelo() { return modelo; }
string Vehiculo::getMotor() { return motor; }
string Vehiculo::getColor() { return color; }
string Vehiculo::getCombustible() { return combustible; }
int Vehiculo::getKilometraje() { return kilometraje; }

void Vehiculo::setPlaca(string placa) { this->placa = placa; }
void Vehiculo::setMarca(string marca) { this->marca = marca; }
void Vehiculo::setModelo(string modelo) { this->modelo = modelo; }
void Vehiculo::setMotor(string motor) { this->motor = motor; }
void Vehiculo::setColor(string color) { this->color = color; }
void Vehiculo::setCombustible(string combustible) { this->combustible = combustible; }
void Vehiculo::setKilometraje(int kilometraje) { this->kilometraje = kilometraje; }

Vehiculo::Vehiculo(string placa, string marca, string modelo, string motor, string color, string combustible, int kilometraje){
	setPlaca(placa);
	setMarca(marca);
	setModelo(modelo);
	setMotor(motor);
	setColor(color);
	setCombustible(combustible);
	setKilometraje(kilometraje);
}

void Vehiculo::mostrar_Vehiculo(){
	cout << "Placa: "<< placa << endl;
	cout << "Marca: " << marca << endl;
	cout << "Modelo: "<< modelo << endl;
	cout << "Motor: " << motor << endl;
	cout << "Color: " << color << endl;
	cout << "Combustible: " << combustible << endl;
	cout << "Kilometraje: " << kilometraje << endl;
}
