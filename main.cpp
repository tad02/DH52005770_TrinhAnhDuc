#include <iostream>

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


 return 0;
}