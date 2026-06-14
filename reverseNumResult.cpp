#include <iostream>
using namespace std;
int main (){
// reverse  a given  number and print the result  
int n=1234;
int sum =0;
int result =0;
while(n>0){
    int lastDigit=n%10;
    result=result*10+lastDigit;
    n=n/10;
}
cout <<"reverse number : " <<result<<endl;

    return 0;

}