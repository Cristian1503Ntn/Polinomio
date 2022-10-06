#include<stdio.h> 
#include<math.h> 
#include<iostream> 
#include <string>
#include <cctype>
#include <cstdlib>

using namespace std; 

float raiz ;
float ecuacion (float a, float b, float c) 
{ 
    raiz=((b*b)-(4*a*c)); 
    if(raiz<=0) 
    return 0; 
    else  
    return raiz;  
} 

  
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


int main(){ 
float a=0, b=0, c=0, n1,n2,n3,solucion1,solucion2; 
int resp,r=1; 
bool repitea = true;
bool repiteb = true;
bool repitec = true;
string lineaa,lineab,lineac;

cout<<" \t \t \n"; 

cout<<"POLINOMIO DE SEGUNDO GRADO \n\n"; 

while (r==1){ 

do{
    do {
	    cout << "\nIngrese un valor para a: ";
    	getline(cin, lineaa);
		
    	if (esEntero(lineaa)) {
			repitea = false;
	    } else {
			cout << "No ha ingresado un valor numérico, ingrese de nuevo" << endl;
    	}
	} while (repitea);
	
	a= atoi(lineaa.c_str());
}while((a==0)||(a>9999)||(a<-9999));

do{
    do {
	cout << "\nIngrese un valor de b: ";
	getline(cin, lineab);
		
	if (esEntero(lineab)) {
			repiteb = false;
	} else {
			cout << "No ha ingresado un valor numérico, ingrese de nuevo" << endl;
	}
	} while (repiteb);
	
	b= atoi(lineab.c_str());
}while((b>9999)||(b<-9999));

do{	
    do {
	cout << "\nIngrese un valor de c: ";
	getline(cin, lineac);
		
	if (esEntero(lineac)) {
			repitec = false;
	} else {
			cout << "No ha ingresado un valor numérico, ingrese de nuevo" << endl;
	}
	} while (repitec);
	
	c= atoi(lineac.c_str());
}while((c>9999)||(c<-9999));	

if(ecuacion(a, b, c)==0) 

  cout<<"La ecuacion no tiene solucion. "; 

if(ecuacion(a,b,c)!=0) 
{ 
	n1=(-b+sqrt(raiz)); 

	n2=(-b-sqrt(raiz)); 
	n3=2*a; 
	solucion1=n1/n3; 
	solucion2=n2/n3; 
	cout<<"\nLa primera solucion es : X1="; 
	cout<<solucion1; 
	cout<<"\nLa segunda solucion es : X2=";
	cout<<solucion2; 
		} 
	cout<<"\n\nDesea calcular otra vez? 1.SI, 2.NO "; 
	cin>>resp; 
	switch(resp){ 
	    case 1: 
	    r==1; 
	    break; 
	    case 2: 
	    cout<<"\nGracias por utilizar nuestro programa!!!!!!!!!"; 
	    return 0; 
	    break; 
	    default: 
		return 0;
        } 
			cout<<"  \n"; 
	} 
}