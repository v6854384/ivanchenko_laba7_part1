#include <iostream>
#include <string>
using namespace std;
int main (int argc, char*argv[])
{
   string str1, str2, str3;
   str1=argv[1];
   str2=argv[2];
   str3=str1+str2;
   cout << str3 << endl;
}
