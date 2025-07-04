#include <iostream> 
using namespace std;

int main() {

    int matriz_original[4][4];
    int matriz_rotada[4][4];

    cout<<"Ingrese los datos de la matriz original (4x4): "<<endl;
    for (int i= 0; i<4; ++i){ 
        for (int j= 0; j<4; ++j){ 
            cout<<"Ingrese el valor para A["<<i<<"]["<<j<<"]: ";
            cin >> matriz_original[i][j];
        }
    }

    cout<<"Matriz Original:"<<endl;
    for (int i= 0; i<4; ++i){
        for (int j= 0; j<4; ++j){
            cout << matriz_original[i][j] << "\t"; 
        }
        cout << endl;
    }

    for (int i= 0; i<4; ++i){
        for (int j= 0; j<4; ++j){ 
            matriz_rotada[j][3-i]= matriz_original[i][j];
        }
    }

    cout<<"Matriz rotada 90 grados en sentido horario: "<<endl;
    for (int i= 0; i<4; ++i) { 
        for (int j= 0; j<4; ++j) { 
            cout << matriz_rotada[i][j] << "\t"; 
        }
        cout << endl;
    }

    return 0; 
}