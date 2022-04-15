#include <iostream>
using namespace std;

int fib(int n,int qb[]){
   if(n == 0 || n == 1){
       return n;
   }
   if(qb[n]!=0){
       return qb[n];
   }
   int f1 = fib(n-1,qb);
   int f2 = fib(n-2,qb);
   int f = f1+f2;
   qb[n] = f;
   return f;
}

int main(){
    int n;
    cin>>n;
    int qb[n];
    cout<<fib(n, new int[n+1])<<endl;
    return 0;
}
