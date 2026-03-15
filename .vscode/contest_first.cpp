// You are given an integer N
// . Print the message Hello Codeforces exactly N
//  times.

// Along with the message, also print the line number starting from 1
// .

// Each message must be printed on a new line.

// Input
// The only line contains an integer N
//  (1≤N≤1000
// ).

// Output
// Print N
//  lines. The i
// -th line should be:

// Hello Codeforces i
// where i
//  starts from 1
// .


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for (int i = 1; i<=n ; i++){
//         cout<< "Hello Codeforces " << i << endl;
//     }

//     return 0;
// }


// You are given a lowercase English letter.

// Your task is to determine whether the given character is a vowel or not.

// Vowels are:
// {a,e,i,o,u}

// Input
// The only line contains a single lowercase English letter.

// Output
// Print YES if the character is a vowel, otherwise print NO.


// #include<iostream>
// using namespace std;
// int main(){
//    char vowel;
//    cin>> vowel;
//    if (vowel == 'a' ||  vowel == 'e' ||vowel == 'i' ||vowel == 'o' || vowel == 'u' ){
//     cout<<"YES";
//    }
//    else{
//     cout<<"NO";
//    }
//     return 0;
// }


// To check whether a year is a leap year, follow these rules:

// First check if the year is divisible by 100
// . If it is, then it must also be divisible by 400
//  to be a leap year.
// If the year is not divisible by 100
// , then it is a leap year if it is divisible by 4
// .
// You are given a year Y
// . Determine whether it is a leap year or not.

// Input
// The only line contains an integer Y
//  (1600≤Y≤9000
// ).

// Output
// Print Yes if the year is a leap year, otherwise print No.


// #include<iostream>
// using namespace std;
// int main(){
//     int Y;
//     cin>>Y;
//     if (Y % 100 == 0 && Y % 400 == 0){
//         cout<<"Yes";
//     }else if(Y%100 != 0 && Y % 4 == 0){
//         cout<<"Yes";
//     }else{
//         cout<<"No";
//     }
    
//     return 0;
// }


// You are given an integer N
//  and then N
//  integers.

// Count how many of these numbers are good.

// A number x
//  is said to be good if:

// x
//  is a factor of 18
//  (i.e., 18modx=0
// ), or
// x
//  is a multiple of 45
//  (i.e., xmod45=0
// ).
// Input
// The first line contains an integer N
//  (1≤N≤105
// ).

// The second line contains N
//  integers x1,x2,…,xN
//  (0≤xi≤109
// ).

// Output
// Print a single integer: the number of good integers among the N
//  given numbers.

// Example

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i = 1; i <= n ; i++){
//         int count;
//         cin>>n;
//         if (n % 18 == 0 || n % 45 == 0){
//             count++;
//         }
//         cout<<count;
//     }


//     return 0;
// }


// You are given an integer N
// .

// Print the numbers from 1
//  to N
//  following the rules below:

// If the number is divisible by 3
// , print Fizz.
// If the number is divisible by 5
// , print Buzz.
// If the number is divisible by both 3
//  and 5
// , print FizzBuzz.
// Otherwise, print the number itself.
// Each output should be printed on a new line.

// Input
// The only line contains an integer N
//  (1≤N≤105
// ).

// Output
// Print N
//  lines according to the rules above.



#include <iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    for (int i = 1; i <= N ; i++){
        if(i % 3==0 && i % 5 ==0){
            cout<<"FizzBuzz"<<endl;
        }else if (i % 5 == 0){
            cout<<"Buzz"<<endl;
        }else if(i % 3==0 ){
            cout<<"Fizz"<<endl;
        }
        else{
            cout<<i<<endl;
        }
    }

}