#include <iostream>
#include <vector>
using namespace std;
/*Tanya climbs stairs and counts from 1 till she reaches a new stairway
we need a way to count how many stairways and steps she took */

int main(){
    int n; int a;
    int stairWays = 1;
    int stepCount=0;
    vector<int> steps;
    cin>>n;

    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        if(i==0 && a==1){
            stepCount++;
        }
        else{
            if( a!=1 )
                stepCount++;
            else {
                steps.push_back(stepCount);
                stepCount=1;
                stairWays++;
            }
        }
    }
    if(stepCount>0)
        steps.push_back(stepCount);
        
    cout<<stairWays<<endl;
    for(int i : steps){
        cout<<i<<" ";
    }
}
