#include <iostream>
#include <cmath>

using namespace std;

bool kiemTraSoChinhPhuong(int num){
	int n = sqrt(num);
return n*n == num; 
}

int main(){
 int num;
 cout <<"Nhap vao 1 so nguyen: ";
 cin >> num;
 if(kiemTraSoChinhPhuong(num)){
   cout<<"\nSo chinh phuong";
 }

 return 0;
}