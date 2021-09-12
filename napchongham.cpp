/*

Xay dung cau truc mang 1 chieu gom cac phan tu la so thuc
Hay viet cac ham toan tu nhap xuat 1 day so thuc
Toan tu + de noi 2 day thuc thanh 1 day
+ de tim vi tri xuat hien cua phan tu co gia tri K trong day thuc 
! de tinh TBC cac phan tu cau day
Ham Max de tim gia tri lon nhat cua day 
1. nhao day A, B
2. In cac day A, B A+B
3. Nhap so thuc K de tim xem day A, B co pah tu K hay ko
4. Tinh t1/t2 trong do t1 t2 lan luot la gia tri TBC cau A, B
5. Tim 1/(Max(A)-Max(B))



#include<iostream>
using namespace std;
#include<string>
#include<fstream>

struct mang{
	
	float ma;
	
};
typedef struct mang MANG;



//nhap mang nap chong
istream& operator >> (istream& is, MANG &sv)
{
	
	is >> sv.ma;

	return is;
}

//xuat mang nap chong
ostream& operator << (ostream& os, MANG sv)
{

	os << sv.ma;

	return os;
}





int main(){
	
	
	
	MANG A[20], B[20];
	int x, y;
	
	//mang A
	
	do{
	
		cout<<"nhap so phan tu trong day A: ";
		cin>>x;
		
	}while (x<0||x>1000);	
	cout <<"Nhap day A: "<<endl;
	for (int i=0; i<x; i++)
	{
		cout<<"so thu "<<i<<": ";
		cin>>A[i];
	}
	cout <<"Xuat mang A ";
	for (int i=0; i<x; i++)
	{
		cout<<A[i]<<" ";
	}

	cout<<endl;

	//mang B
	do{
		cout<<"nhap so phan tu trong day B: ";
		cin>>y;
	}while (y<0||y>1000);	
	cout <<"Nhap day B: "<<endl;
	for (int i=0; i<y; i++)
	{
		cout<<"so thu "<<i<<": ";
		cin>>B[i];
	}
	cout <<"Xuat mang B ";
	for (int i=0; i<y; i++)
	{
		cout<<B[i]<<" ";
	}

	
	
	
	
	
	return 0;
}


*/


using namespace std;
#include<iostream>
#include<math.h>
struct DaySoThuc{
	float value[1000];
	int length;
};
istream& operator>>(istream& inp, DaySoThuc &c)
{
	cout<<"so phan tu cua day:\n";
	inp >> c.length;
	for(int i = 0; i < c.length; i++){
		inp>> c.value[i];
	}
	return inp;
}
ostream& operator<<(ostream& os, const DaySoThuc &c)
{	
	if(c.length == 0){
		os << "Day so nay la rong.";
	}
	else{
		for(int i = 0; i < c.length; i++){
			os << c.value[i] << " ";
		}
		os << endl;
	}
	return os;
}

DaySoThuc operator +(const DaySoThuc &a, const DaySoThuc &b)
{
	DaySoThuc c;
	c.length = a.length + b.length; 
	float new_value[c.length];
	/*for(int i = 0; i< c.length; i++){
		if(i < a.length){
			c.value[i] = a.value[i];
		}
		else{
			c.value[i] = b.value[i - a.length];
		}
	}*/
	for(int i=0;i<a.length;i++) c.value[i]=a.value[i];
	for(int i=a.length;i<c.length ;i++)
		c.value[i] = b.value[i - a.length];
	
	return c;
}

float operator!(const DaySoThuc &x)
{
	float tong = 0;
	for(int i=0;i<x.length;i++){
		tong += x.value[i];
	}
	return tong / x.length;
}
int  operator+(const DaySoThuc &x,const float& k)
{
	for(int i=0;i<x.length;i++){
		if(x.value[i] == k){
			 i;
		}
	}
	return -1;
}
float Max(const DaySoThuc &x)
{
	float ln =x.value[0];// a[0];
	for(int i = 0; i < x.length; i++)
	{
		if(x.value[i] > ln)
		{
			ln =x.value[i];
		}
	}
	return ln;
}
int main()
{
	DaySoThuc A,B;//
	cout<<"Nhap day A" << endl ; 
	cin>>A;
	cout<<"Nhap day B"<< endl ; 
	cin>>B;
	cout<<"Day A la: " << A;
	cout<<"Day B la: " << B;
	cout<<"Day A+B: " << A+B;
	float k;
	cout<<"Nhap K: ";
	cin >> k;
	int pos = A+k;//find(A,k);
	if(pos >= 0){
		cout<<" Tim thay "<<k<<" o vi tri thu "<<pos;
	}
	else{
		cout<<"Khong tim thay "<<k <<" trong day A";
	}
	cout<<endl;
	//tim trong day B
	pos = B+k;//find(B,k);
	if(pos >= 0){
		cout<<" Tim thay "<<k<<" o vi tri thu "<<pos;
	}
	else{
		cout<<"Khong tim thay "<<k <<" trong day B";
	}
	cout<<endl;
	float tba = !A;
	float tbb = !B;
	if(tbb) cout << "T1/T2=" << tba/tbb << endl;
	else cout<<"mau so =0"; 
	if(Max(A)-Max(B)) cout<<"1/(Max(A)-Max(?? = "<<1/(Max(A)-Max(B));
	else cout<<"mau so =0"; 

}
