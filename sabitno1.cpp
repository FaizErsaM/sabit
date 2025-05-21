#include <iostream>
using namespace std; 
int main (){
    int A [5]={2,2,3,2,2};
    bool semuasama=true;
    for (int i=0;i<5;i++){
        if (A[i]!=A[0]){
            semuasama=false;
        }
    }
    if (semuasama){
        cout<<"semua sama"<<endl;
    }else{
        cout<<"ada yang beda"<<endl;
    }
   return 0;
}