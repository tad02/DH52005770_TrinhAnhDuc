#include <iostream>
#include <cmath>

using namespace std;


bool kiemTraSoChinhPhuong(int num){
	int n = sqrt(num);
return n*n == num; 
}


bool kiemTraSoHoanThien(int num){
	int n = 0;
	for(int i = 1 ; i < num ;i++)
		if(num%i==0)
			n+=i;
return num==n; 
}

int main(){
 int num;
 cout <<"Nhap vao 1 so nguyen: ";
 cin >> num;
 if(kiemTraSoChinhPhuong(num)){
   cout<<endl<<num<< " la so chinh phuong";
 }
 if(kiemTraSoHoanThien(num)){
   cout<<endl<<num<<" la so hoan thien";
 }

 return 0;
}