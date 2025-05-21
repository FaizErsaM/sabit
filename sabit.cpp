
#include <iostream>
using namespace std; 
int main (){
    int a [2][5]={
    {2,3,4,5,6},
    {6,7,3,8,3}
};
  int elemen;
  cout<<"masukan bilangan array:";
  cin>>elemen;
   int min= a[0][0],max=a[0][0];
     for (int i=0;i<2;i++){
       for (int j=0;j<5;j++){
        //cout<<a[i][j]<<" ";
        if (elemen==a[i][j]){
          cout<<"berada di bariske-"<<i+1<<" kolom ke- "<<j+1<<endl;
        }

       if (a[i][j]<min){
        min=a[i][j];

       }
       if (a[i][j]>max){
        max=a[i][j];
       }
     }
     }
     cout<<"terkecil ="<<min<<endl;
     cout<<"terbesar = "<<max<<endl;
}