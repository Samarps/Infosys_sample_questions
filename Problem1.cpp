#include <iostream>
using namespace std;
int sort(int a){
    //function
}
int main() {
    int E, N;
    cout<< "Enter current amount of energy (integer value): E = ";
    cin>> E;
    cout<< "Enter no. of exercises (interger value): N = ";
    cin>> N;
    int A[N];

    cout<< "Enter amount of energy each exercise drains "<< endl;
    for (int i = 0; i < N; i++)
    {
        cout<<"Exercise "<<i+1<<" :";
        cin>> A[i];
    }

    //sorting the energy array in decreasing order
    for (int i = 0; i < N; i++)
    {
        //loop
        sort(A[N]);
    }
    



}