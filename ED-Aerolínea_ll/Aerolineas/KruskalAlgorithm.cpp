#include <QCoreApplication>

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <list>
#include<stdio.h>
#include<conio.h>
#define DEBUG
#define REP(i,a)  for(i=0;i<a;i++)
#define FOR(i,a,b) for(i=a;i<b;i++)
#define ii pair<int,int>

using namespace std;
vector<int> pset;
vector<pair<int,ii> >grafo;

void initSet(int size)
{
    int i;
    pset.resize(size);
    REP(i,size+1)
        pset[i]=i;
}

int findSet(int i)
{
    return (pset[i]==i)? i:(pset[i]=findSet(pset[i]));
}

void unionSet(int i,int j)
{
    pset[findSet(i)]=findSet(j);
}

bool isSameSet(int i,int j)
{
    if(findSet(i) == findSet(j))
        return true;
    return false;
}

// algoritmo de kruskal
/* pasos:
 *  Remover loops
 *  Eliminar vertices paralelos (se conserva el de menor peso)
 *  Crear tabla de vertices
 *  Colocar en orden ascendente los pesos
*/
void  kruskal(int N)
{int sum=0,i;
initSet(N);
sort(grafo.begin(),grafo.end());

for(i=0;i<grafo.size();i++)
{      pair<int,ii>aux=grafo[i];
    if(!isSameSet(aux.second.first,aux.second.second))
    {    cout<<"pasa en: "<<aux.second.first<<","<<aux.second.second<<endl;
        sum=aux.first+sum;
        unionSet(aux.second.first,aux.second.second);
    }
}
cout<<"el costo"<<sum;
}
/*

kruskal(V);
getch();
return 0;
}*/
