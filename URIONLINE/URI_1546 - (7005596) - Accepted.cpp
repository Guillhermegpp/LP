#include <iostream>

using namespace std;

int main(){
    int n,k,ks;
    cin >> n;
    while(n>0){
        cin >> k;
        while(k>0){
            cin >> ks;
            if (ks == 1)
                cout << "Rolien" << endl;
            if (ks == 2)
                cout << "Naej" << endl;
            if (ks == 3)
                cout << "Elehcim" << endl;
            if (ks == 4)
                cout << "Odranoel" << endl;
        k--;
        }

    n--;
    }
return 0;}