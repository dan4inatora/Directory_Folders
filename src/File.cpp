#include "File.h"

File::File()
{
   this->name = "default";
}

File :: File(string names){
    this->name = names;
}

string File :: getName()const{
    return this->name;
}

void File :: setName(string name){
    this->name = name;
}


