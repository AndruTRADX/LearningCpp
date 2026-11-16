#include <vector>

using namespace std;

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