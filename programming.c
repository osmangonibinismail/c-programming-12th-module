// #include<stdio.h>
// int main(){

//     int n;
//     scanf("%d", &n);

//     int a[n + 5];

//     for(int i = 0; i < n; i++){
//         scanf("%d", &a[i]);
//     }

//     int f[100000] = {0};

//     for(int i = 0; i < n; i++){
//         f[a[i]] = 1;
//     }

//     for(int i = 0; i < 10; i++){
//         printf("%d %d\n", i , f[i]);
//     }

//     printf("%d", f[4]);

//     return 0;
// }
// #include<stdio.h>
// int main(){

//     int n;
//     scanf("%d", &n);

//     int a[n + 5];

//     for(int i = 0; i < n; i++){
//         scanf("%d", &a[i]);
//     }

//     int f[100000] = {0};

//     for(int i = 0; i < n; i++){
//         f[a[i]] = 1;
//     }

//     for(int i = 0; i < 10; i++){
//         printf("%d %d\n", i , f[i]);
//     }

//     int m;
//     scanf("%d", &m);

//     for(int i = 0; i < m; i++){
//         int x;
//         scanf("%d", &x);

//         printf("%d", x);

//         if(f[x] == 1){
//             printf(" ase\n");
//         }else{
//             printf(" nai\n");
//         }
//     }

//     return 0;
// }

// #include<stdio.h>
// #include<string.h>
// int main()
// {
//      char a[100],b[100];
//      scanf("%s %s",&a ,&b);
//      for(int i=0;i<=strlen(b);i++)
// {
//     a[i] = b[i];
// }
// printf("%s %s",a,b);
// return 0;
// }

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char a[100], b[100];
//     scanf("%s %s", &a, &b);
//     strcpy(a, b);
//     printf("%s %s", a, b);
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class MyClass {
// public:
//     int myNumber;
//     void display() {
//         cout << "My Number: " << myNumber << endl;
//     }
// };

// int main() {
//     MyClass* obj = new MyClass(); // Create a dynamic object

//     obj->myNumber = 42; // Access member using the arrow operator
//     obj->display(); // Access member function using the arrow operator

//     delete obj; // Free the allocated memory
//     return 0;
// }


// extra
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to take array input, sort it in descending order, and return it
vector<int> sort_it(int N) {
    vector<int> A(N);

    // Taking input for the array inside the function
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    // Sorting the array in descending order
    sort(A.rbegin(), A.rend());

    // Returning the sorted array
    return A;
}

int main() {
    // Input the size of the array
    int N;
    cin >> N;

    // Call the sort_it function
    vector<int> sortedArray = sort_it(N);

    // Output the sorted array
    for (int i = 0; i < N; ++i) {
        cout << sortedArray[i] << (i == N - 1 ? '\n' : ' ');
    }

    return 0;
}

