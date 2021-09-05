//
// Created by davla on 5/09/2021.
//

#ifndef PROGRAMACIONC_2_H
#define PROGRAMACIONC_2_H

void ejercicio_1()
{
    /*1-Escriba la siguiente expresión como expresión en C++*/
    /*(a/b)+1*/

    float a , b , resultado = 0 ;
    cout << "Ingrese el valor de A: " << endl; cin >> a ;
    cout << "Ingrese el valor de B: " << endl; cin >> b ;
    resultado =  (a/b)+1;
    //Sin redondear
    cout << "El resultado es: " << resultado << endl ;
    //Redodeando
    cout.precision(2);
    cout << "El resultado es: " << resultado << endl ;
}
void ejercicio_2()
{
    /*2-Escriba la siguiente expresión como expresión en C++*/
    /*(a+b) / (c+d)*/
    float a2 , b2, c2 , d2 , resultado2 ;

    cout << "Ingrese la letra A: " << endl ; cin >> a2;
    cout << "Ingrese la letra B: " << endl ; cin >> b2;
    cout << "Ingrese la letra C: " << endl ; cin >> c2;
    cout << "Ingrese la letra D: " << endl ; cin >> d2;

    resultado2 = ( a2 + b2 ) / ( c2 + d2 ) ;

    cout <<"Resputa : " << resultado2 << endl;
}
void ejercicio_3()
{
    /*3-Escriba la siguiente expresión como expresión en C++*/
    /*(a+b/c)  / (d+e/f)*/
    float a , b, c , d , e , f , resultado ;

    cout << "Ingrese la letra A: " << endl ; cin >> a;
    cout << "Ingrese la letra B: " << endl ; cin >> b;
    cout << "Ingrese la letra C: " << endl ; cin >> c;
    cout << "Ingrese la letra D: " << endl ; cin >> d;
    cout << "Ingrese la letra E: " << endl ; cin >> e;
    cout << "Ingrese la letra F: " << endl ; cin >> f;

    resultado = ( a + ( b / c ) ) / ( d + ( e / f ) ) ;

    cout <<"Resputa : " << resultado << endl;
}
void ejercicio_4()
{
    /*4-Escriba la siguiente expresión como expresión en C++*/
    /* "a / ( b / (c - d) )" */
    float a , b, c , d , resultado ;

    cout << "Ingrese la letra A: " << endl ; cin >> a;
    cout << "Ingrese la letra B: " << endl ; cin >> b;
    cout << "Ingrese la letra C: " << endl ; cin >> c;
    cout << "Ingrese la letra D: " << endl ; cin >> d;

    resultado = a + ( b / (c - d) ) ;

    cout <<"Resputa : " << resultado << endl;
}
void ejercicio_5()
{
    /* 5- Escriba un fragmento de programa que intercambie los valores de dos variales */
    int a , aux , b ;
    cout << "Valor A : " << endl; cin >> a ;
    cout << "Valor B : " << endl; cin >> b ;
    aux = a;
    a = b ;
    b = aux ;
    cout << "Nuevo Valor de A es " << a << endl ;
    cout << "Nuevo Valor de B es " << b << endl ;
}
void ejercicio_6()
{
    /* 6- Escriba un programa el cual lea la nota final de
     * 4 alumnos y calucle la nota final media de los 4 alumnos*/
    float alumno1 , alumno2 , alumno3 , alumno4 , notafinal = 0;
    cout << "Ingresar nota final del Alumno 1" << endl ; cin >> alumno1 ;
    cout << "Ingresar nota final del Alumno 2" << endl ; cin >> alumno2 ;
    cout << "Ingresar nota final del Alumno 3" << endl ; cin >> alumno3 ;
    cout << "Ingresar nota final del Alumno 4" << endl ; cin >> alumno4 ;
    notafinal = ( alumno1 + alumno2 + alumno3 + alumno4 ) / 4 ;
    cout << "El promedio es " << notafinal ;
}
void ejercicio_7()
{
    /*7- La nota final de un alumno es el el % de 3 notas
     * practicas 30%
     * teoria 60%
     * participacion 10%
     * dar respuesta su nota
     * */
    double practicas , teoria , particiacion , respuesta = 0 ;
    cout << "Ingrese nota de practica" << endl ; cin >> practicas ;
    cout << "Ingrese nota de teoria" << endl ; cin >> teoria ;
    cout << "Ingrese nota de particiacion" << endl ; cin >> particiacion ;
    respuesta = (practicas * 0.3) + (teoria * 0.6) + (particiacion * 0.1) ;
    cout << "Su nota es " << respuesta << endl;
}
void ejercicio_8()
{
    /*Escribir un programa donde pida los 2 catetos y de la hipotenusa "Teorema de pitagoras"*/
    double cateto1 , cateto2 , hipotenusa = 0 ;
    cout << "Ingrese el C1: " << endl ; cin >> cateto1 ;
    cout << "Ingrese el C2: " << endl ; cin >> cateto2 ;

    hipotenusa = sqrt( pow( cateto1 , 2 ) + pow( cateto2, 2) ) ;
    cout << "la Hipotenusa es " << hipotenusa ;
}
void ejercicio_9()
{
    /* 8 - datos X y Y dar formula raizX dividdo por Ycuadrado + 1*/
    double x , y , resultado = 0;
    cout << "Ingrese X: " << endl ; cin >> x ;
    cout << "Ingrese Y: " << endl ; cin >> y ;
    resultado = sqrt(x) / (pow(y,2) - 1 ) ;
    cout << "Respuesta es " << resultado << endl ;
}
void ejercicio_10()
{
    /*10- Formula de la expresion cuadratica*/
    double a , b , c , x1 = 0 , x2 = 0 ;
    cout << "Ingrese A: " << endl ; cin >> a ;
    cout << "Ingrese B: " << endl ; cin >> b ;
    cout << "Ingrese C: " << endl ; cin >> c ;

    x1 = ( (b*-1) + (sqrt((pow(b,2)-4*a*c)))) / (2*a);
    x2 = ( (b*-1) - (sqrt((pow(b,2)-4*a*c)))) / (2*a);

    cout << "La raiz X1 es " << x1 << endl ;
    cout << "La raiz X2 es " << x2 << endl ;
}
void P2()
{
    //ejercicio_1();
    //ejercicio_2();
    //ejercicio_3();
    //ejercicio_4();
    //ejercicio_5();
    //ejercicio_6();
    //ejercicio_7();
    //ejercicio_8();
    //ejercicio_9();
    ejercicio_10();

}


#endif //PROGRAMACIONC_2_H
