#include <iostream>
#include <stdlib.h>
using namespace std;

int main( int argc,char** argv) {
    int quantidade;
    cout << "digite a quantiidade"<<endl;
    cin >> quantidade;
    float temperatura[quantidade];
    float aux =0.0;
    for (int i = 0; i < quantidade; i++)
	{
		cout << "Digite a Temperatura "<< i+1 << endl;
		cin >> temperatura[i];
	}
	for (int i = 0; i < quantidade; i++)
	{
		for (int j = i; j >0; j--)
		{
			if (temperatura[j] < temperatura[j-1])
			{
				aux = temperatura[j];
				
				temperatura[j] = temperatura[j-1];
				
				temperatura[j-1] = aux;
				
			}
		}
		
	} 
	for (int i = 0; i < quantidade; i++)
	{
		cout << "Temepratura em ordem crecente "  << endl;
		cout << temperatura[i] << endl;
	}
	
    
    
    return 0;
}
