#include<bits/stdc++.h>
using namespace std;
 
void deleteMid(stack<int>&s, int sizeOfStack)
    {
        vector<int> v;
        for(int i =0;i<sizeOfStack;i++){
        v.push_back(s.top());
        s.pop();
        }
        
        int n  = sizeOfStack;
        
        if(n%2 == 0){
            int target = n/2;
            for(int i =n-1;i>=0;i--){
                if(i == target)continue;
                s.push(v[i]);
            }
        }
        else{
            int target =ceil(n/2);
            for(int i =n-1;i>=0;i--){
                if(i == target)continue;
                s.push(v[i]);
        }
    }
        
    }


int main(){
    int sizeOfStack;
    stack<int>s;
    cout<<"enter size of stock"<<endl;
    cin>>sizeOfStack;


    for(int i = 0;i<sizeOfStack;i++){
        int x;
     cin>>x;
     s.push(x);
    }


    deleteMid(s,sizeOfStack);

    while (!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
    
}
