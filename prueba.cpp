#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int const SERV_DESAYUNO = 0;
int const SERV_ALMUERZO = 1;
int const SERV_ONCE = 2;
int const SERV_CENA = 3;

struct SaldoColaborador {
    char rut[11];
    int saldo_desayuno;
    int saldo_almuerzo;
    int saldo_once;
    int saldo_cena;
};

bool pregunta(){
    string y_n;
    cout<< "Desea ingresar otro consumidor?:";
    cin>> y_n;
    if (y_n == "y" || y_n == "Y"){
        return true;
    }
    else
    { return false; }
    
}

/*
13314801-9 DESAYUNO
13314801-9 ALMUERZO
03686224-6 ONCE
78927357-K CENA
03686224-6 ONCE
*/


int main(){
    fstream archivito;
    archivito.open("consumos.txt", ios::out);
    int c = 0;
    while (pregunta())
    {   c += 1;
        SaldoColaborador c;
        cout<< "Ingrese su rut (Formato 12345678-9): \n";
        cin >> c.rut;


        
    };
    
    cout << "Ingrese su rut: \n";
    

    archivito.close();

    return 0;
}
