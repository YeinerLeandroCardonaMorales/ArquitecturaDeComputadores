//programa que multiplica 2 numeros enteros usando sumas sucesivas

#include <stdio.h> //Libreria Cargada
#include <iostream> //Libreria cargada
#include <string.h> //Libreria Cargada
#include <stdlib.h> //Libreria Cargada

using namespace std;

void MultiplicacionEnSumaSucesiva ();

int main (){//int main no es mas que la funcion principal

	printf ("\t-----Bienvenido-a-----\n\n");  //\n se utiliza para salto de linea
	//\t se utiliza para centrar texto
	
	printf ("programa que multiplica 2 numeros enteros usando sumas sucesivas\n\n");
	
	MultiplicacionEnSumaSucesiva ();
	
	system("pause");
	return 0;
	
}

void MultiplicacionEnSumaSucesiva (){
	int x; 
	int y;
	int temporal=0;
		
	printf ("ingrese el primer numero:"); scanf ("%d",&x);
	printf ("ingrese el segudo numero:"); scanf ("%d",&y);
	printf ("\n\n");
	printf ("Vas a multiplicar ");
	printf ("%d",x);
	printf ("*");
	printf ("%d",y);
	printf ("\n\n");
	
	for (int i=1; i<=y; i++)
	{		
		printf ("%u+",x);
		temporal=x+temporal;	
	}
	
	printf ("=");
	
	printf ("%d",temporal);
	
	printf ("\n\n");	
		
	getchar ();
	
}

