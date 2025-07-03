#include <iostream>
using namespace std;

int main (){
	int A[4][4];
	int m,n,k;
	for (int i=0; i<4; i++){
		for (int j=0; j<4; j++){
			cout<<"Ingrese el valode de A ["<<i<<"]["<<j<<"]: ";
			cin>>A[i][j];                                      
		}
	}
	cout<<"Que filas desea intercambiar?: "<<endl;
	cin>>m;
	cin>>n;
	
	if (m>3||m<0||n>3||n<0){
		cout<<"Filas invalidas."<<endl;
	}else{
		for (int j=0; j<4; j++){
			k=A[m][j];
			A[m][j]=A[n][j];
			A[n][j]=k;
		}	
	}
		
		cout<<"Matriz resultante: "<<endl;
		for (int i=0; i<4; i++){
			for (int j=0; j<4; j++){
				cout<<A[i][j]<<" ";
			}	
			cout<<endl;
		}
}
