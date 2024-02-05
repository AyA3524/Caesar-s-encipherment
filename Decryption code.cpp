#include <iostream>
#include <cstring>
int main() {
    char tab[26];
    for (int i = 0; i < 26; ++i) {
        tab[i] = 'a' + i;
    }
    int k;
    char C[100];
    char M[100];
    std::cout << "Enter the encrypted message  C : ";
    std::cin.getline(C, sizeof(C));
    std::cout << "Enter the value of k : ";
    std::cin >> k;
    int len = strlen(C);
    for (int j = 0; j < len; ++j) {
        if (isalpha(C[j])) {
            char offset = isupper(C[j]) ? 'A' : 'a';
            M[j] = tab[(C[j] - offset - k + 26) % 26];
        } else {
            M[j] = C[j];
        }
    }
    M[len] = '\0';
    std::cout << "Decrypted message  : " << M << std::endl;
    return 0;
}
