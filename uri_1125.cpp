#include <iostream>
#include <iomanip>
#include <vector>
#include <map>

using vecuint_t = std::vector<unsigned int>;
using vecuint2_t = std::vector<vecuint_t>;
using group_t = std::map<unsigned int, vecuint_t>;


inline void read_race_results(vecuint2_t &tableRacesResults, const size_t &racesQuantity, const size_t &pilotsQuantity) {
    tableRacesResults.reserve(racesQuantity);
    for(size_t race = 0; race < racesQuantity; ++race) {
        vecuint_t pilotResults;
        pilotResults.reserve(pilotsQuantity);
        for(size_t pilot = 0; pilot < pilotsQuantity; ++pilot) {
            unsigned int result;
            std::cin >> result;
            pilotResults.push_back(result - 1);
        }
        tableRacesResults.push_back(pilotResults);
    }

    #ifdef VERBOSE
    std::cout << "Races results: " << std::endl
              << "   ";
    for(size_t pilot = 1; pilot <= pilotsQuantity; ++pilot)
        std::cout << " |" << std::setw(3) << pilot;
    std::cout << std::endl;
    for(size_t race = 0; race < racesQuantity; ++race) {
        std::cout << std::setw(3) << race;
        for(size_t pilot = 0; pilot < pilotsQuantity; ++pilot) {
            std::cout << " |" << std::setw(3) << tableRacesResults[race][pilot];
        }
        std::cout << std::endl;
    }
    std::cout << std::endl << std::endl;
    #endif // VERBOSE
}

inline void read_score_table(vecuint_t &scoreTable, const size_t &pilotsQuantity) {
    scoreTable.reserve(pilotsQuantity);
    size_t scoredPositions;
    std::cin >> scoredPositions;
    for(size_t position = 0; position < scoredPositions; ++position) {
        unsigned int points;
        std::cin >> points;
        scoreTable.push_back(points);
    }
    for(size_t position = scoredPositions; position < pilotsQuantity; ++position)
        scoreTable.push_back(0);

    #ifdef VERBOSE
    std::cout << "Score table: " << std::endl;
    for(size_t pilot = 1; pilot <= pilotsQuantity; ++pilot)
        std::cout << " |" << std::setw(3) << pilot;
    std::cout << std::endl;
    for(size_t pilot = 0; pilot < pilotsQuantity; ++pilot) {
        std::cout << " |" << std::setw(3) << scoreTable[pilot];
    }
    std::cout << std::endl << std::endl;
    #endif // VERBOSE
}

inline void calculate_pilots_score(vecuint_t &pilotsScore, const vecuint2_t &tableRacesResults, const vecuint_t &scoreTable,
                                   const size_t &racesQuantity, const size_t &pilotsQuantity) {
    for(size_t race = 0; race < racesQuantity; ++race)
        for(int pilot = 0; pilot < pilotsQuantity; ++pilot)
            pilotsScore[pilot] += scoreTable[tableRacesResults[race][pilot]];

    #ifdef VERBOSE
    std::cout << "Scores: " << std::endl;
    for(size_t pilot = 1; pilot <= pilotsQuantity; ++pilot)
        std::cout << " |" << std::setw(3) << pilot;
    std::cout << std::endl;
    for(size_t pilot = 0; pilot < pilotsQuantity; ++pilot) {
        std::cout << " |" << std::setw(3) << pilotsScore[pilot];
    }
    std::cout << std::endl << std::endl;
    #endif // VERBOSE
}

inline void print_winners(const vecuint_t &pilotsScores, const size_t pilotsQuantity) {
    group_t scoreGroups;
    for(size_t pilot = 0; pilot < pilotsQuantity; ++pilot)
        scoreGroups[pilotsScores[pilot]].push_back(pilot + 1);

    auto winners = scoreGroups.rbegin()->second;
    auto itWinners = winners.begin();
    std::cout << *itWinners;
    ++itWinners;
    while(itWinners != winners.end()) {
        std::cout << " " << *itWinners;
        ++itWinners;
    }
}


int main() {
    size_t racesQuantity, pilotsQuantity;
    while (std::cin >> racesQuantity >> pilotsQuantity
        && racesQuantity + pilotsQuantity > 0) {
        vecuint2_t tableRacesResults;
        read_race_results(tableRacesResults, racesQuantity, pilotsQuantity);

        size_t scoreTablesQuantity;
        std::cin >> scoreTablesQuantity;
        for(size_t table = 0; table < scoreTablesQuantity; ++table) {
            vecuint_t scoreTable;
            read_score_table(scoreTable, pilotsQuantity);

            vecuint_t pilotsScores(pilotsQuantity, 0);
            calculate_pilots_score(pilotsScores, tableRacesResults, scoreTable, racesQuantity, pilotsQuantity);

            print_winners(pilotsScores, pilotsQuantity);
            std::cout << std::endl;
        }
    }

    return 0;
}
