#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

std::vector<int> matchingStrings(const std::vector<std::string>& stringList, const std::vector<std::string>& queries) {
    std::unordered_map<std::string, int> freqMap;
    for (const auto& str : stringList) {
        freqMap[str]++;
    }

    std::vector<int> results;
    results.reserve(queries.size());

    for (const auto& q : queries) {
        auto it = freqMap.find(q);
        if (it != freqMap.end()) {
            results.push_back(it->second);
        } else {
            results.push_back(0);
        }
    }

    return results;
}

int main() {
    std::vector<std::string> stringList = {"aba", "baba", "aba", "xzxb"};
    std::vector<std::string> queries = {"aba", "xzxb", "ab"};

    std::vector<int> res = matchingStrings(stringList, queries);
    std::cout << "Query Frequencies: ";
    for (int val : res) {
        std::cout << val << " ";
    }
    std::cout << "(Expected: 2 1 0)\n";

    return 0;
}