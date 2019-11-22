#include <stdbool.h>
#include <string.h>

#define TEST(x) if(!x)              \
                {                   \
                    resultat += 1;  \
                }

#define TEST_STR(a, b) if(strcmp(a, b) != 0)    \
                       {                        \
                           resultat += 1;       \
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

// Inverse une chaîne donnée.
// Modifie la chaîne donnée et retourne un pointeur au début de cette chaîne.
char* inverse(char* chaine)
{
    size_t const longueur = strlen(chaine);
    size_t const mi_longueur = longueur / 2;

    // On échange la première lettre avec la dernière, puis la deuxième avec 
    // l'avant-dernière et ainsi de suite jusqu'au milieu de la chaine.
    for(size_t i = 0; i != mi_longueur; ++i)
    {
        chaine[i] = chaine[longueur - i];
        chaine[longueur - i] = chaine[i];
    }

    return chaine;
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
    TEST(!palindrome("aaba"));


    // Tests de la fonction inverse.
    char test[10];
    strcpy(test, "");
    TEST_STR(inverse(test), "");
    strcpy(test, "a");
    TEST_STR(inverse(test), "a");
    strcpy(test, "aa");
    TEST_STR(inverse(test), "aa");
    strcpy(test, "ab");
    TEST_STR(inverse(test), "ba");
    strcpy(test, "abc");
    TEST_STR(inverse(test), "cba");
    strcpy(test, "abcd");
    TEST_STR(inverse(test), "dcba");
    strcpy(test, "abcde");
    TEST_STR(inverse(test), "edcba");

    return resultat;
}
