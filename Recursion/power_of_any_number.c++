// Write a recursive function that calculates the power of a number. For example, the function should calculate 2 to the power of 3 as 8 (2 * 2 * 2).
// power of any number

#include<iostream>
using namespace std;

int power(int num,int pow){
    if(num==0){
        return 0;
    }
    if(pow==0){
        return 1;
    }
    int ans = num * power(num,pow-1);

    return ans;
}

int main(){
   int num,pow;
   cout<<"num: "<<endl;
   cin>>num;
   cout<<"pow: "<<endl;
   cin>>pow;

   int result = power(num,pow);
   cout<<num<<" power "<<pow<<" is "<<result;
}