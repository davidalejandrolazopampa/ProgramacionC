//
// Created by davla on 5/09/2021.
//

#ifndef PROGRAMACIONC_1_H
#define PROGRAMACIONC_1_H

//Entrada y salida
void P1()
{
    //COUT imprimir - ENDL salto de linea
    cout << " Hello World " << endl;
    //tipos de Datos
        //Entero INT
    int numero = 15;
        //Decimales FLOTANTE FOAT
    float flotante = 10.45;
        //DOUBLE asignar y guardar numeros mas Extensos;
    double Pi = 3.1514;
        //CHAR letras - usar comillas se imprime cualquier caracter desde letras a numeros
    char letra = 'A';
    //IMPRESIONES
    cout << numero << endl ;
    cout << flotante << endl ;
    cout << Pi << endl ;
    cout << letra << endl ;

    //LECTURA y ENTRADA de DATOS
    int number; //Sirve para cualquier Variable
    cout << "Digite el numero: " << endl ;
    //Para Guardarlo
    cin >> number;
    cout << "Numero que digito es: " << number << endl;

}

#endif //PROGRAMACIONC_1_H
