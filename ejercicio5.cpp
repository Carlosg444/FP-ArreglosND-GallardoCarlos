#include <iostream> 
using namespace std;

int main() {
    int A[4][4];   
    
    cout<<"Ingrese los datos de la matriz (4x4): "<<endl;
    for (int i = 0; i < 4; ++i) { 
        for (int j = 0; j < 4; ++j) { 
            cout << "Ingrese el valor para A[" << i << "][" << j << "]: ";
            cin >> A[i][j];
        }
    }

    int max= A[0][0]; 
    int min= A[0][0];
    
    int max_i= 0; 
    int max_j= 0;
    int min_i= 0;
    int min_j= 0;

    for (int i = 0; i < 4; ++i) { 
        for (int j = 0; j < 4; ++j) {
            if (A[i][j]>max) {
                max= A[i][j];   
                max_i= i;         
                max_j= j;         
            }

            if (A[i][j]<min) {
                min= A[i][j];   
                min_i= i;         
                min_j= j;         
            }
        }
    }

    cout << "Matriz: " << endl;
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            cout << A[i][j] << "\t"; 
        }
        cout << endl;
    }

    cout <<"Resultados:" << endl;
    cout <<"Valor maximo: "<<max<< " en la posicion ["<<max_i<<"]["<<max_j<<"]"<<endl;
    cout <<"Valor minimo: "<<min<< " en la posicion ["<<min_i<<"]["<<min_j<<"]"<<endl;

    return 0; 
}
