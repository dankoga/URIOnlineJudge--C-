#include <iostream>
#include <array>
#include<string>


int main() {
    std::array<std::string, 12> calendarMonthName {
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December"
    };

    size_t calendarMonthNumber;
    std::cin >> calendarMonthNumber;
    std::cout << calendarMonthName[calendarMonthNumber-1] << std::endl;


    return 0;
}
