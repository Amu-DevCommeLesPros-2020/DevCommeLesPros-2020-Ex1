#include <stdbool.h>
#include <string.h>

#define TEST(x) if(!x)              \
                {                   \
                    resultat += 1;  \
                }

bool palindrome(const char* const chaine)
{
    size_t debut = 0;
    size_t fin = strlen(chaine);
    
    while(debut != fin)
    {
        char const gauche = chaine[debut];
        char const droite = chaine[fin];    
        if(gauche != droite)
        {
            return false;
        }

        ++debut;
        --fin;
    }
    
    return true;
}

int main()
{
    // Tous les tests incrémenterons cette variable de 1.
    // Le but est de la garder à 0.
    int resultat = 0;

    // Tests de la fonction palindrome.
    // Tests positifs.
    TEST(palindrome(""));
    TEST(palindrome("a"));
    TEST(palindrome("aa"));
    TEST(palindrome("aaa"));
    TEST(palindrome("aba"));
    TEST(palindrome("aaaa"));
    TEST(palindrome("abba"));
    TEST(palindrome(" "));
    // Tests negatifs.
    TEST(!palindrome(" a"));
    TEST(!palindrome("ab"));
    TEST(!palindrome("aab"));



    return resultat;
}
