#ifndef GENOTYPE_H
#define GENOTYPE_H

#include <bitset>
using namespace std;

// Five-bit binary encoding of a possible solution
class Genotype
{
    private:
        int gid;
        bitset<5> genes {};
    public:
        Genotype(int gid);
};

#endif