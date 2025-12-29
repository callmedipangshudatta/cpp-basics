#include <iostream>
using namespace std;

int sum(int a,int b); //function prototyping :- telling compiler to what to know early on

void g(); 

int main(){
    int num1,num2;
    cout << "The first number is : "<<"\n";
    cin >> num1;
    cout << "The second number is : "<<"\n";
    cin >> num2;
    cout << "The sum is : "<< sum(num1, num2) <<"\n";
    g();

    return 0;
}

int sum(int a,int b){
    int c = a+b;
    return c;
}

void g(){
    cout << "Thanks!" << flush;

}

//why function prototyping is needed ?
/*
to reassure compiler that the function and its formal parmaters ae valid and can run program without any ambiguity
*/
