#include <iostream> 
using namespace std; 

int main() {
    int A[3][3]; 
	int C=0;
	int V;
	
    cout<<"Ingrese los datos de la matriz (3x3):"<<endl;
    for (int i=0; i<3; i++) { 
        for (int j=0; j<3; j++) { 
            cout<<"Ingrese el valor para A["<<i<<"]["<<j<<"]: ";
            cin>>A[i][j];
        }
    }
    cout<<"Cual es el valor a buscar: "<<endl;
    cin>>V;
    
    cout<<"El valor "<<V<<" se encuentra en: "<<endl;
    
    for (int i=0; i<3; i++) { 
    	for (int j=0; j<3; j++){
    		if (A[i][j]==V){
    			C++;
    			cout<<"Fila "<<i<<", "<<"Columna "<<j<<endl;
			}
		}
	}
}
	