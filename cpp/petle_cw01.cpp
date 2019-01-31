/*
 * petle_cw01.cpp
 */


#include <iostream>
using namespace std;

void cw01() {
    int sum = 0;
    for(int i = 10; i <= 99; i += 2) {
        sum += i;
    }
    cout << sum;
}

void cw02() {
     int a,b, parz=0,nieparz=0;
    cin>>a>>b;
    for(int i=a+1; i<b; i++)
    {
        if(i%2==0) parz+=i;
        else nieparz+=i;
    }
    cout<<parz-nieparz<<endl;
    
    
}
    

int main(int argc, char **argv)
{
	
    cw01();
    cw02();
	return 0;
}

