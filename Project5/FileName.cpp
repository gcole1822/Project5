#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

int main()

{
  
    int A = pow(6, 2) ;
    int B = pow(6, 2) ;

    cout << A<< endl;
    cout << B <<endl;

    cout << A + B << endl;

    cout << sqrt(A + B)<< endl;

    string tweet; 
   getline(cin, tweet);
        cout << "you said:" << tweet << endl;
        int tweetLength = tweet.length();
       
        cout << "Your tweet is " << tweetLength << " characters long." << endl;
  cout<<"hello"<<endl;
         
    
    return 0;
}

