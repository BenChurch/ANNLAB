#ifndef CATALOGUE_H
#define CATALOGUE_H

#include "ANNLAB.h"

class Catalogue
{
public:
    // Basic constructors and destructor
    //---------------------------------------------------------
    // Constructor
    Catalogue();
    Catalogue(vector<string> Entries);

    // Destructor
    ~Catalogue();

    // Copy constuctor
    Catalogue(const Catalogue& OriginalCatalogue);

    // Copy assignment operation
    Catalogue& operator= (const Catalogue&);

    // Move constructor
    Catalogue (Catalogue&& OriginalCatalogue); // Return relevant copies and delete originals

    // Move assignment operation
    Catalogue& operator= (Catalogue& );      // Return relevant copies and delete originals
    //---------------------------------------------------------

    vector<string> Entries;                 // A list of the names of things in the catalogue
    vector<vector<string>::iterator> Index; // Vectors of iterators, each of which will point to the beginning of each string element
    string GetEntry(int Index);


};

#endif // CATALOGUE_H
