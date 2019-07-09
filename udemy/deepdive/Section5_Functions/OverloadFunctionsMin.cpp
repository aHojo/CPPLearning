#include<iostream>
using namespace std;


//1 write a Min() function here to Min of 2 integers
int Min (int x, int y) {
    
    if (x > y ) {
        return y;
    }
    return x;
}
//2 write a Min() function here to Min of 3 integers
int Min (int x, int y, int z) {
    
    if (x < y && x < z ) {
        return x;
    } else if ( y < z ){
        return y;
    }
    return z;
}
//3 write a Min() function here to Min of 2 floats
float Min (float x, float y) {
    
    if (x > y ) {
        return y;
    }
    return x;
}
void Main()
{
    cout<<Min(10,5);
    cout<<Min(12,7,9);
    cout<<Min(18.0f,9.0f);
}
