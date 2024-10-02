#include<bits/stdc++.h>
using namespace std;
int main()
{
    int age;
    cout<<"\n Enter the age:";
    cin>>age;
    if(age<18){
        cout<<"Not eligible for job\n";
    }
    else if(age>=18 && age<=54){
        cout<<"Eligible for job\n";
    }
    else if(age<=57){
            cout<<"Eligible for job, but retirement soon\n";
        }
    else{
            cout<<"Retirement time\n";
        }
    return 0;
}