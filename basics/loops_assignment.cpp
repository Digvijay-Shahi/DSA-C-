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

// #include<iostream>
// using namespace std;
// int main(){
//    int n,x;
//    cin>>n;
//    int positive =0 , negative=0, even =0, odd=0;
//    for (int i = 1 ; i<=n ; i++){
//     cin>>x;

//    if(x>0){
//     positive++;
//    }
//    else if(x<0){
//     negative++;
//    }

//    if(x%2==0){
//     even++;
//    }
//    else{
//     odd++;
//    }

//    }
//     cout << positive << endl;
//     cout << negative << endl;
//     cout << even << endl;
//     cout << odd << endl;
//     return 0;
// }


//Sum of First N Natural Numbers


// #include<iostream>
// using namespace std;
// int main(){
//    int n;
//    cin>>n;
//      long long sum = 0;
//    for (int i = 1 ; i<= n ; i++){
  
//     sum = i + sum;    
// }
// cout<<sum;
   
//     return 0;
// }

// Factorial

// #include<iostream>
// using namespace std;
// int main(){
//    int n;
//    cin>>n;
//      long long sum = 1;
//    for (int i = 1 ; i<= n ; i++){
//     sum = i * sum;    
// }
// cout<<sum;
   
//     return 0;
// }
// You are given two integers x
//  and n
// .

// Compute:

// xn=x×x×⋯×xn times

// Input
// The first line contains two integers x
//  and n
//  (−10≤x≤10
// , 0≤n≤20
// ).

// Output
// Print the value of xn


// #include<iostream>
// using namespace std;
// int main(){
//    int x,n;
//    cin>>x>>n;
//    long long sum = 1;
//    for (int i = 1 ; i<= n ; i++){
//     sum = sum * x;    
// }
// cout<<sum;
   
//     return 0;
// }


//Print Number in Reverse


#include<iostream>
using namespace std;
int main(){
   long long n;
   cin>>n;

while(n>0){
    cout<< n %10;
    n = n/10;
}   
    return 0;
}
