#include "TextFile.h"

TextFile::TextFile() : File()
{
    this->content = "Blank";
}

TextFile :: TextFile(string cont, string names) : File(names)
{
    this->content = cont;
}

unsigned int TextFile :: size(){
    return this->content.length();
}

void TextFile :: setcontent(string cont){
    this->content = cont;
}

string TextFile :: getcontent()const{
    return this->content;
}

void TextFile :: info()const{
    cout<<this->getName()<<endl;
}

void TextFile :: contents()const{
    cout<<this->content<<endl;
}
