Trailing zeros for big numbers to pass all test cases

#include <iostream> 
using namespace std; 

long long findTrailingZeros(long long n) 
{ 
    
    long long count = 0; 
  
    // Keep dividing n by powers of  
    // 5 and update count 
    for (long long i = 5; n/i>=1; i *= 5) 
        count += (n / i); 
  
    return count; 
} 

int main() 
{

    
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        cout<<findTrailingZeros(n); 
        cout<<"\n";
    }
    
}
