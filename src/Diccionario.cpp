#include <iostream>

using namespaces std;


Diccionario::Diccionario(){/*No hace nada*/}

int Diccionario::size()const{
	int cont=0;
	ArbolGeneral<info>::const_iter_preorden it;
	for(it=datos.begin();it!=datos.end();++it){
		if( (*it).final )
			cont++;
	}
	return cont;
}

bool Diccionario::Esta(string palabra){
	ArbolGeneral<info>::const_iter_preorden it=datos.begin(); ++it;
	int index=0; bool encontrado=false;
	for(it;it!=datos.end() && encontrado==false;++it){
		if( (*it).c==palabra[index] ){
			encontrado=true;
			index++;
		}
	}
}