#include <iostream>
using namespace std;

int main(){
	int A[4][4];
	int S=0;
	cout<<"Ingrese los datos de la matriz (4x4):"<<endl;
	for (int i=0; i<4; i++){
		for (int j=0; j<4; j++){
			cout<<"Ingrese el valor para A["<<i<<"]["<<j<<"]: ";
            cin>>A[i][j];
		}
	}
	
	for (int i=0; i<4; i++){
		for (int j=0; j<4; j++){
			if (i==j||(i+j)==3){
				S=S+A[i][j];
			}
		}
	}
	cout<<"Matriz: "<<endl;
	for (int i=0; i<4; i++){
		for (int j=0; j<4; j++){
			cout<<A[i][j]<<"\t";
		}
		cout<<endl;
	}
		
	cout<<"La suma de sus diagonales es: "<<S<<endl;
}