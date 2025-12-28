#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    if (n>0){
        cout<<"+ve";
    } else if(n<0){
        cout<<"-ve";
    } else {
        cout << "Zero";
    }
    return 0;
}