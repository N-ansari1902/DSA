#include<bits/stdc++.h>
using namespace std;
void minEval(int num1, int num2){
    int minres=min(num1,num2);
    cout<<"Minimum : "<<minres;
}
void maxEval(int num1, int num2){
    int maxres=max(num1,num2);
    cout<<"Maximum : "<<maxres;
}
int main(){
    int num1, num2;
    cout<<"\n Enter the two numbers: ";
    cin>>num1>>num2;
    if(num1==num2){
        cout<<"\n Both numbers are equal";
    }
    else{
        minEval(num1,num2);
        cout<<endl;
        maxEval(num1,num2);
    }    
    return 0;
}