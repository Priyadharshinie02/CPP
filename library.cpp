#include <iostream>
using namespace std;

int main() {
    int totalBooks = 250;
    int issuedBooks = 63;
    int remainingBooks = totalBooks - issuedBooks;
    cout << "Books remaining: " << remainingBooks;
    return 0;
}