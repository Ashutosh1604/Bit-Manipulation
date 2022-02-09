/* first clear the bit
then set bit
*/
#include<iostream>
using namespace std;


int updateBit(int n,int pos,int value)
{
    //clear bit
    int mask= ~(1<<pos);
    n=n&mask;
//set bit
    return (n |(value<<pos));

}

int main()
{

    cout<<updateBit(5,1,1)<<endl;
    return 0;


}


