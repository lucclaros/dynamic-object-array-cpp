#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
using namespace std;
class ALFA{
    public:
        ALFA();
        ~ALFA();
        void FUNCION();

};

ALFA::ALFA(){
    cout << "\n\nCONSTRUCTOR";
    getchar();

}

ALFA::~ALFA(){
    cout << "\n\nDESTRUCTOR";
    getchar();

}

void ALFA::FUNCION(){
    cout << "\n\nESTA ES LA FUNCION";
    getchar();


}

#define N 5

int main(){
    ALFA *P;
    int i;
    P = new ALFA[N];

    for(i = 0; i < N; i++){
        (P+i)->FUNCION();

    }
    delete[] P;

    cout << "\n\n\nFIN DEL PROGRAMA";
    return 0;
}
