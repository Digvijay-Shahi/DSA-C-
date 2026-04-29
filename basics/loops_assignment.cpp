// You are given a positive integer n
// .

// Print the integers from 1
//  to n
//  (inclusive), each on a separate line.

// Input
// The input contains a single integer n
//  (1≤n≤2⋅105)
// .

// Output
// Print n
//  lines. On the i
// -th line, output the integer i
//  (1≤i≤n)
// .


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     for (int i = 1; i <= n ; i++){
//         cout<<i<<endl;
//     }
// }

// N to 1

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     for (int i = n; i >= 1 ; i--){
//         cout<<i << " ";
//     }
// }

// C. Print All Even Numbers from 1 to N

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     for (int i = 1; i <= n ; i++){
//         if(i%2==0){
//         cout<<i << " ";
//     }

//    }   return 0;

// }


//D. Print from L to R


// #include<iostream>
// using namespace std;
// int main(){
//     int l,r;
//     cin>>l >> r;

//     for (int i = l; i <= r ; i++){
//         cout<<i << " ";  
//    }  
//     return 0;

// }

//Print All Uppercase Alphabets

// #include<iostream>
// using namespace std;
// int main(){
    
//     for (char i = 'A'; i <= 'Z' ; i++){
//         cout<<i << " ";  
//    }  
//     return 0;

// }


//Print Table of N

// #include<iostream>
// using namespace std;
// int main(){
//    int n;
//    cin>>n;
//    for (int i = 1 ; i<= 10 ; i++){
//     cout << n << " * " << i << " = " << n*i<< endl;
//    }
   
//     return 0;
// }


// You are given an integer N
//  followed by N
//  integers. Count how many of the given numbers are:

// Positive
// Negative
// Even
// Odd
// Input
// The first line contains an integer N
//  (1≤N≤105
// ).

// The second line contains N
//  integers (−109≤Ai≤109
// ).

// Output
// Print four integers in the following order:

// Number of positive integers
// Number of negative integers
// Number of even integers
// Number of odd integers

#include<iostream>
using namespace std;
int main(){
   int n;
   cin>>n;
   for (int i = 1 ; i<= 10 ; i++){
    cout << n << " * " << i << " = " << n*i<< endl;
   }
   
    return 0;
}