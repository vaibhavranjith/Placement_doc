//https://www.geeksforgeeks.org/find-substrings-contain-vowels/
bool isVowel(char x) 
{ 
    return (x == 'a' || x == 'e' || x == 'i' || 
                        x == 'o' || x == 'u'); 
} 
void FindSubstring(string str) 
{ 
    set<char> hash;  // To store vowels 
    int start = 0; 
    for (int i=0; i<str.length(); i++) 
        if (isVowel(str[i]) == true) 
        { 
            hash.insert(str[i]); 
            if (hash.size()==5) 
                cout << str.substr(start, i-start+1) 
                     << " "; 
        } 
        else
        { 
            start = i+1; 
            hash.clear(); 
        } 
} 
  
