#include<iostream>
using namespace std;


int Kt_So(char c)
{
    return c-'A';
}
char So_Kt(int n)
{
     return 'A'+n;
}



int main()
{
	string P, C;
	int a, b;
	cout<<"Nhap chuoi: ";
	cin>>C;
	
	while(a<1||a>25||a%2==0||a==13){
		cout<<"Nhap a: ";
		cin>>a;
	}
	
	
	while(b<1||b>25){
		cout<<"Nhap b: ";
		cin>>b;
	}
	
	//MA HOA
		for( int i=0;i<C.size();i++)
    		{
         		int m=Kt_So(C[i]);
        		m=(a*m+b)%26;
         		P=P+So_Kt(m);
         }
         cout<<"chuoi ma hoa la: "<<P<<endl;
         
         
    //Giai ma
    for (int i=0; i<P.size(); i++)
    {
    	int m=Kt_So(P[i]);
        		m=((m-b)/a)*26;
         		C=C+So_Kt(m);
    }
    cout<<"chuoi giai ma la: "<<C<<endl;
    

	
	
	
	
	
	
	
	return 0;
}
