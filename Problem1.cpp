#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int sort(int a){
    //function
}
int main() {
    int E, N, min_ex = 0;
    cout<< "Energy: E = ";
    cin>> E;
    cout<< "No. of exercises: N = ";
    cin>> N;
    int A[N];

    cout<< "Amount of energy each exercise drains:-"<< endl;
    for (int i = 0; i < N; i++)
    {
        cout<< "Exercise "<< i+1<< " :";
        cin>> A[i];
    }

    //sorting the energy array in decreasing order
    sort(A, A+N);    

    for (int i = 0; i < N && E > 0; i++)
    {
        E = E-A[i];
        min_ex++;

        if(E > 0) {
            E = E-A[i];
            min_ex++;
        }
    }

    if(E<=0) cout<< endl<< "Min no. of exercises: "<< min_ex<< " E = "<< E;
    else cout<< endl<< "Not tired: -1"<< " E = "<< E;

}