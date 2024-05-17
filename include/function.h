#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <nlohmann/json.hpp>

struct MovieLists {
    std::string nameMovie;
    std::string country;
    std::string date;
    std::string studio;
    std::string nameWritten;
    std::string nameDirector;
    std::string nameProduser;
    std::vector<std::vector<std::string>> nameCharActors;
};



void data_read(MovieLists _movielists[], nlohmann::json& _dict);
bool chek_name(std::string input, std::string data);