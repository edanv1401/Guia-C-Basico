# Guia de C++
[![N|Solid](https://github.com/edanv1401/Guia-C-Basico/blob/main/Versiones%20de%20la%20guia/Logos/resizeImgCPP.png)](https://github.com/edanv1401/Guia-C-Basico)
-
Esta guía tiene como finalidad enseñar el lenguaje de C++ ,empezando con los mas basico (entrada de datos, distinguir los tipos de datos,conocer algunas de las palabras reservadas , ciclos , condicionales) ,y terminando en un punto intermedio del lenguaje con la capacidad de poder conocer
  - La sintaxis del lenguaje
  - Distinguir los tipos de datos
  - Poder crear librerias
  - Manejo de POO
  - Conocimiento de Punteros

> 1/12/2020 recolectamiento de informacion para POO


| Tipos de dato | Memoria |
| ------ | ------ |
| int | 32 bits |
| long long int | 64 bits |
| float | 32 bits |
| double | 64 bits |
| char | 8 bits |
| string | 64 bits|
| bool | 8 bits |

# cin

Standard input stream 
Este objeto proporciona la entrada de datos de forma estándar, por lo que es la manera más sencilla de ingresar valores debido a que detecta automáticamente el tipo de dato. La palabra reservada cin va acompañada de los signos >> indicando donde se va a guardar lo que entre por teclado.

El siguiente ejemplo muestra la entrada de datos para una cadena de caracteres(string) y un numero entero(int).

```c++
#include<bits/stdc++.h>
#include<cstdlib>
using namespace std;
int main (){
    string cadena;
    cin>>cadena;
    int numero;
    cin>>numero;
}
```
Como podemos apreciar en el ejemplo anterior tenemos que tener las variables declaradas para luego indicarle al objeto cin que esa variable tendrá un valor.

# cout

Standard output stream.

Cout es el método de salida estándar lo que quiere decir que nos ayuda a mostrar en consola, al llamar este objeto indicamos con << que queremos que salga a consola los datos de las variables. Por lo que lo convierte en una manera sencilla de mostrar los datos ya que al igual que cin , cout detecta automáticamente de que tipo es la variable que queremos imprimir.
Por ejemplo, si queremos mostrar el número π realizamos lo siguiente:

```c++
#include<bits/stdc++.h>
#include<cstdlib>
using namespace std;
int main (){
    double pi=3.1416;
    cout<<"3.1416 \n";
    cout<<pi<<"\n";
}
```
# Porque realizar la guia

Esta guia es creada a partir de mis experiencias como programador competitivo de la Universidad ECCI , aprendizaje adquirido de varios (libros , guias e internet) , por lo que muestro de una manera sencilla como funciona la funcion , objeto , libreria y demas .todo esto apoyado siempre que es posible con codigo
Con esta guia busco mejorar el nivel de programacion del lector , ademas te apoyarse en partes teoricas y practicas.
