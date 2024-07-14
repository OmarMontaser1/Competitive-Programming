#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
//properties of numbers with respect to modulo 3
//number theory
/* Properties of Sum Modulo 3:
Any number is either congruent to 0, 1, or 2 modulo 3.
*/
int main() {
    int t;
    cin>>t;

    for(int k=0; k<t; k++){
        int n;
        cin>>n;
        vector<int> a (n);

        int zCount=0, count1=0, count2=0;
        
        for(int i=0; i<n; i++){
            cin>>a[i];
            if(a[i] % 3 == 0)
            zCount++;
            else if(a[i] % 3 == 1)
            count1++;
            else count2++;
        }

        int pairs = min(count1,count2);
        zCount += pairs;
        count1 -= pairs;
        count2 -= pairs;
        
        zCount += count1/3;
        zCount += count2/3;

        cout<<zCount;

    }
}
