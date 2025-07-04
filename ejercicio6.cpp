#include <iostream> 
using namespace std; 

int main() {
	int A[6][6];

    cout << "Ingrese los datos de la matriz (6x6): " << endl;
    for (int i= 0; i<6; ++i) { 
        for (int j=0 ; j<6; ++j) { 
            cout << "Ingrese el valor de A["<<i<<"]["<<j<<"]: ";
            cin >> A[i][j];
        }
    }

    cout << "Matriz:" << endl;
    for (int i= 0; i <6 ; ++i) {
        for (int j = 0; j<6; ++j) {
            cout<<A[i][j]<< "\t"; 
        }
        cout << endl;
    }    

    for (int i= 0; i<6; ++i) {
        for (int j= 0; j <6/2; ++j) {
            int k=A[i][j];
        	A[i][j]= A[i][5-j];
        	A[i][5-j] = k;
        }
    }

    cout << "Matriz reflejada horizontalmente:" << endl;
    for (int i= 0; i<6; ++i) {
        for (int j= 0; j <6; ++j) {
            cout<<A[i][j]<<"\t"; 
        }
        cout<<endl;
    }
    return 0; 
}