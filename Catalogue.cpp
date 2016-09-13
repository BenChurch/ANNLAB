#include "Catalogue.h"
#include "ANNLAB.h"

Catalogue::Catalogue()
{

}
Catalogue::Catalogue(vector<string> Entries)
{
    for(int i = 0; i < Entries.size(); i++)
    {

        this->Entries.push_back(Entries[i]);
    }
}

Catalogue::~Catalogue()
{

}

Catalogue::Catalogue(const Catalogue& OriginalCatalogue)
{

}

Catalogue& Catalogue::operator= (const Catalogue&)
{

}

Catalogue::Catalogue(Catalogue&& OriginalNeuralNet)
{

}

Catalogue& Catalogue::operator= (Catalogue&)
{

}
