                // Written by Yash Prabhat
                // Finding Sin(x) using Recursion call
                //

#include<iostream>

using namespace std;

double s(int x, int n){
    
    static double p=x, f=1;
    
    if(n==1) return x;

    else{

        if(n%2 == 0){

            double a = s(x, n-1);
            p = p*x*x;
            f = f*(2*n-1)*2*(n-1);
            return a-p/f;
        }

        else{

            double a = s(x, n-1);
            p = p*x*x;
            f = f*(2*n-1)*2*(n-1);
            return a+p/f;
        }
    }


}

int main(){


    int x, n;
    cout << "Enter value of x: ";
    cin >> x;

    cout << "Enter number of term: ";
    cin >> n;
    
    cout << s(x, n) << endl;


    return 0;
}
