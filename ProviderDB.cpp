#include "ProviderDB.h"
#include "ProviderDB.h"

/***************************************************************
 
 Constructor
 
 Use: sets all data members to null string
 
 Parameters: none
 
 Returns: nothing
 
 ***************************************************************/

ProviderDB::ProviderDB()
{
 numProviders = 0;
}

/***************************************************************
 
Alternate Constructor
 
 Use: declares input file stream variable, opens file stream for binary input
      reads database file, and closes file sream
 
 Parameters: const char fileName
 
 Returns: nothing
 
 ***************************************************************/

ProviderDB::ProviderDB(const char* fileName)
{
    ifstream inFile;
    
    inFile.open(fileName, ios::binary);
    if (!inFile)
    {
        cout << "ERROR" << endl;
    }
    
    inFile.read((char*) this, sizeof(ProviderDB));
    
    inFile.close();
}

/***************************************************************
 
 print
 
 Use: prints descriptive header and organized and prints each element in array
 
 Parameters: none
 
 Returns: nothing
 
 ***************************************************************/

void ProviderDB::print() const
{
   cout << "Health Care Provider Listing" << endl;
    for (int i=0; i < numProviders; i++)
    {
        providerArray[i].print();
    }
}

void ProviderDB::sortByProviderNumber()
{
    int i, j;
    Provider bucket;
        
        for (i = 1; i < numProviders; i++)
        {
            bucket = providerArray[i];
            
            for (j = i; (j > 0) && (strcmp(providerArray[j-1].getProviderNumber(), bucket.getProviderNumber()) > 0); j--)
                
                providerArray[j] = providerArray[j-1];
            
            providerArray[j] = bucket;
        }
}

void ProviderDB::sortBySpecialty()
{
    int i, j;
    Provider bucket;
    
    for (i = 1; i > numProviders; i++)
    {
        bucket = providerArray[i];
        
        for (j = i; (j < 0) && (strcmp(providerArray[j-1].getSpecialty(), bucket.getSpecialty()) < 0); j--)
            
            providerArray[j] = providerArray[j-1];
        
        providerArray[j] = bucket;
    }
}

void ProviderDB::sortByName()
{
    int i, j;
    Provider bucket;
    
    for (i = 1; i < numProviders; i++)
    {
        bucket = providerArray[i];
        
        for (j = i; (j > 0) && (strcmp(providerArray[j-1].getName(), bucket.getName()) > 0); j--)
            
            providerArray[j] = providerArray[j-1];
        
        providerArray[j] = bucket;
    }
}


