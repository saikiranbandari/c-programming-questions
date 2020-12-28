Print hollow diamond pattern using '*'. See examples for more details.



Input Format

First line of input contains T - number of test cases. Its followed by T lines, each line contains a single odd integer N - the size of the diamond.

Constraints

1 <= T <= 100
3 <= N <= 201

Output Format

For each test case, print the test case number as shown, followed by the diamond pattern, separated by newline.

Sample Input 0

4
3
7
5
15
Sample Output 0

Case #1:
 *
* *
 *
Case #2:
   *
  * *
 *   *
*     *
 *   *
  * *
   *
Case #3:
  *
 * *
*   *
 * *
  *
Case #4:
       *
      * *
     *   *
    *     *
   *       *
  *         *
 *           *
*             *
 *           *
  *         *
   *       *
    *     *
     *   *
      * *
       *
Code:


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t,c=1;
    cin>>t;
    while(t--)
    {
       int n,i, j, mid;
        cin>>n;
        cout<<"Case #"<<c<<":"<<"\n";
        if(n %2 == 1)
        { 
            n++;
        }
        mid = (n/2);
        for(i = 1; i<= mid; i++) 
        {
            for(j = 1; j<=(mid-i); j++) 
            { 
                cout << " ";
            }
            if(i == 1) 
            {
                cout << "*";
            }
            else
            {
                cout << "*"; 
                for(j = 1; j<=2*i-3; j++) 
                { 
                    cout << " ";
                }
                cout << "*";
            } 
            cout << endl;
        }
        for(i = mid+1; i<n; i++) 
        {
            for(j = 1; j<=i-mid; j++) 
            { 
                cout << " ";
            }
            if(i == n-1) 
            {
                cout << "*";
            }
            else
            {
                cout << "*"; 
            for(j = 1; j<=2*(n - i)-3; j++) 
            { 
                cout << " ";
            }
            cout << "*";
            }
            cout << endl;
        }
        c++;
    }
    return 0;
}
