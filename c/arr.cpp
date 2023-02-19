#include <iostream>
#include <stdio.h>
#include <valarray>

using namespace std;

int main() {

    int A[5] = {1, 2, 3, 4, 5};
    int B[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    char name[25] = "c is string";
    cout<<sizeof(name)<<endl; // check size of current memory
    cout<<name<<endl;


    int C[5] = {1, 2, 3};

    printf("%d \n", sizeof(A));
    printf("%d \n", A[0]);
    printf("%d \n", A[1]);

    cout<<sizeof(B)<<endl;
    for (int i = 0; i < 10; ++i) {
        cout<<B[i]<<endl;
    }

    cout<<"size of b is : "<<sizeof(B)<<endl;
    cout<<"size of c is : "<<sizeof(C)<<endl;

    for(int c:C) {
        cout<<c<<endl;
    }

    for(int z = 0; z < 5; z++) {
        cout<<C[z]<<endl;
    }

    int n;
    cout<<"enter size";
    cin>>n;

    int N[n];
    for (int t = 0; t < n; ++t) {
        int y;
        cout<<"enter value";
        cin>>y;
        N[t] = y;
    }

    for (int w = 0; w < n; ++w) {
        cout<<N[w]<<endl;
    }

    return 0;

}
