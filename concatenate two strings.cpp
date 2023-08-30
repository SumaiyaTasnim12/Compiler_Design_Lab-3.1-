
//write  a C program can add two string into one or separete a string into two string.

#include <bits/stdc++.h>
#define ll long long int
#define asort (v).begin(),(v).end()        // Ascending Order Sort
#define dsort (v).rbegin(),(v).rend()     // Descending Order Sort
#define pb push_back
#define sumv v.begin(), v.end(), 0

using namespace std;

void solve(){

    /* char str1[50];
     gets(str1);
     char str2[50];
     gets(str2);
     int i=0,len=0,j=0;
     while(str1[i]!= '\0')
     {
         i++;
         len++;
     }
      while(str2[j]!= '\0')
     {
         str1[len + j] = str2[j];
         j++;
     }

     cout<<str1 <<" "<<endl;*/


    string s1, s2, result;

    cout << "Enter string s1: ";
    getline (cin, s1);

    cout << "Enter string s2: ";
    getline (cin, s2);

    result = s1 + s2;

    cout << "Resultant String = "<< result;



}

int main(){
    solve();
    return 0;
}

