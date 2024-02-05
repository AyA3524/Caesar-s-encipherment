#include <iostream>
#include <cstring>
int main() {
    char tab[26];
    for (int i = 0; i < 26; ++i) {
        tab[i] = 'a' + i;
    }
    int k;
    char M[100]; 
    char C[100];
    std::cout << "Enter message M : ";
    std::cin.getline(M, sizeof(M));
    std::cout << "Enter the value of k : ";
    std::cin >> k;
    // Message encryption
    int len = strlen(M);
    for (int j = 0; j < len; ++j) {
        if (isalpha(M[j])) {
            char offset = isupper(M[j]) ? 'A' : 'a';
            C[j] = tab[(M[j] - offset + k) % 26];
        } else {
            // Do nothing for non-alphabetic characters
            C[j] = M[j];
        }
    }
   C[len] = '\0';
    std::cout << "Encrypted message : " << C << std::endl;
    return 0;
}
