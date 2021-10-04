#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n;
    cin>>n;
    long long int totalPositions=0,attackPositions=0;
    for(long long int i=1;i<=n;i++){
        totalPositions=(i*i)*(i*i-1)/2;                 //total ways to put 2 knights in a n*n size board. first knight has n*n spaces, second one has n*n-1. divide by two becuase both knights are identical
        attackPositions=4*(i-1)*(i-2);                  //knights have to be in a 2*3 or 3*2 rectangle (opp. sides and corners) to be in an attacking position. 
        cout<<totalPositions-attackPositions<<"\n";
    }
    return 0;
}