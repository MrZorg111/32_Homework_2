#include <iostream>
#include "function.h"
#include <string>
#include <map>
#include <vector>
#include <nlohmann/json.hpp>

void iteration_dict(nlohmann::json& _dict, std::vector<Movie>& _movies){
   Movie struct_t;
   for(int i = 0; i < 5; i++) {
      for(const auto tempo : _dict.items()) {
      struct_t.film = tempo.key();
      struct_t.country = _dict["The Lord of the ring"]["Country"];
      struct_t.date  = _dict["The Lord of the ring"]["Date"];
      struct_t.studio = _dict["The Lord of the ring"]["Studio"];
      struct_t.director = _dict["The Lord of the ring"]["Name Director"];
      struct_t.writter = _dict["The Lord of the ring"]["Name Writter"];
      struct_t.producer = _dict["The Lord of the ring"]["Name Producer"];
      struct_t.actorsCharacter = _dict["The Lord of the ring"]["ActorsCharacters"];
     _movies.push_back(struct_t);
      }
   }
}

void finder(std::string find_name, Movie& _movies){
   bool check = "false";
   for(std::map<std::string, std::string> ::iterator it = _movies.actorsCharacter.begin(); it != _movies.actorsCharacter.end(); it++) {
      if(!_movies.actorsCharacter.empty()) {
         if (it->second == find_name) {
            std::cout << "\t--Actor " << it->second << " played a role " << it->first << " in the movie " << _movies.film << std::endl;
            check = "true";
         }
      }  
      else {
         std::cout << "Map empty!" << std::endl;
      }
   }
   if (!check) {
      std::cout << "\t--The desired actor has not been found, as well as such a character is not known!" << std::endl;
   }
}