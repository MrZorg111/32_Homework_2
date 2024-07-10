#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <map>
#include <nlohmann/json.hpp>
#include "function.h"

/*
��������� ������ ������ �� ������ �1, �������� JSON-��������, �� ������ ��� ��� ���� ��������� ��������. 
����� � ���� JSON-���� ������ ������ ���� ���������� �������, � ���������� ������� ��� ������� � ����������� � ��������.

��������� ���� ������ � C++-��������� ��� ������������ �������. 
������������� ��������� ����������: ����� ����� �� ����� (��� �������) � ����� � ������� �������� ��������, 
� ������� �������� ����, � ����, ������� �� ��������.
*/

int main() {
    std::vector<Movie> movies;
    std::ifstream data_movies;
    data_movies.open("data_movie.json");
    nlohmann::json dict_movie;
    std::string wanted_name = "Bruce Willis";
    
    if (data_movies.is_open()) {
      data_movies >> dict_movie; 
      data_movies.close();
    }
    else {
      std::cout << "Open file error!" << std::endl;
    }
    
    iteration_dict(dict_movie, movies);
    const int SIZE = movies.size();
    //std::cout << "Enter a name or role: " << std::endl;
    //std::getline(std::cin, wanted_name);
    std::cout << "We will look for an actor " << wanted_name << std::endl;
    for(int a = 0; a < SIZE; a++) {
      finder(wanted_name, movies[a]);
    }


    return 0;  
}