#ifndef ORGANISM_H
#define ORGANISM_H

#include "genotype.h"
#include "phenotype.h"

// Contains genetic and physical information of solution
class Organism
{
    private:
        int oid;
        Genotype *gtype;
        Phenotype *ptype;
    public:
        Organism(int oid);
};

#endif