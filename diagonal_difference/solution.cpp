#include <iostream>
#include <vector>

std::vector<int> dynamicArray(int n, const std::vector<std::vector<int>>& queries) {
    std::vector<std::vector<int>> arr(n);
    std::vector<int> answers;
    int lastAnswer = 0;

    for (const auto& q : queries) {
        int type = q[0];
        int x = q[1];
        int y = q[2];
        int idx = (x ^ lastAnswer) % n;

        if (type == 1) {
            arr[idx].push_back(y);
        } else if (type == 2) {
            lastAnswer = arr[idx][y % arr[idx].size()];
            answers.push_back(lastAnswer);
        }
    }

    return answers;
}

int main() {
    int n = 2;
    std::vector<std::vector<int>> queries = {
        {1, 0, 5},
        {1, 1, 7},
        {1, 0, 3},
        {2, 1, 0},
        {2, 1, 1}
    };

    std::vector<int> results = dynamicArray(n, queries);
    std::cout << "Results: ";
    for (int ans : results) {
        std::cout << ans << " ";
    }
    std::cout << "(Expected: 7 3)\n";

    return 0;
}