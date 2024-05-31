#include <iostream>

using namespace std;

class Contenedor {
private:
	static const int TAM = 10; 
	int vectorSalarios[TAM];
	int posicion; 
	
public:
	Contenedor() {
		for (int i = 0; i < TAM; i++) {
			vectorSalarios[i] = 0;
		}
		posicion = 0; 
	}
	
	void imprimirVector() {
		for (int i = 0; i < TAM; i++) {
			cout << "[" << vectorSalarios[i] << "] ";
		}
		cout << endl;
	}
	
	void llenarVectorUser(int valor) {
		if (posicion < TAM) {
			vectorSalarios[posicion] = valor;
			posicion++;
		} else {
			cout << "Vector lleno" << endl;
		}
	}
	
	void llenarVectorRandom() {
		for (int i = 0; i < TAM; i++) {
			vectorSalarios[i] = rand() % 100;
		}
	}
	
	int sumarVector() {
		int suma = 0; 
		for (int i = 0; i < TAM; i++) {
			suma += vectorSalarios[i];
		}
		return suma;
	}
	
	int encontrarMayor() {
		int mayor = vectorSalarios[0];
		for (int i = 1; i < TAM; i++) { 
			if (vectorSalarios[i] > mayor) {
				mayor = vectorSalarios[i];
			}
		}
		return mayor;
	}
	
	int encontrarMenor() {
		int menor = vectorSalarios[0];
		for (int i = 1; i < TAM; i++) { 
			if (vectorSalarios[i] < menor) {
				menor = vectorSalarios[i];
			}
		}
		return menor;
	}
	
	int obtenerPromedio() {
		return sumarVector() / TAM;
	}
	
	int sumarExtremos() {
		return vectorSalarios[0] + vectorSalarios[TAM - 1];
	}
	
	void intercambiarExtremos() {
		int aux = vectorSalarios[0];
		vectorSalarios[0] = vectorSalarios[TAM - 1];
		vectorSalarios[TAM - 1] = aux;
	}
	
	void dividirVector(int divisor) {
		if (divisor == 0) {
			cout << "Error: No es posible dividir entre cero." << endl;
			return;
		}
		for (int i = 0; i < TAM; i++) {
			vectorSalarios[i] = vectorSalarios[i] / divisor;
		}
	}
};
