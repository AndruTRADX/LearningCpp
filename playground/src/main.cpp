#include <vector>

using namespace std;

// Given the vector vec  to be {2, 4, 6, 8} , the possible pairs are (2,4), (2,6), (2,8), (4,6), (4,8), and (6,8) .
int main() {
    const vector<int> vec {2, 4, 6, 8};
    int result {0};
    const int vecSize = static_cast<int>(vec.size());

    if (vecSize == 0 || vecSize == 1) return 0;

    for (int i {0}; i < vecSize; i++) {
        for (int j {i + 1}; j < vecSize; j++) {
            result += vec.at(i) * vec.at(j);
        }
    }

    return result;
}