/*00254915*/
/*LABO 3*/
#include <iostream>
#include "math_tools.h"
#include "classes.h"
#include "tools.h"
#include "sel.h"
#include "display_tools.h"

int main(){
    vector<Matrix> localKs;
    vector<Vector> localbs;
    
    Matrix K;
    Vector b;
    Vector U;
    mesh m;

    leerMallayCondiciones(m);
    crearSistemasLocales(m,localKs,localbs);

    zeroes(K,m.getSize(NODES));
    zeroes(b,m.getSize(NODES));
    ensamblaje(m,localKs,localbs,K,b);
    
    applyNeumann(m,b);    
    applyDirichlet(m,K,b);

    zeroes(U,b.size());
    calculate(K,b,U);

    cout << "RESULTADO: \n";
    showVector(U);

    return 0;
}