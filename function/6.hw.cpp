#include<iostream>
using namespace std;
//1.Write a function to print squares of first n natural numbers, taking n as argument to the function

/*void squar(int n){
    for(int i=1;i<=n;i++){
       cout<<i*i<<" "; 
    }

}
int main(){
    int n=6;
    squar(n);
}*/

//2.Write a function that takes the radius of a circle as an argument and returns its area.
/*void area(int r,float pie){
    float area=pie*r*r;
    cout<<area;
}
int main(){
    int r,pie=3.14;
    cin>>r;
    area(r,pie);
}*/

//3. Given two numbers a and b, write a function to print all odd numbers between them.
/*int odd(int a,int b){
    for(int i=a;i<=b;i++){
        if(i%2==1){
        cout<<i<<" ";
    }
}
cout<<endl;
}
int main(){
    int a,b;
    cin>>a>>b;
    odd(a,b);
}*/

//4. Write a function to count the number of digits in a number and then print the square of this number.
/*int main(){
    int a=1234,b=a,count=0;
    while(b>0){
        b=b/10;
        count++;
    }
    cout<<count<<endl;
    cout<<count*count;
}
*/

//5. Can the same function name be used for different functions without any conflict?
// Function with int parameter
/*void display(int x) {
    cout << "Integer: " << x << endl;
}
// Function with double parameter
void display(double y) {
    cout << "Double: " << y << endl;
}
// Function with two parameters
void display(int x, int y) {
    cout << "Two integers: " << x << ", " << y << endl;
}
int main() {
    display(5);        // Calls display(int)
    display(3.14);     // Calls display(double)
    display(10, 20);   // Calls display(int, int)
    return 0;


//it is also called function overloading.
}*/