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

    for (int L=0; L<1; L++) {
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
        if (i=='L') cout << 'R'; else
        if (i=='C') cout << 'I'; else
        if (i=='Y') cout << 'S'; else
        if (i=='K') cout << 'H'; else
        if (i=='X') cout << 'N'; else
        if (i=='O') cout << 'D'; else
        if (i=='G') cout << 'L'; else
        if (i=='M') cout << 'M'; else
        if (i=='A') cout << 'V'; else
        if (i=='Q') cout << 'U'; else
        if (i=='E') cout << 'G'; else
        if (i=='P') cout << 'C'; else
        if (i=='N') cout << 'F'; else
        if (i=='J') cout << 'P'; else
        if (i=='S') cout << 'Y'; else
        if (i=='Z') cout << 'B'; else
        if (i=='B') cout << 'W'; else
        if (i=='F') cout << 'K'; else
        if (i=='I') cout << 'X'; else
        if (i=='W') cout << 'J'; else
        if (i=='V') cout << 'Z'; else
        if (i=='R') cout << 'Q'; else cout <<static_cast<char>(i);
    }

    return 0;
}
