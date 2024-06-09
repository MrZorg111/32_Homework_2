#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <map>
#include <nlohmann/json.hpp>

struct AutoIterationMovie {
    std::string nameMovie = "The Lord of the ring";
    std::string country = "New Zeland USA";
    std::string date = "2001";
    std::string studio = "New Line Cinema";
    std::string nameWritten = "Fran Walsh, Phillippa Boyens, Peter Jackson";
    std::string nameDirector = "Peter Jackson";
    std::string nameProducer = "Peter Jackson, Barry M. Osborne, Tim Sanders";
    std::vector<std::vector<std::string>> nameCharActors = {{"Frodo Baggins", "Elijah", "Wood"}, {"Gandalf", "Ian", "McKellen"}, {"Samwise Gamgee", "Sean", "Estin"}, {"Aragorn", "Viggo", "Mortensen"}, {"Legolas", "Orlando", "Bloom"}};
};

void iteration_dict(nlohmann::json &_dict);
void iteration_data(std::map<std::string, nlohmann::json> &_data, nlohmann::json &_dict);


































/*
"The Lord of the ring":    {"CharActors":[["Frodo Baggins", "Elijah","Wood"], ["Gandalf", "Ian", "McKellen"], ["Samwise Gamgee", "Sean", "Estin"], ["Aragorn", "Viggo", "Mortensen"], ["Legolas", "Orlando", "Bloom"]],
                            "Country":"New Zeland USA",
                            "Date":"2001",
                            "Director":"Peter Jackson",
                            "Produser":"Peter Jackson, Barry M. Osborne, Tim Sanders",
                            "Studio":"New Line Cinema",
                            "NameMovie":"The Lord of the ring",
                            "Written":"Fran Walsh, Philippa Boyens, Peter Jackson"},
*/