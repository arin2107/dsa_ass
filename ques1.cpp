#include<iostream>
#include<random>
using namespace std;
void shuffle(int arr[],int size){
    for(int x=0;x<size;x++){
        srand(x);
       int random = rand()%(size-1);
       swap(arr[x],arr[random]);
    }
    for(int x=0;x<size;x++){
        cout<<arr[x]<<" ";
    }
    cout<<endl;
}   
int main(){
    int arr[6] = {1,2,3,4,5,6};
    shuffle(arr,6);
    
}