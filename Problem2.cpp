#include <iostream>
using namespace std;

int main() {
    int N, M, H;

    cout<<"No. of Villians: N = ";
    cin>>N;
    cout<<"No. of Heroes: M = ";
    cin>>M;
    cout<<"Health of Heroes: H = ";
    cin>>H;

    int V[N];
    cout<<"Health of each Villian:-"<<endl;
    for (int i = 0; i < N; i++)
    {
        cout<<"Health Villian "<<i+1<<": ";
        cin>>V[i];
    }

    int sum_vil_health=0;   //to find max no. of villians, heroes can handle
    int rem_vil; //no. of villians to be removed
    for (rem_vil = N-1; rem_vil >= 0; rem_vil--)
    {
        if (V[rem_vil] > H) break;   //if a villian's health is more than heroes then we need to remove all the villians from the front till that villian
        sum_vil_health += V[rem_vil];
        if(sum_vil_health > H*M) break;
    }

    cout<<"Min of no. of Villians need to be removed: "<<rem_vil+1;

    return 0;
}