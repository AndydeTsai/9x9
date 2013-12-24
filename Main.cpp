#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[])
{
    int i=2,j=1,k;
    for(j=1;j<=9;j++){
       for(i=2;i<=9;i++){
          k=i*j;
          cout<<i<<"x"<<j<<"="<<k;
          cout<<"\t";              
       }
       cout<<endl;
    }      
    system("PAUSE");
    return 0;
}
