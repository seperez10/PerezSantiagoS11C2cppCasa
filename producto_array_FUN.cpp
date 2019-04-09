#include <iostream>
using namespace std;
int producto(int,int);
int main(){
   int arr[]={1,2,3,4,5};
   int arr2[]={10,20,30,40,50};
   std::cout<<producto(arr[i],arr2[i])<<std::endl;
   return 0;
}
int producto(int arr[],int arr2[]){
   for(int i=0; i<5; i++){
	int arrn[5];
	arrn[i]={arr[i]*arr2[i]};
}
}
