
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main(){
    int a,h,p;
    cout<<"Enter your age: ";
    cin>>a;
    if(a<=20){
        cout<<"Enter your height: ";
        cin>>h;
        if(h<160){
            cout<<"Your status = UNFRIEND";
        }
        else if (h<175) {
            cout<<"Your status = FRIEND";
        }
        else {
            cout<<"Enter your property: ";
            cin>>p;
            if(p>69000000){
                cout<<"Your status = MARRIED";
            }
            else{
                cout<<"Your status = ONE-NIGHT-STAND";
            }
        }
        
    }
    else if (a<30){
       cout<<"Enter your property: ";
        cin>>p; 
        if(p>10000000){
           cout<<"Your status = BEST FRIEND"; 
        }
        else{
            cout<<"Your status = UNFRIEND";
        }
    }
    else
    {
        cout<<"Your status = UNFRIEND";
    }
    
}