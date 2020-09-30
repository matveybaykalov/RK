#include <iostream>
#include <string>
#include <iomanip>

int main() {
    using std::cin;
    using std::cout;
    using std::endl;
    using std::string;

    double s = 0, M[26] = {};
    string text;

    for (int L=0; L<2; L++) {
        std::getline(cin, text);
        for (char i : text) {
            if (i >= 65 && i <= 90)
                M[i - 65]++;
            s++;
        }
    }
    char Bukva = 65;
    int k=0;
    for (int j : M){
        cout << std::setprecision(3) << static_cast<char>(Bukva+k) << ' ' << j/s << endl;
        k++;
    }
    for (char i : text){
        if (i=='D') cout << 'E'; else
        if (i=='T') cout << 'T'; else
        if (i=='U') cout << 'A'; else
        if (i=='H') cout << 'O'; else
        if (i=='L') cout << 'I'; else
        if (i=='C') cout << 'L'; else
        if (i=='Y') cout << 'S'; else
        if (i=='K') cout << 'H'; else
        if (i=='X') cout << 'N'; else
        if (i=='O') cout << 'D'; else
        if (i=='G') cout << 'R'; else
        if (i=='M') cout << 'C'; else
        if (i=='A') cout << 'U'; else
        if (i=='Q') cout << 'M'; else
        if (i=='E') cout << 'W'; else
        if (i=='P') cout << 'F'; else
        if (i=='N') cout << 'G'; else
        if (i=='J') cout << 'Y'; else
        if (i=='S') cout << 'P'; else
        if (i=='Z') cout << 'B'; else
        if (i=='B') cout << 'V'; else
        if (i=='F') cout << 'K'; else
        if (i=='I') cout << 'J'; else
        if (i=='W') cout << 'X'; else
        if (i=='V') cout << 'Q'; else
        if (i=='R') cout << 'Z'; else cout <<static_cast<char>(i);
    }

    return 0;
}