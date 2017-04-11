#include <bits/stdc++.h>

using namespace std;

bool isBeatifulWord (const std::string&);

int main(){
    string w;
    cin >> w;
    // Print 'Yes' if the word is beautiful or 'No' if it is not.
    if (isBeatifulWord (w))
    {
        std::cout << "Yes" << std::endl;
    }
    else
    {
        std::cout << "No"<< std::endl;
    }
    return 0;
}

bool isBeatifulWord (const std::string& s)
{
    if (s.empty ())
    {
        return false;
    }

    int tam = s.size ();

    if ((tam < 0) || (tam > 100))
    {
        return false;
    }

    bool isVowel = false;
    for (int i = 0; i < tam; i++)
    {
        if (i > 0)
        {
            if (s [i-1] == s [i])
            {
                return false;
            }
            if ((s [i] == 'a') || 
                (s [i] == 'e') || 
                (s [i] == 'i') || 
                (s [i] == 'o') || 
                (s [i] == 'u') || 
                (s [i] == 'y'))
            {
                if (isVowel)
                {
                    return false;
                }
                isVowel = true;
            }
            else
            {
                isVowel = false;
            }
        }
        else
        {
            if ((s [i] == 'a') || 
                (s [i] == 'e') || 
                (s [i] == 'i') || 
                (s [i] == 'o') || 
                (s [i] == 'u') || 
                (s [i] == 'y'))
            {
                isVowel = true;
            }
        }
    }
    return true;
}

