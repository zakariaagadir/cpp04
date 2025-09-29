#include "MateriaSource.hpp"
#include <iostream>
#include <string>

// --- Helper Functions ---

/**
 * @brief Deletes all Materia templates currently stored in the _vault array.
 */
void MateriaSource::cleanupVault()
{
    for (int i = 0; i < VAULT_SIZE; ++i)
    {
        if (_vault[i] != nullptr)
        {
            delete _vault[i];
            _vault[i] = nullptr;
        }
    }
}

// --- Canonical Form Implementations ---

MateriaSource::MateriaSource()
{
    // Initialize all template slots to null
    for (int i = 0; i < VAULT_SIZE; ++i)
        _vault[i] = nullptr;
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
    // Initialize to null before assignment to ensure safety
    for (int i = 0; i < VAULT_SIZE; ++i)
        _vault[i] = nullptr;
    *this = other; // Delegate deep copy to the assignment operator
}

MateriaSource& MateriaSource::operator=(const MateriaSource &other)
{
    if (this != &other)
    {
        // 1. Cleanup old templates (CRITICAL: prevents memory leak)
        cleanupVault();
        
        // 2. Deep copy new templates
        for (int i = 0; i < VAULT_SIZE; ++i)
        {
            if (other._vault[i] != nullptr)
            {
                _vault[i] = other._vault[i]->clone(); 
            }
        }
    }
    return *this;
}

MateriaSource::~MateriaSource()
{
    cleanupVault();
}

void MateriaSource::learnMateria(AMateria* mater)
{
    if (!mater)
    {
        std::cout << "[MateriaSource] Cannot learn nullptr Materia." << std::endl;
        return;
    }

    for (int i = 0; i < VAULT_SIZE; ++i)
    {
        if (_vault[i] == nullptr)
        {
            _vault[i] = mater->clone(); 
            std::cout << "[MateriaSource] Learned Materia: " << mater->getType() << " in vault slot " << i << std::endl;
            return;
        }
    }
    std::cout << "[MateriaSource] Vault is full. Cannot learn " << mater->getType() << std::endl;
}


AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; ++i)
    {
        if (_vault[i] != nullptr && _vault[i]->getType() == type)
        {
            std::cout << "[MateriaSource] Creating Materia of type: " << type << std::endl;
            return _vault[i]->clone(); 
        }
    }
    std::cout << "[MateriaSource] Failed to create Materia of unknown type: " << type << std::endl;
    return nullptr;
}
