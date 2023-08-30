//Write a C program that can count no of vowel, consonent,  alphanumeric value form a string including space.


#include <bits/stdc++.h>
#define ll long long int
#define asort (v).begin(),(v).end()        // Ascending Order Sort
#define dsort (v).rbegin(),(v).rend()     // Descending Order Sort
#define pb push_back
#define sumv v.begin(), v.end(), 0

using namespace std;

void solve()
{

    char str[100];
    int i,vowel,consonant,alpahnumerical_value,space,digit;
    i=vowel=consonant=alpahnumerical_value=space =digit=0;
    gets(str);
    for(i=0; str[i]!='\0'; i++)
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z') || (str[i]>='0' && str[i]<='9'))
        {
            alpahnumerical_value++;
        }

        if(str[i]=='a' || str[i]=='e' || str[i]=='i' ||
                str[i]=='o' || str[i]=='u' || str[i]=='A' ||
                str[i]=='E' || str[i]=='I' || str[i]=='O' ||
                str[i]=='U')
        {
            ++vowel;
        }
        else if((str[i]>='a'&& str[i]<='z') || (str[i]>='A'&& str[i]<='Z'))
        {
            ++consonant;
        }

         else if(str[i]>='0' && str[i]<='9')
        {
            digit++;
        }

        else if (str[i]==' ')
        {
            ++space;
        }
    }

    cout << "Vowels: " << alpahnumerical_value << endl;
    cout << "Vowels: " << vowel << endl;
    cout << "Consonants: " << consonant << endl;
    cout << "Digits: " << digit << endl;
    cout << "White spaces: " << space << endl;
}

int main()
{
    solve();
    return 0;
}


