#include <iostream> 
using namespace std;

int main() {
    int A[5][5]; 

    cout << "Ingrese los datos de la matriz (5x5): " << endl;
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            cout << "Ingrese el valor para matriz[" << i << "][" << j << "]: ";
            cin >> A[i][j];
        }
    }

    cout << "Matriz: " << endl;
    for (int i = 0; i < 5; ++i) { 
        for (int j = 0; j < 5; ++j) { 
            cout << A[i][j] << "\t";
        }
        cout << endl;
    }
    
  
    int top = 0;         
    int low = 4;   
    int left = 0;         
    int right = 4;    

    while (top <= low && left <= right) {

        for (int j = left; j <= right; ++j) {
            cout << A[top][j] << " ";
        }
        top++; 

        for (int i = top; i <= low; ++i) {
            cout << A[i][right] << " ";
        }
        right--; 

        if (top <= low) { 
            for (int j = right; j >= left; --j) {
                cout << A[low][j] << " ";
            }
            low--; 
        }

        if (left <= right) {
            for (int i = low; i >= top; --i) {
                cout << A[i][left] << " ";
            }
            left++; 
        }
    }
    cout << endl; 

    return 0; 
}