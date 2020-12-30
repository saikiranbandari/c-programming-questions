Given a 2D square matrix, rotate the matrix by 90 degrees in clockwise manner.
Note: Try to solve it by first scanning the matrix, then do an in-place rotation and then print the rotated matrix.

Input Format

First line of input contains T - number of test cases. First line of each test case contains N - size of the matrix [NxN]. Its followed by N lines each containing N integers - elements of the matrix.

Constraints

1 <= T <= 100
1 <= N <= 100
-100 <= ar[i][j] <= 100

Output Format

For each test case, print the rotated matrix, separated by newline

Code:

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t,n,k=1;
    cin>>t;
    
    while(t--)
    {
        cin>>n;
        int a[n][n];
        cout<<"Test Case #"<<k<<":"<<"\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
        
    }
    for (int i = 0; i < n / 2; i++) 
    {
        for (int j = i; j < n - i - 1; j++)
        {
 
            // Swap elements of each cycle
            // in clockwise direction
            int temp = a[i][j];
            a[i][j] = a[n - 1 - j][i];
            a[n - 1 - j][i] = a[n - 1 - i][n - 1 - j];
            a[n - 1 - i][n - 1 - j] = a[j][n - 1 - i];
            a[j][n - 1 - i] = temp;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout <<a[i][j] << " ";
        }
        cout << '\n';
    }
        k++;
        }
        
    
    return 0;
}



Sample Input 0

4
1
1
2
1 2
4 3
3
1 2 3
8 9 4
7 6 5
5
-44 25 -52 69 -5 
17 22 51 27 -44 
-79 28 -78 1 -47 
65 -77 -14 -21 -6 
-96 43 -21 -20 90 
Sample Output 0

Test Case #1:
1 
Test Case #2:
4 1 
3 2 
Test Case #3:
7 8 1 
6 9 2 
5 4 3 
Test Case #4:
-96 65 -79 17 -44 
43 -77 28 22 25 
-21 -14 -78 51 -52 
-20 -21 1 27 69 
90 -6 -47 -44 -5 

