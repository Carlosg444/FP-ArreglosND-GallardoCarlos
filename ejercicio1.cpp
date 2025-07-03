#include <iostream> 
using namespace std; 

int main() {
    int A[3][3]; 
    int B[3][3];
    int C[3][3]; 

    cout<<"Ingrese los datos de la primera matriz (3x3):"<<endl;
    for (int m=0; m<3; m++) { 
        for (int n=0; n<3; n++) { 
            cout<<"Ingrese el valor para matriz1 ["<<m<<"]["<<n<<"]: ";
            cin>>A[m][n];
        }
    }

    cout<<"\nIngrese los datos de la segunda matriz (3x3):"<<endl;
    for (int n=0; n<3; n++) { 
        for (int p=0; p<3; p++) { 
            cout<<"Ingrese el valor para matriz2 ["<<n<<"]["<<p<<"]: ";
            cin>>B[n][p];
        }
    }

    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            C[i][j]= 0; 

            for (int k=0; k<3; k++) {
                C[i][j]= C[i][j]+A[i][k]*B[k][j];
            }
        }
    }

    cout <<"Matriz A: "<<"\t"<<"Matriz B: "<<"\t"<<"Resultado: "<<"\t"<<endl;
    for (int i=0; i<3; i++) { 
        for (int j = 0; j < 3; j++) { 
            cout<<A[i][j]<<" "; 
        }
        cout<<"\t\t";
        for (int j = 0; j < 3; j++) { 
            cout<<B[i][j]<<" "; 
        }
        cout<<"\t\t";
        for (int j = 0; j < 3; j++) { 
            cout<<C[i][j]<<" "; 
        }
        cout << endl; 
    }

    return 0; 
}