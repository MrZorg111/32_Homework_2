#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <nlohmann/json.hpp>
#include "function.h"

/*
    Используя модель данных из задачи №1, создайте JSON-документ, но теперь уже для пяти различных кинолент.
    Ключи в этой JSON-базе данных должны быть названиями фильмов, а значениями служить уже словари с информацией о картинах.

    Загрузите базу данных в C++-программу для последующего анализа. 
    Предусмотрите следующий функционал: поиск актёра по имени (или фамилии) и вывод в консоль названий кинолент, 
    в которых снимался актёр, и роль, которую он исполнял.

    Что оценивается
    Валидность созданного JSON-документа с базой данных о фильмах. Корректность работы программы поиска актёра.
*/

int main() {
    
    //#####################################################
    MovieLists movielists[5];
    std::ifstream data_movie("data_movie.json");
    nlohmann::json dict;
    data_movie >> dict;
    data_read(movielists, dict);
    std::string search;
    bool chek_true = false;
    
    //#########################################################################################
    std::cout << "Enter the actor's first or last name:" << std::endl;
    std::cin >> search;
    for (int i = 0; i < 5; i++) {
        for (int t = 0; t < 5; t++) {
            for (int j = 1; j < 3; j++) {
                if(chek_name(search, movielists[i].nameCharActors[t][j])) {
                    if (!chek_true) {
                        std::cout << "The desired actor played the role: " << std::endl;
                    }
                    std::cout << movielists[i].nameCharActors[t][0] << ", in the movie: " << movielists[i].nameMovie << std::endl;
                    chek_true = true;
                    break;
                }
            }
        }
    }
    if (!chek_true) {
        std::cout << "The actor in question did not star in the films provided!" << std::endl;
    }
    //#########################################################################################
    return 0;
}