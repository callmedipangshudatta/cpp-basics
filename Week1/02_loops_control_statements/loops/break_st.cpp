#include <iostream>
using namespace std;

int main(){
    int x = 1 ;
    for (int i = x; i < 4; i++)
    {
        cout << i << "\n";
        if (i == 2){
            
            break;
        }
    }
    
    return 0;
}