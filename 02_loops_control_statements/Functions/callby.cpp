#include <iostream>
using namespace std;

//call by value is also known as pass by value 
int change(int x){
    x++;
}
int main(){
    int a = 5;
    change(a);
    cout<<a<<"\n";
    return 0;
}