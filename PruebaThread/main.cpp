#include <iostream>

using namespace std;



int main(){
    /*int aa[4]={1,2,3,4};
    int *ptr2=(int*)(&aa+1);
    int java;
    cout<<aa+1<<endl;
    for(int i=0; i< sizeof(*aa);i++){
        java+=aa[i] + *(ptr2-1);
    }
    cout<<java<<","<<*(ptr2-1)<<endl;*/
    int i [ ][5] = {1,2,3,4,5,6,7,8,9,10};
    for (int b=0; b < 10; b++){
        cout<<*i[b]<<endl;
    }

    /*int t=1;
    int *i = &t;
    int *f = &t+1;
    int h = 8;

    cout<<f<<endl;
    *f = *i;
    cout<<f<<endl;
    cout<<*f<<endl;

    cout<<*i<<endl;
    cout<<i<<endl;
    *i-- = h;
    cout<<*i<<endl;
    cout<<i<<endl;*/

}