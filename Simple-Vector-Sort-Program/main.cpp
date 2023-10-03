#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    // Membuat sebuah vektor berisi beberapa angka acak
    vector<int> numbers = {5, 2, 9, 1, 5, 6};

    // Menggunakan sort dari <algorithm> untuk mengurutkan vektor
    sort(numbers.begin(), numbers.end());

    // Menampilkan vektor yang telah diurutkan
    cout << "Hasil pengurutan (ascending): ";
    for (int num : numbers)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
