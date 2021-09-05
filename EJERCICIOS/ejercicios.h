//
// Created by davla on 5/09/2021.
//

#ifndef PROGRAMACIONC_EJERCICIOS_H
#define PROGRAMACIONC_EJERCICIOS_H

void ejercicio1();
void ejercicio2();
void ejercicio3();
void ejercicio4();
void Ejercicios()
{
    //ejercicio1();
    //ejercicio2();
    //ejercicio3();
    ejercicio4();
}

void ejercicio1()
{
    /*
     * 1- Escriba un programa el cual ingrese 2 numero y saque su suma resta multiplicación y división*/
    int numero1, numero2;
    //se coloca 0 para no inicializar con basura
    int suma = 0 , resta = 0 , multiplicacion = 0 , division = 0 ;
    cout << "Ingrese un numero 1: " << endl; cin >> numero1 ;
    cout << "Ingrese un numero 2: " << endl; cin >> numero2 ;
    suma = numero1 + numero2 ;
    resta = numero1 - numero2 ;
    multiplicacion = numero1 * numero2 ;
    division = numero1 / numero2 ;
    //Resultado
    cout << "La suma " << suma << endl ;
    cout << "La resta " << resta << endl ;
    cout << "La multiplicacion " << multiplicacion << endl ;
    cout << "La division " << division << endl ;

}
void ejercicio2()
{
    /*Escribe un programa que lea el precio de un producto y
     * muestre de salida el precio del producto al aplicarle el IGV del 18%*/
    double precio;
    cout << "Ingrecio del precio del producto: " << endl ;
    cin >> precio;
    //Formula
    precio = precio * ( 1 + (0.18) );
    //Resultado
    cout << "Total a pagar por el producto es " << precio << endl ;
}
void ejercicio3()
{
    /*Ingresar datos
     * EDAD ENTERO
     * SEXO CARACTER
     * ALTURA EN METROS REAL*/
    int edad ; char sexo[10] ; float altura ;
    cout << "Ingresar su edad: " << endl ;    cin >> edad ;
    cout << "Ingresar su sexo: " << endl ;    cin >> sexo ;
    cout << "Ingresar su altura en metros: " << endl ;  cin >> altura ;

    //Resultado
    cout << "Su edad es "<< edad << endl;
    cout << "Su sexo es "<< sexo << endl;
    cout << "Su altura es "<< altura << endl;
}
void ejercicio4()
{
    //Usamos el ejercicios 3
    /*Entradas ERRONEAS
    INT se llena con 4bit y el programa termina
    CHAR no hay problema porque es tipo cadena no supera a 10 que es la cantidad
    FLOAT si pongo caracter se cierra igual
     * EDAD ENTERO
     * SEXO CARACTER
     * ALTURA EN METROS REAL*/
    ejercicio3();
}

#endif //PROGRAMACIONC_EJERCICIOS_H
