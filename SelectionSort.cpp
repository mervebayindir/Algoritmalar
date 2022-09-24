#include <iostream>
using namespace std;
void selectionSort(int[],int);
int main(){
	int dizi[8]={25,57,48,34,18,97,80,10};
	selectionSort(dizi,8);
	for(int i=0; i<8; i++)
		cout<<dizi[i]<<"\t";
	
}
void selectionSort(int dizi[],int boyut)
{
	for(int i=0; i<boyut; i++)
	{
		int kucuk=dizi[i];
		int indeks=i;
		for(int j=i+1; j<boyut; j++)
		{
			if(dizi[j] < kucuk)
			{
		
			kucuk=dizi[j];
			indeks=j;
			}
		}
		dizi[indeks]=dizi[i];
		dizi[i]=kucuk;
	}
}
