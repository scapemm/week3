#include <iostream>
#include <cmath>
using namespace std;

void problem1(){
    int x;
    cin >> x;
    if(x<0) cout << "Negative\n";
    else cout << "Positive\n";
};
void problem2(){
    int x;
   cin >> x;
   if(x%2==0 && x<0){
       cout << "The number is negative and even\n";
   }
   else if(x%2==0 && x>0){
       cout << "The number is positive and even\n";
   }
  else if(x%2==1 && x<0){
      cout << "The number is negative and odd\n";
   }
  else{
       cout << "The number is negative and even\n";
   }
};
void problem3(){
    int a,b,c;
   cin >> a >> b >> c;
    if(a>=b && a>=c){
        cout << a << " is the largest\n";
    }
    else if(b>=a && b>=c){
        cout << b << " is the largest\n";
    }
    else{
        cout << c << " is the largest\n";
    }

}
void problem4(){
    // problem 4
    int a,b;
    cin >> a >> b;
    if(a%b) cout << a << " is not divisible by " << b;
   else cout << a << " is divisible by " << b;
};
void problem5(){
    // problem 5
    int a;
    cin >> a;
    if((a%400==0) || (a%4==0 && a%100!=0)){
        cout << a << " is a leap year";
    }
    else{
        cout << a << " is not a leap year";
    }
};

void problem6(){
    double a,b,c;
    cin >> a >> b >> c;
    double x1,x2,dis;
    dis = (b*b-4*a*c);
    x1 = ((-1*b)+sqrt(dis)) / (2*a);
    x2 = ((-1*b)-sqrt(dis)) / (2*a);
    cout << "x1=" << x1 << "\n";
    cout << "x2=" << x2 << "\n";

};
void problem7(){
    int a,b,c;
    cin >> a >> b >> c;
    if(a+b+c<181){
        cout << "The triangle is valid";
    }
    else cout << "The triangle is not valid";

};
void problem8(){
    char a;
    cin >> a;
    if(a>='a' && a<='z'){
        cout << "Lowercase alphabet";
    }
    else if((a>='A' && a<='Z')){
        cout << "Uppercase alphabet";
    }
    else{
        cout << "It is not an alphabet";
    }
};
void problem9(){
    // (0,0) rad 10
    double a,b;
    cin >> a >> b;
    if(a*a+b*b<=100){
        cout << "Point(" << a << ',' << b << ") is in circle";
    }
    else cout << "Point(" << a << ',' << b << ") is not in circle";
};
void problem10(){
    double a,b,c,d;
    cout << "Enter weight and price for package 1: ";
    cin >> a >> b;
    cout << "Enter weight and price for package 2: ";
    cin >> c >> d;
    if(a/b > c/d) {
        cout << "Package 1 has a better price\n";
    }
    else if(a/b < c/d){
        cout << "Package 2 has a better price\n";
    }
    else cout << "Two packages have the same price\n";
}
int main() {
    // problem1();

    // problem2();

    // problem3();

    // problem4();

    // problem5();

     //problem6();

    // problem7();

    // problem8();

     //problem9();

     //problem10();







    return 0;
}

