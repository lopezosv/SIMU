#include <iostream>
#include "math_tools.h"
#include "display_tools.h"

#include <stdio.h>
#include <stdlib.h>

int main(void)
{

float Determinate;

Matrix  hmwork_matrix;
Matrix  cofactores;
Matrix  Tramspuesta; 
Matrix  Respuesta; 

zeroes(hmwork_matrix, 3);


//file 0
hmwork_matrix.at(0).at(0) = 2;
hmwork_matrix.at(0).at(1) = 2;
hmwork_matrix.at(0).at(2) = 3;

//file 1
hmwork_matrix.at(1).at(0) = 4;
hmwork_matrix.at(1).at(1) = 5;
hmwork_matrix.at(1).at(2) = 6;

//file 1
hmwork_matrix.at(2).at(0) = 7;
hmwork_matrix.at(2).at(1) = 8;
hmwork_matrix.at(2).at(2) = 9;
//math a code


cout<<"\n";
cout<<"Inicial";
cout<<"\n";
showMatrix(hmwork_matrix);


//Calculando Determinate
Determinate = (1/determinant(hmwork_matrix));  
cout<<"Determinate: ";
cout<<Determinate;
cout<<"\n";

 if (Determinate == 0)
    {
       fprintf(stderr,"Ocurrio un error con el determinate %f en la linea # %d",Determinate,__LINE__);
       exit(EXIT_FAILURE);
    }


//Cofatores 
cofactors(hmwork_matrix, cofactores);
cout<<"\n";
cout<<"Cofactores";
cout<<"\n";
showMatrix(cofactores);



//transpuesta 

transpose(cofactores,Tramspuesta);
cout<<"\n";
cout<<"Tramspuesta";
cout<<"\n";
showMatrix(Tramspuesta);

//Respuesta

productRealMatrix(Determinate,Tramspuesta,Respuesta);
cout<<"\n";
cout<<"Respuesta";
cout<<"\n";
showMatrix(Respuesta);


return 0;

}