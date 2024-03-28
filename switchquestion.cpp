#include<iostream>
using namespace std;
int main(){
//write a program to print the day based on the day number?
    int day;
    cin>>day;

    switch(day){
        case 1:
        cout<<"monday"<<endl;
        break;

        case 2:
        cout<<"tuesday"<<endl;
        break;

        case 3:
        cout<<"wed"<<endl;
        break;

        case 4:
        cout<<"thursday"<<endl;
        break;

        default:
        cout<<"defaultcase"<<endl;
    }
    return 0;
}