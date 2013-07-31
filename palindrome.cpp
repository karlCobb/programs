#include<cstring>
#include<iostream>
using namespace std;
bool pal(char*, int);
int main()
{
char* word = new char[100];
char* word2 = new char[100];
cout << "Test if your word is a palindrome.\n";
cout << "Enter your word >>";
cin >> word;
int n = strlen(word);
if(n<100)
{
int b = pal(word, n);//initial b to function pal;
if(b == 1)
cout << "That word is a palindrome!!\n";
else
cout << "Sorry that word is not a palindrome.\n";
}
else
{
cout << "Sorry that word is way too big and probably not a real word.\n";
}
}

bool pal(char* word, int n)
{
int m = n/2;
--n;
for(int i = 0; i < m; ++i){
if(word[i] != word[n-i])//if not true then whole expression is false
return false;
}
return true;
}
