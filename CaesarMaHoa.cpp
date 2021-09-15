
#include <iostream>
#include <cmath>

using namespace std;


/*    Co ban

int main()
{
	
	string s;
	int k;
	
	cout<<"nhap chuoi: ";
	getline(cin, s);
	
	cout<<"nhap K: ";
	cin>>k;
	
	//ma hoa
	for  (int i=0; i<s.size(); i++) s[i]=s[i]+k;
	cout<<"chuoi moi: "<<s;
	
	//giai ma
	for  (int i=0; i<s.size(); i++) s[i]=s[i]-k;
	cout<<endl<<"giai ma: "<<s;
	
	return 0;
	
}
*/




// ma hoa CAESAR
/*
int main()
{
	
	
	char message[100], ch;
	int i, key;
	cout << "Chuoi ky tu: ";
	cin.getline(message, 100);
	cout << "Nhap khoa K: ";
	cin >> key;
	
	
	//ma hoa
	for(i = 0; message[i] != '\0'; ++i){
		ch = message[i];
		if(ch >= 'a' && ch <= 'z'){
			ch = ch + key;
				if(ch > 'z'){
					ch = ch - 'z' + 'a' - 1;
				}
				message[i] = ch;
			}
		else if(ch >= 'A' && ch <= 'Z'){
			ch = ch + key;
			if(ch > 'Z'){
				ch = ch - 'Z' + 'A' - 1;
			}
			message[i] = ch;
		}
	}
	cout << "Ma hoa: " << message;
	


	//giai ma
	for(i = 0; message[i] != '\0'; ++i){
		ch = message[i];
		if(ch >= 'a' && ch <= 'z'){
			ch = ch - key;
			if(ch < 'a'){
				ch = ch + 'z' - 'a' + 1;
			}
			message[i] = ch;
		}
		else if(ch >= 'A' && ch <= 'Z'){
			ch = ch - key;
			if(ch > 'a'){
				ch = ch + 'Z' - 'A' + 1;
			}
			message[i] = ch;
		}
	}
	cout <<endl<< "Giai ma: " << message;

	return 0;
}

*/


//GIAI MA BRUTE FORCE
int KTSO(char c)
{
    return c-'A';
}
char SOKT(int n)
{
     return 'A'+n;
     }
int main ()
{
    string P,C;
    //int K;
    cout<< "nhap chuoi: ";getline(cin,C);
    //cout<<"nhap khoa k:";cin>>k;
    for (int k=0; k<=25; k++){
    	P = " ";
		for( int i=0;i<C.size();i++)
    		{
         		int m=KTSO(C[i]);
        		m=(m-k+26)%26;
         		P=P+SOKT(m);
         }
         cout<<"chuoi ma hoa thu "<<k<<" la : "<<P<<endl;

	}
	
    return 0;
}



