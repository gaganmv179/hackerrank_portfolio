#include <iostream>
#include <string>

std::string timeConversion(std::string s) {
    std::string ampm = s.substr(8, 2);
    int hours = std::stoi(s.substr(0, 2));
    std::string rest = s.substr(2, 6);

    if (ampm == "AM") {
        if (hours == 12) hours = 0;
    } else {
        if (hours != 12) hours += 12;
    }

    char buffer[3];
    snprintf(buffer, sizeof(buffer), "%02d", hours);
    return std::string(buffer) + rest;
}

int main() {
    std::cout << "07:05:45PM -> " << timeConversion("07:05:45PM") << " (Expected: 19:05:45)\n";
    std::cout << "12:01:00AM -> " << timeConversion("12:01:00AM") << " (Expected: 00:01:00)\n";
    std::cout << "12:45:54PM -> " << timeConversion("12:45:54PM") << " (Expected: 12:45:54)\n";
    return 0;
}