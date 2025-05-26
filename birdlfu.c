/* birdlfu.c */
#include "birdlfu.h"

Database mkdatabase(int16 cap){
    Database db;
    Entry *p;
    int16 size;

    db.num = 0;
    db.cap = cap;
    size = cap* sizeof(Entry);
    p = (Entry *)malloc($i size);
    assert(p);
    zero($c p, size);
    db.entries = p;

    return db; 
}

void destroydb(Database db){
    db.cap = 0;
    db.num = 0;
    free
}
void showdb(Database db){
    printf("cap:\t%d\nnum:\t%d\n", db.cap, db.num);
    return;
}

int main(int argc, char *argv[]) {
    Database db;
    db = mkdatabase(50_000);
    showdb(db);
    destroydb(db);
}