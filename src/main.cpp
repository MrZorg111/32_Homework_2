#include <iostream>
#include <string>
#include <map>
#include <nlohmann/json.hpp>
#include "function.h"

/*
Используя модель данных из задачи №1, создайте JSON-документ, но теперь уже для пяти различных кинолент. 
Ключи в этой JSON-базе данных должны быть названиями фильмов, а значениями служить уже словари с информацией о картинах.

Загрузите базу данных в C++-программу для последующего анализа. 
Предусмотрите следующий функционал: поиск актёра по имени (или фамилии) и вывод в консоль названий кинолент, 
в которых снимался актёр, и роль, которую он исполнял.
*/

int main() {
    nlohmann::json auto_dict;
    std::map<std::string, nlohmann::json> auto_data_base;
    iteration_dict(auto_dict);
    iteration_data(auto_data_base, auto_dict);

    std::cout << auto_data_base.size();    

    
  return 0;  
}




//##########################################################################

/*

for(std::map<std::string, nlohmann::json> :: iterator it = auto_data_base.begin(); it != auto_data_base.end(); it++) {
        std::cout << it->first << "\t\t" << it->second << std::endl;
    }
*/