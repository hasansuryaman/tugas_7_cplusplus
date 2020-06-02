#include <iostream>

using namespace std;

int main(){
    int x, y;
    cout <<"Inputkan Nilai X : ";
    cin>>x;
    cout <<"Inputlan Nilai Y : ";
    cin>>y;
    if(x%2!=0 && y%2!=0){
        cout <<"X Ganjil dan Y Ganjil\n";
    } else if(x%2!=0 && y%2==0){
        cout <<"X Ganjil dan Y Genap\n";
    } else if(x%2==0 && y%2==0){
        cout <<"X Genap dan Y Genap\n";
    } else {
        cout <<"X Genap  dan Y Ganjil\n";
    }
}
