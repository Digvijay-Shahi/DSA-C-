// A

// Your task is to print the string Hello World.

// Input
// There is no input for this problem.

// Output
// Print exactly:


// Hello World

// #include <iostream>
// using namespace std;
// int main(){
//     cout<<"Hello World";
//     return 0;
// }


//B 

// Your task is to print the first five letters of the English alphabet.

// Input
// There is no input for this problem.

// Output
// Print the first five uppercase English letters, one per line.

// #include <iostream>
// using namespace std;
// int main(){
//     cout<<"A"<<endl;
//     cout<<"B"<<endl;
//     cout<<"C"<<endl;
//     cout<<"D"<<endl;
//     cout<<"E"<<endl;

//     return 0;
// }


// C
// Your task is to print a right-angled triangle pattern using asterisks (*).

// Input
// There is no input for this problem.

// Output
// Print the following pattern exactly as shown:


// *****
// ****
// ***
// **
// *

// #include <iostream>
// using namespace std;
// int main(){
//     cout<<"*****"<<endl;
//     cout<<"****"<<endl;
//     cout<<"***"<<endl;
//     cout<<"**"<<endl;
//     cout<<"*"<<endl;

//     return 0;
// }


// D
// Your task is to print the letter Z using asterisks (*) as shown below.

// Input
// There is no input for this problem.

// Output
// Print the following pattern exactly as shown:


// *****
//    *
//   *
//  *
// *****

// #include <iostream>
// using namespace std;
// int main(){
//     cout<<"*****"<<endl;
//     cout<<"   * "<<endl;
//     cout<<"  *  "<<endl;
//     cout<<" *   "<<endl;
//     cout<<"*****"<<endl;

//     return 0;
// }


// E

// Your task is to print the multiplication table of the 5.

// Input
// There is no input for this problem.

// Output
// Print the table of 5 in the format as shown in the example


// #include <iostream>
// using namespace std;
// int main(){
//     cout<<"5 * 1 = 5"<<endl;
//     cout<<"5 * 2 = 10"<<endl;
//     cout<<"5 * 3 = 15"<<endl;
//     cout<<"5 * 4 = 20"<<endl;
//     cout<<"5 * 5 = 25"<<endl;
//     cout<<"5 * 6 = 30"<<endl;
//     cout<<"5 * 7 = 35"<<endl;
//     cout<<"5 * 8 = 40"<<endl;
//     cout<<"5 * 9 = 45"<<endl;
//     cout<<"5 * 10 = 50"<<endl;

//     return 0;
// }


//F

// You are given the length and breadth of a rectangle. Your task is to calculate its area and perimeter.

// The formulas are:

// Area =
//  length ×
//  breadth
// Perimeter =
//  2×(length+breadth)
// Input
// A single line containing two integers length and breadth (1≤length,breadth≤1000)
// .

// Output
// You are given the length and breadth of a rectangle. Your task is to calculate its area and perimeter.

// The formulas are:

// Area =
//  length ×
//  breadth
// Perimeter =
//  2×(length+breadth)


// #include <iostream>
// using namespace std;
// int main(){
//     int length;
//     int breadth;
//     cin>> length >> breadth;
//     int area = length * breadth;
//     int perimeter =  2 * (length+breadth);
//     cout<<"Area = "<< area <<endl;
//     cout<<"Perimeter = "<< perimeter  <<endl;
//     return 0;
// }

//G

// You are given an integer N
// . Your task is to print the multiplication table of N
//  from 1
//  to 10
// .

// Input
// A single integer N
//  (1≤N≤100)
// .

// Output
// Print the table of N
//  in the format shown in the example below.

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     cout << n << "*1 = " << n * 1 << endl;
//     cout << n << "*2 = " << n * 2 << endl;
//     cout << n << "*3 = " << n * 3 << endl;
//     cout << n << "*4 = " << n * 4 << endl;
//     cout << n << "*5 = " << n * 5 << endl;
//     cout << n << "*6 = " << n * 6 << endl;
//     cout << n << "*7 = " << n * 7 << endl;
//     cout << n << "*8 = " << n * 8 << endl;
//     cout << n << "*9 = " << n * 9 << endl;
//     cout << n << "*10 = " << n * 10 << endl;

//     return 0;
// }

// You are given two integers N
//  and M
// . Your task is to compute and print the results of the following operations:

// N+M
// N−M
// N×M
// N÷M
//  (integer division)
// NmodM
// Input
// A single line containing two integers N
//  and M
//  (1≤N,M≤1000)
// .

// Output
// Print five lines in the format as shown in the example.

// #include<iostream>
// using namespace std;
// int main(){
//     long long n , m;
//     cin>>n>>m;
//     cout<< n << " + " << m << "="<< n+m<<endl;
//     cout<<endl;
//     cout<< n << " - " << m << "="<< n-m<<endl;
//     cout<<endl;
//     cout<< n << " * " << m << "="<< n*m<<endl;
//     cout<<endl;
//     cout<< n << " / " << m << "="<< n/m<<endl;
//     cout<<endl;
//     cout<< n << " % " << m << "="<< n%m<<endl;
//     return 0;
// }


// You are given two integers N
//  and M
// . Your task is to find the sum of the last digits of N
//  and M
// .

// Input
// A single line containing two integers N
//  and M
//  (1≤N,M≤1000)
// .

// Output
// Print a single integer — the sum of the last digits of N
//  and M
// .

// Example
// InputCopy
// 169 125
// OutputCopy
// 14


// #include<iostream>
// using namespace std;
// int main(){
//     int n, m ;
//     cin>>n>>m;
//     int a = n % 10;
//     int b = m% 10;
//     cout<<a+b;
//     return 0;
// }


// or


// #include <iostream>
// using namespace std;

// int main() {
//     int n, m;
//     cin >> n >> m;

//     cout << (n % 10) + (m % 10);

//     return 0;
// }


// You are given an integer N
// . Your task is to determine whether the number is even or odd.

// Input
// A single integer N
//  (1≤N≤109)
// .

// Output
// Even if N
//  is even
// Odd if N
//  is odd


// #include <iostream>
// using namespace std;

// int main() {

//     int n;
//     cin>>n;
//     if(n%2==0){
//         cout<<"Even";
//     }
//     else{
//         cout<<"Odd";
//     }
// return 0;
// }


// You are given two integers N
//  and F
// . Your task is to check whether F
//  is a factor of N
// .

// A number F
//  is said to be a factor of N
//  if N
//  is divisible by F
// .

// Input
// A single line containing two integers N
//  and F
//  (1≤N,F≤109)
// .

// Output
// Print:

// Yes if F
//  is a factor of N
// No otherwise
// Example
// InputCopy
// 36 6
// OutputCopy
// Yes



// #include <iostream>
// using namespace std;

// int main() {
//     int n, f;
//     cin>>n>>f;
//     if(n%f==0){
//         cout<<"Yes";
//     }
//     else{
//         cout<<"No";
//     }
//     return 0;
// }
 // ternary opr

// #include <iostream>
// using namespace std;

// int main() {
//     long long n, f;
//     cin >> n >> f;

//     cout << (n % f == 0 ? "Yes" : "No");

//     return 0;
// }

// You are given two integers N
//  and M
// . Your task is to check whether M
//  is a multiple of N
// .

// A number M
//  is said to be a multiple of N
//  if M
//  is divisible by N
// .

// Input
// A single line containing two integers N
//  and M
//  (1≤N,M≤109)
// .

// Output
// Print:

// Yes if M
//  is a multiple of N
// No otherwise
// Example
// InputCopy
// 6 36
// OutputCopy
// Yes
// #include <iostream>
// using namespace std;

// int main() {
//     long long n, m;
//     cin >> n >> m;

//     cout << (m % n == 0 ? "Yes" : "No");

//     return 0;
// }


// You are given the marks obtained by a student. Your task is to check whether the student has passed or failed.

// A student is considered to have passed if the marks obtained are at least 35
// .

// Input
// A single integer marks (0≤marks≤100)
// .

// Output
// Print:

// Pass if the student has passed
// Fail 

// #include <iostream>
// using namespace std;

// int main() {
//     int marks;
//     cin>>marks;
//     if (marks>= 35){
//         cout<<"Pass";
//     }
//     else{
//         cout<<"Fail";
//     }
// return 0;
// }

// You are given two integers A
//  and B
// . Your task is to find the minimum and maximum among them.

// Input
// A single line containing two integers A
//  and B
//  (1≤A,B≤109)
// .

// Output
// Print two lines:

// Min = X
// Max = Y
// where X
//  is the minimum value and Y
//  is the maximum value.

// Example
// InputCopy
// 12 9
// OutputCopy
// Min = 9
// Max = 12

// #include <iostream>
// using namespace std;

// int main() {
//     int a,b;
//     cin>>a>>b;
//     if (a>b){
//         cout<<"Min = "<< b<<endl;
//         cout<<"Max = "<<a<<  endl;
//     }else{
//          cout<<"Min = "<< a<<endl;
//         cout<<"Max = "<<b<<  endl; 
//     }

// return 0;
// }
// You are given three integers A
// , B
// , and C
// . Your task is to find the minimum and maximum among them.

// Input
// A single line containing three integers A
// , B
// , and C
//  (1≤A,B,C≤109)
// .

// Output
// Print two lines:

// Min = X
// Max = Y
// where X
//  is the minimum value and Y
//  is the maximum value.

// Example
// InputCopy
// 12 9 15
// OutputCopy
// Min = 9
// Max = 15


// #include <iostream>
// using namespace std;

// int main() {
//     int a, b, c;
//     cin >> a >> b >> c;

//     if (a <= b && a <= c)
//         cout << "Min = " << a << endl;
//     else if (b <= a && b <= c)
//         cout << "Min = " << b << endl;
//     else
//         cout << "Min = " << c << endl;

//     if (a >= b && a >= c)
//         cout << "Max = " << a << endl;
//     else if (b >= a && b >= c)
//         cout << "Max = " << b << endl;
//     else
//         cout << "Max = " << c << endl;

//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     long long a, b, c;
//     cin >> a >> b >> c;

//     long long mn = a;
//     long long mx = a;

//     if (b < mn)
//         mn = b;
//     if (c < mn)
//         mn = c;

//     if (b > mx)
//         mx = b;
//     if (c > mx)
//         mx = c;

//     cout << "Min = " << mn << endl;
//     cout << "Max = " << mx << endl;

//     return 0;
// }


// You are given the marks obtained by a student. Based on the marks, display an appropriate performance message according to the following rules:

// If marks are greater than 90
// , print Excellent
// Else if marks are greater than 80
//  and less than or equal to 90
// , print Good
// Else if marks are greater than 70
//  and less than or equal to 80
// , print Fair
// Else if marks are greater than 60
//  and less than or equal to 70
// , print Meets Expectations
// Else (marks less than or equal to 60
// ), print Below Par
// Input
// A single integer marks (0≤marks≤100)
// .

// Output
// Print a single line containing the performance message corresponding to the given marks.

// #include <iostream>
// using namespace std;

// int main() {
//     int marks ;
//     cin>> marks;

//     if (marks> 90){
//         cout<<"Excellent";
//     }
//     else if(marks>80 and marks<=90){
//         cout<<"Good";
//     }
//       else if(marks>70 and marks<=80){
//         cout<<"Fair";
//     }
//       else if(marks>60 and marks<=70){
//         cout<<"Meets Expectations";
//     }
//       else{
//         cout<<"Below Par";
//     }
//     return 0;
// }


// You are given the coordinates of a point (X,Y)
//  on a Cartesian plane. Your task is to determine the location of the point.

// The possible locations are:

// Origin — if X=0
//  and Y=0
// X axis — if Y=0
//  and X≠0
// Y axis — if X=0
//  and Y≠0
// 1st Quadrant — if X>0
//  and Y>0
// 2nd Quadrant — if X<0
//  and Y>0
// 3rd Quadrant — if X<0
//  and Y<0
// 4th Quadrant — if X>0
//  and Y<0
// Input
// A single line containing two integers X
//  and Y
//  (−109≤X,Y≤109)
// .

// Output
// Print a single line indicating the location of the point.



#include <iostream>
using namespace std;

int main() {
    long long x, y;
    cin >> x >> y;

    if (x == 0 && y == 0)
        cout << "Origin";
    else if (y == 0)
        cout << "X axis";
    else if (x == 0)
        cout << "Y axis";
    else if (x > 0 && y > 0)
        cout << "1st Quadrant";
    else if (x < 0 && y > 0)
        cout << "2nd Quadrant";
    else if (x < 0 && y < 0)
        cout << "3rd Quadrant";
    else
        cout << "4th Quadrant";

    return 0;
}