#pragma once 
#include <string>
#include <map>
#include <vector>
#include <nlohmann/json.hpp>
struct Movie {
    std::string film;
    std::string country;
    std::string date;
    std::string studio;
    std::string director;
    std::string writter;
    std::string producer;
    std::map<std::string, std::string> actorsCharacter;

};

void iteration_dict(nlohmann::json& _dict, std::vector<Movie>& _movies);

void finder(std::string find_name, Movie& _movies);






















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