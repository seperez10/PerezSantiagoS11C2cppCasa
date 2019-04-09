#include <iostream>
int factorial(int, int);

int main(){
int n;
std::cout<<"Introduzca el valor de n";
std::cin>>n;
int result=1;
std::cout<<(factorial(n,result))<<std::endl;
return 0;
}
int factorial(int n, int result=1)
{
for (int i=1;i<=n;i++){
	result= i*result;
}return result;
}
