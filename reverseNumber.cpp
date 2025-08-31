#include <iostream>
using namespace std;
int main (){
// print the digit of a given number using while loop 
int n=1234;
int sum =0;
while(n>0){
    int lastDigit=n%10;
 cout<<lastDigit;   
    n=n/10;
}
cout<<endl;
    return 0;

}