#include <iostream>
#include"Vehiculo.h"
#include"Carro.h"
#include"Camioneta.h"
#include"Motocicleta.h"
#include"Barco.h"

void carro(){
	string placa, marca, modelo, motor, color, combustible;
	int precio, puertas, kilometraje;
	
	cout << "Digite el precio del carro: " << endl;
	cin >> precio;
	fflush(stdin);
	cout << "Digite la cantidad de puertas del carro: " << endl;
	cin >> puertas;
	fflush(stdin);
	cout << "Digite la placa del carro: " << endl;
	getline(cin,placa);
	fflush(stdin);
	cout << "Digite la marca del carro: " << endl;
	getline(cin,marca);
	fflush(stdin);
	cout << "Digite el modelo del carro: " << endl;
	getline(cin,modelo);
	fflush(stdin);
	cout << "Digite el motor del carro: " << endl;
	getline(cin,motor);
	fflush(stdin);
	cout << "Digite el color del carro: " << endl;
	getline(cin,color);
	fflush(stdin);
	cout << "Digite el tipo de combustible del carro: " << endl;
	getline(cin,combustible);
	fflush(stdin);
	cout << "Digite el kilometraje del carro: " << endl;
	cin >> kilometraje;
	
	Carro C(precio, puertas, placa, marca, modelo, motor, color, combustible, kilometraje);
	
	system("cls");
	
	C.mostrar_carro();
}

void camioneta(){
	string placa, marca, modelo, motor, color, combustible;
	int precio, puertas, ruedas, kilometraje;
	
	cout << "Digite el precio del camioneta: " << endl;
	cin >> precio;
	fflush(stdin);
	cout << "Digite la cantidad de puertas del camioneta: " << endl;
	cin >> puertas;
	fflush(stdin);
	cout << "Digite la cantidad de ruedas de la camioneta: " << endl;
	cin >> ruedas;
	fflush(stdin);
	cout << "Digite la placa del camioneta: " << endl;
	getline(cin,placa);
	fflush(stdin);
	cout << "Digite la marca del camioneta: " << endl;
	getline(cin,marca);
	fflush(stdin);
	cout << "Digite el modelo del camioneta: " << endl;
	getline(cin,modelo);
	fflush(stdin);
	cout << "Digite el motor del camioneta: " << endl;
	getline(cin,motor);
	fflush(stdin);
	cout << "Digite el color del camioneta: " << endl;
	getline(cin,color);
	fflush(stdin);
	cout << "Digite el tipo de combustible del camioneta: " << endl;
	getline(cin,combustible);
	fflush(stdin);
	cout << "Digite el kilometraje del camioneta: " << endl;
	cin >> kilometraje;
	
	Camioneta CA(precio, puertas, ruedas, placa, marca, modelo, motor, color, combustible, kilometraje);
	
	system("cls");
	
	CA.mostrar_camioneta();
}

void motocicleta(){
	string placa, marca, modelo, motor, color, combustible;
	int precio, ruedas, kilometraje;
	
	cout << "Digite el precio de la motocicleta: " << endl;
	cin >> precio;
	fflush(stdin);
	cout << "Digite la cantidad de ruedas de la motocicleta: " << endl;
	cin >> ruedas;
	fflush(stdin);
	cout << "Digite la placa de la motocicleta: " << endl;
	getline(cin,placa);
	fflush(stdin);
	cout << "Digite la marca de la motocicleta: " << endl;
	getline(cin,marca);
	fflush(stdin);
	cout << "Digite el modelo de la motocicleta: " << endl;
	getline(cin,modelo);
	fflush(stdin);
	cout << "Digite el motor de la motocicletaa: " << endl;
	getline(cin,motor);
	fflush(stdin);
	cout << "Digite el color de la motocicleta: " << endl;
	getline(cin,color);
	fflush(stdin);
	cout << "Digite el tipo de combustible de la motocicleta: " << endl;
	getline(cin,combustible);
	fflush(stdin);
	cout << "Digite el kilometraje de la motocicleta: " << endl;
	cin >> kilometraje;
	
	Motocicleta M(precio, ruedas, placa, marca, modelo, motor, color, combustible, kilometraje);
	
	system("cls");
	
	M.mostrar_motocicleta();
}

void barco(){
	string placa, marca, modelo, motor, color, combustible;
	int precio, kilometraje;
	
	cout << "Digite el precio del barco: " << endl;
	cin >> precio;
	fflush(stdin);
	cout << "Digite la placa del barco: " << endl;
	getline(cin,placa);
	fflush(stdin);
	cout << "Digite la marca del barco: " << endl;
	getline(cin,marca);
	fflush(stdin);
	cout << "Digite el modelo del barco: " << endl;
	getline(cin,modelo);
	fflush(stdin);
	cout << "Digite el motor del barco: " << endl;
	getline(cin,motor);
	fflush(stdin);
	cout << "Digite el color del barco: " << endl;
	getline(cin,color);
	fflush(stdin);
	cout << "Digite el tipo de combustible del barco: " << endl;
	getline(cin,combustible);
	fflush(stdin);
	cout << "Digite las Millas Nauticas del barco: " << endl;
	cin >> kilometraje;
	
	Barco B(precio, placa, marca, modelo, motor, color, combustible, kilometraje);
	
	system("cls");
	
	B.mostrar_barco();
}

int main(int argc, char** argv){
	int eleccion;
	
	do{
		cout << "Elija un Vehiculo:\n \n1-Carro \n2-Camioneta \n3-Motocicleta \n4-Barco \n5-Salir"<<endl;
		cin >> eleccion;
	
		system("cls");
	
		switch(eleccion){
			case 1: 
				carro();
				system("pause");
			break;
			case 2: 
				camioneta();
				system("pause");
			break;
			case 3: 
				motocicleta();
				system("pause");
			break;
			case 4: 
				barco();
				system("pause");
			break;
			default: 
				cout << "Eleccion Incorrecta" << endl;
				system("pause");
			break;
		}
		system("cls");
	}while(eleccion != 5);
	return 0;
}

