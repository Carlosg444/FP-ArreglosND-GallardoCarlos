#include <iostream>
using namespace std; 

int main() {
    int N; 
    cout << "Ingrese el orden N para el cuadrado latino: ";
    cin >> N;
    int cuadradoLatino[N][N]; 
    
    for (int j = 0; j < N; ++j) {
        cuadradoLatino[0][j] = j+1;
    }

    for (int i = 1; i < N; ++i) {
        cuadradoLatino[i][0] = cuadradoLatino[i-1][N-1];
        for (int j = 1; j < N; ++j) {
            cuadradoLatino[i][j] = cuadradoLatino[i-1][j-1];
        }
    }

    cout << "Cuadrado latino de orden " << N << endl;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << cuadradoLatino[i][j] << "\t"; 
        }
        cout << endl; 
    }

    return 0; 
}