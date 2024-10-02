#include<bits/stdc++.h>
using namespace std;
int main(){
    int marks;
    cout<<"\n Enter the marks: \n";
    cin>>marks;
    if(marks<25){
        cout<<"F\n";
    }
    else if(marks<=44){
        cout<<"E\n";
    }
    else if(marks<=49){
        cout<<"D\n";
    }
    else if(marks<=59){
        cout<<"C\n";
    }
    else if(marks<=79){
        cout<<"B\n";
    }
    else if(marks<=100){
        cout<<"A\n";
    }
    else{
        cout<<"Invalid Entry of MARKS\n";
    }
    return 0;
}