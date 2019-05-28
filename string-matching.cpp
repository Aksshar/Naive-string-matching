#include<bits/stdc++.h> 
using namespace std; 
  
void Match(string pattern, string text) 
{    
    for (int i = 0; i <= text.length() - pattern.length(); i++) { 
        int j; 
  
        for (j = 0; j < pattern.length(); j++)
            if (text[i + j] != pattern[j] && pattern[j]!='_') 
                break;
  
        if (j == pattern.length())
            cout << "Pattern starting index :"
                 << i << endl; 
    } 
} 
int main() 
{ 
    string text = "AAAA";
    string pattern; 
    cout << "Enter the patten to match :";
    cin >> pattern;
    Match(pattern, text); 
    return 0; 
} 
