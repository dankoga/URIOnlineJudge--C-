#include <iostream>
#include <iomanip>
#include <map>


typedef unsigned int uint_t;
typedef std::map<uint_t, uint_t> histogram_t;


int main() {
    size_t cityNumber = 1;
    size_t propertiesQuantity;
    while(std::cin >> propertiesQuantity && propertiesQuantity > 0) {
        if(cityNumber > 1)
            std::cout << std::endl;

        uint_t cityResidents = 0;
        uint_t cityConsumption = 0;
        histogram_t waterStats; // Using a map to count the consumption frequencies.
        for(size_t p = 0; p < propertiesQuantity; p++) {
            int propertyResidents, propertyConsumption;
            std::cin >> propertyResidents >> propertyConsumption;
            cityResidents += propertyResidents;
            cityConsumption += propertyConsumption;
            waterStats[propertyConsumption/propertyResidents] += propertyResidents;
        }

        std::cout << "Cidade# " << cityNumber << ":" << std::endl;

        for(auto property: waterStats) {
            if(property != *waterStats.begin())
                std::cout << " ";
            std::cout << property.second << "-" << property.first;
        }

        // outputing average consumption truncated to the second decimal place.
        std::cout << "\nConsumo medio: " << cityConsumption/cityResidents
                  << "." << std::setw(2) << std::setfill('0')
                  <<  100*(cityConsumption%cityResidents)/cityResidents
                  << " m3." << std::endl;

        cityNumber++;
    }

    return 0;
}
