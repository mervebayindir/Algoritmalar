#include <iostream>
using namespace std;
void insertionSort(int[],int);
int main (){
	int dizi[8]={25,57,48,34,18,97,86,33};
	
	insertionSort(dizi,8);
	for(int i=0; i<8; i++)
		cout<<dizi[i]<<"\t";
}
void insertionSort(int dizi[], int n)
{
	int i, k, sayi;
	for(k=1; k<n; k++)
	{
		sayi=dizi[k];
		for(i=k-1; i>=0 && sayi<dizi[i]; i--)
		{
			dizi[i+1]=dizi[i];
		}
		dizi[i+1]=sayi;
	}
	
}
