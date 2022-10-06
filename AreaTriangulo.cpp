#include <iostream>
#include <math.h>
#include<stdio.h>
#include<math.h> 
#include <string>
#include <cctype>
#include <cstdlib>


using namespace std;

bool esEntero(string linea) {
	bool esEntero = true;
	int longitud = linea.size();
	if (longitud == 0) {
		esEntero = false;
	} else if (longitud == 1 && !isdigit(linea[0])) {
		esEntero = false;
	} else {
		int indice = 0;
		if (linea[0] == '+' || linea[0] == '-') {
			indice = 1;
		} else {
			indice = 0;
		}
		while (indice < longitud) {
			if (!isdigit(linea[indice])) {
				esEntero = false;
				break;
			}
			indice++;
		}
	}
	return esEntero;	
}

int main()
{
    float re,semi,a,b,c;
    bool repitea = true;
    bool repiteb = true;
    bool repitec = true;
    string lineaa,lineab,lineac;
    cout<<" \t \t \n"; 

    cout<<"EJERCICIO AREA DEL TRIANGULO \n\n"; 
    do{
        do {
	cout << "\nIngrese un valor de a: ";
	getline(cin, lineaa);
		
	if (esEntero(lineaa)) {
			repitea = false;
	} else {
			cout << "No has ingresado un valor correcto, ingresa de nuevo" << endl;
	}
	} while (repitea);
	
	a= atoi(lineaa.c_str());

    if(a<=0){
        cout<<"Ingrese numero mayores a 0"<<endl;
    }
    
    }while((a<=0)||(a>9999)||(a<-9999));
    
    
    do{
        do {
	cout << "\nIngrese un valor de b: ";
	getline(cin, lineab);
		
	if (esEntero(lineab)) {
			repiteb = false;
	} else {
			cout << "No has ingresado un valor correcto, ingresa de nuevo" << endl;
	}
	} while (repiteb);
	
	b= atoi(lineab.c_str());
    if(b<=0){
        cout<<"Ingrese numero mayores a 0"<<endl;
    }
    }while((b<=0)||(b>9999)||(b<-9999));
    
    
    do{
    do {
	cout << "\nIngrese un valor de c: ";
	getline(cin, lineac);
		
	if (esEntero(lineac)) {
			repitec = false;
	} else {
			cout << "NNo has ingresado un valor correcto, ingresa de nuevo" << endl;
	}
	} while (repitec);
	
	c= atoi(lineac.c_str());

    if(c<=0){
        cout<<"Ingrese numero mayores a 0"<<endl;
    }
    }while((c<=0)||(c>9999)||(c<-9999));
    
    if(((a+b)>c)&((a+c)>b)&((b+c)>a)){
        if((a==b)&(b==c)&(c==a)){
            re=((sqrt(3)/4)*(pow(a,2)));
            
            cout<<endl<<endl;
            cout<<"||||||||||||||||||||||||||||||"<<endl;
            cout<<"Es un triangulo Equilatero"<<endl<<endl;
            cout<<"El area del triangulo es :"<<re<<endl;
            cout<<"||||||||||||||||||||||||||||||"<<endl;
        }
        if((a==b)&(b!=c)|| (a==c)&(c!=b)||(b==c)&(a!=c)){
             re=(b*sqrt(pow(a,2)-(pow(b,2)/4)))/2;
             cout<<endl<<endl;
            cout<<"||||||||||||||||||||||||||||||"<<endl;
            cout<<"Es un triangulo Isosceles"<<endl<<endl;
            cout<<"El area del triangulo es :"<<re<<endl;
            cout<<"||||||||||||||||||||||||||||||"<<endl;
        }
        if((b!=c)&(a!=c)&(a!=b)){
            semi=((a+b+c)/2);
            re=(sqrt((semi*(semi-a))*(semi-b)*(semi-c)));
            cout<<endl<<endl;
            cout<<"||||||||||||||||||||||||||||||"<<endl;
            cout<<"Es un triangulo Escaleno"<<endl<<endl;
            cout<<"El area del triangulo es :"<<re<<endl;
            cout<<"||||||||||||||||||||||||||||||"<<endl;
        }
    }else
    cout<<"Los numeros ingresados no forman un triangulo";
    return 0;
}
