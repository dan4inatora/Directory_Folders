#include "File.h"
#include "TextFile.h"
#include "Directory.h"


int main()
{
    TextFile t;
    t.setName("Breaking the habbit");
    t.setcontent("Im breaking the habit tonigh");
    //t.info();
    //t.contents();
    //cout<<t.size()<<endl;


    TextFile t1;
    t1.setName("Sharp edges");
    t1.setcontent("Sharp edges have conscequences now, gues that i have to find out for myself");

    Directory d;
    d.setName("Directorytest");
    d.addFile(&t1);
    d.addFile(&t);


    Directory d2;
    d2.addFile(&d);
    d2.addFile(&t1);
    d2.addFile(&t);
    d2.addFile(&d);
    d2.info();
    return 0;
}
