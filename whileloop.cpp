// print the sum of the first n natural no. where n is the input.
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int sum=0;

    int i=1;// loop varival
    while(i<=n){
        sum+=i;
        i++;
    }
    cout<<sum<<endl;

    return 0;
}