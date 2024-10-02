#include<bits/stdc++.h>
using namespace std;
int sumEval(int num1, int num2){
    int res;
    cout<<"\n Enter the two numbers: ";
    cin>>num1>>num2;
    res=num1+num2;
    return res;
}
int main(){
    int num1, num2;
    cout<<"Sum of given two numbers is: "<<sumEval(num1, num2);
    return 0;
}