#include <iostream>

using namespace std;



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
