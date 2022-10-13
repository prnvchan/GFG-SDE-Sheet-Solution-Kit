
#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to swap odd and even bits.
    unsigned int swapBits(unsigned int n)
    {
    	// Your code here
    	int oddMask=0x55555555;
     int evenMask=0xAAAAAAAA;
     int evenPreserved=evenMask&n;
     int oddPereserved=oddMask&n;
     return (evenPreserved>>1)|(oddPereserved<<1);
    }
};

