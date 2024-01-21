#include <iostream>
using namespace std;

int main() {
    int N, D = 1;
    cout<< "No. of segments: N = ";
    cin>> N;

    int L[N];
    cout<< "Distance of each segment from sea level in meters:-"<< endl;
    for (int i = 0; i < N; i++)
    {
        cout<< "Segment "<< i<< " : ";
        cin>> L[i];
    }

    int x;  //the element till which it's strictly downward
    for (x = 0; x < N; x++) //to check how much is strictly downward already
    {
        if (L[x] <= L[x+1])
            break;
    }
    
    if (x = N-1) {
        D = 0;
        cout<< "Already strictly downward slope. No. of days: "<< D;
    }
    else {
        for (; ; D++)
        {
            for (int i = x+1; i < N; i++)
            {
                
            }
            
        }
        
    }
    

}