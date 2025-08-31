#include <iostream>
using namespace std;
int main (){
// print the sum of  odd digits of a number using while loop 
int n=112688;
int sum =0;
while(n>0){
    int lastDigit=n%10;
    if (lastDigit%2!=0)
    {
        sum+=lastDigit;
    }
    n=n/10;
}
cout<<"the sum of digits of a number : "<<sum<<endl;
   

    return 0;

}