#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
#define BOYUT 20
int main()
{
	int dizi[BOYUT];
	srand(time(0));
	int sayac=0;
	cout<<"Rastgele uretilen dizi: "<<endl;
	for(int i=0; i<BOYUT; i++)
	{
		dizi[i]=rand()%100;
		cout<<dizi[i]<<endl;
	}
	int temp;
	// Bubble Sort Siralama
	for(int k=0; k<BOYUT-1; k++)   //Tur sayisi
	{
		for(int t=0; t<BOYUT-1-k; t++ )
		{
			sayac++;
			if(dizi[t]>dizi[t+1])
			{
				temp=dizi[t];
				dizi[t]=dizi[t+1];
				dizi[t+1]=temp;
			}
		}
	}
		cout<<"Dizinin siralanmis hali: "<<endl;
		for(int i=0; i<BOYUT; i++)
		{
			cout<<dizi[i]<<endl;
		}
		cout<<sayac<<" defa donus yapildi";
	return 0;
}
