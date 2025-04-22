//factorial=5!==>5*4*3*2*1;
//1.formula for combination
#include<iostream>
using namespace std;

/*int combination(int x){
    int m=1;
    for(int i=1;i<=x;i++){
        m*=i;
    }
    return m;
}
int main(){
    int n,r;
    cout<<"the value of n is ";
    cin>>n;
    cout<<"the value of r is ";
    cin>>r;
    int nfact=combination(n);
    int rfact=combination(r);
    int nrfact=combination(n-r); //first it will minus n&r and put its value in functi
    //nCr= n!/r!*(n−r)!

    cout<<nfact/(rfact*nrfact);*/
    
//2.formula for permutation n!/(n-r)!
int permutat(int N){
    int m=1;
    for(int i=1;i<=N;i++){
    m*=i;    
}
return m;
}
int main(){
int n=5,r=7;
//int nfact=permutat(n);
//int nrfact=permutat(n-r);
//cout<<nfact/nrfact;
cout<<permutat(n)/permutat(n-r);
}