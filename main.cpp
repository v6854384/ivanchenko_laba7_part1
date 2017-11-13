#include <iostream>
#include <string>
using namespace std;
int main (int argc, char*argv[])
{
   string str1, str2, str3;
   if(argc > 1){
                str1=argv[1];
                if(argc > 2){
                        if(argc > 3) cout << "Mnogo dannyh"<<endl;
                        else {
                                str2=argv[2];
                                str3=str1+str2;
                                cout << str3 << endl;
                        }

                }
                else cout << "Nehvataet dannyh" << endl;
   }
}
