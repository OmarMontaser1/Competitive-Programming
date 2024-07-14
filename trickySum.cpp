#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector <long long> results;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        long long sum= (1LL * x * (x + 1)) / 2;
    int pow = 1;
        while (pow <= x) {
            sum -= 2 * pow; 
            pow *= 2; 
        }
        results.push_back(sum);
    }
    for(long long i: results)
    cout<<i<<endl;
}
