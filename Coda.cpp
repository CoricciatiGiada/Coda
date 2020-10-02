#include <iostream>
#include "Coda.h"

using namespace std;

int inserisci(coda &c, int e)
/*
* Inserisce in coda l'elemento e
* Implementare anche il controllo di coda piena.
* restituisce 0 se l'inserimento è avvenuto
* restituisce -1 se non è stato possibile inserire il nuovo 
* elemento
*/
{
	int temp = -1;
	//Di seguito il codice
  if(c.fine<N){
    c.queue[c.fine]=e;
    c.fine++;
    temp++;
  }
	return temp;
}

int estrai(coda &c)
/*
 * Estrae e restituisce il primo elemento in coda
 * Restituisce 0 se la coda è vuota
 */
{
	int temp = 0;
	//Di seguito il codice
	if(c.testa<c.fine){
    temp=c.queue[c.testa];
    c.testa++;
  }
	return temp;
}

void stampa (coda c)
/*
 * Stampa tutti gli elementi presenti in coda oppure 
 * un messaggio di coda vuota nel caso in cui non ci
 * siano elementi in coda.
 */
{
	if(c.fine!=0){
    cout<<"Coda: ";
    for(int i=0; i<N-1; i++){
      cout<<c.queue[i]<<"  ";
    }
    cout<<endl<<endl;
  }else{
    cout<<"Coda vuota!"<<endl<<endl;
  }
}
