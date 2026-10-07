#include <iostream>
#include <vector>

std::vector<int> compareTriplets(const std::vector<int>& a, const std::vector<int>& b) {
    int alicePoints = 0;
    int bobPoints = 0;

    for (int i = 0; i < 3; ++i) {
        if (a[i] > b[i]) {
            alicePoints++;
        } else if (a[i] < b[i]) {
            bobPoints++;
        }
    }

    return {alicePoints, bobPoints};
}

int main() {
    std::vector<int> a = {5, 6, 7};
    std::vector<int> b = {3, 6, 10};

    std::vector<int> res = compareTriplets(a, b);
    std::cout << "Alice: " << res[0] << ", Bob: " << res[1] << " (Expected: 1 1)\n";
    return 0;
}   