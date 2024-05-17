#include <iostream>
#include "function.h"

void data_read(MovieLists _movielists[], nlohmann::json &_dict){
    //###########################################################################
    _movielists[0].nameMovie = _dict["The Lord of the ring"]["NameMovie"];
    _movielists[0].nameDirector = _dict["The Lord of the ring"]["Director"];
    _movielists[0].nameWritten = _dict["The Lord of the ring"]["Written"];
    _movielists[0].nameProduser = _dict["The Lord of the ring"]["Produser"];
    _movielists[0].country = _dict["The Lord of the ring"]["Country"];
    _movielists[0].date = _dict["The Lord of the ring"]["Date"];
    _movielists[0].studio = _dict["The Lord of the ring"]["Studio"];
    _movielists[0].nameCharActors = _dict["The Lord of the ring"]["CharActors"];
    //############################################################################
    _movielists[1].nameMovie = _dict["Die Hard"]["NameMovie"];
    _movielists[1].nameDirector = _dict["Die Hard"]["Director"];
    _movielists[1].nameWritten = _dict["Die Hard"]["Written"];
    _movielists[1].nameProduser = _dict["Die Hard"]["Produser"];
    _movielists[1].country = _dict["Die Hard"]["Country"];
    _movielists[1].date = _dict["Die Hard"]["Date"];
    _movielists[1].studio = _dict["Die Hard"]["Studio"];
    _movielists[1].nameCharActors = _dict["Die Hard"]["CharActors"];
    //############################################################################
    _movielists[2].nameMovie = _dict["The Fifth Element"]["NameMovie"];
    _movielists[2].nameDirector = _dict["The Fifth Element"]["Director"];
    _movielists[2].nameWritten = _dict["The Fifth Element"]["Written"];
    _movielists[2].nameProduser = _dict["The Fifth Element"]["Produser"];
    _movielists[2].country = _dict["The Fifth Element"]["Country"];
    _movielists[2].date = _dict["The Fifth Element"]["Date"];
    _movielists[2].studio = _dict["The Fifth Element"]["Studio"];
    _movielists[2].nameCharActors = _dict["The Fifth Element"]["CharActors"];
    //############################################################################
    _movielists[3].nameMovie = _dict["Independence Day"]["NameMovie"];
    _movielists[3].nameDirector = _dict["Independence Day"]["Director"];
    _movielists[3].nameWritten = _dict["Independence Day"]["Written"];
    _movielists[3].nameProduser = _dict["Independence Day"]["Produser"];
    _movielists[3].country = _dict["Independence Day"]["Country"];
    _movielists[3].date = _dict["Independence Day"]["Date"];
    _movielists[3].studio = _dict["Independence Day"]["Studio"];
    _movielists[3].nameCharActors = _dict["Independence Day"]["CharActors"];
    //############################################################################
    _movielists[4].nameMovie = _dict["Armageddon"]["NameMovie"];
    _movielists[4].nameDirector = _dict["Armageddon"]["Director"];
    _movielists[4].nameWritten = _dict["Armageddon"]["Written"];
    _movielists[4].nameProduser = _dict["Armageddon"]["Produser"];
    _movielists[4].country = _dict["Armageddon"]["Country"];
    _movielists[4].date = _dict["Armageddon"]["Date"];
    _movielists[4].studio = _dict["Armageddon"]["Studio"];
    _movielists[4].nameCharActors = _dict["Armageddon"]["CharActors"];
    //############################################################################
}

bool chek_name(std::string input, std::string data){
    if (input == data) {
        return true;
    }
    return false;
}
