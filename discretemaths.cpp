#include "discretemaths.h"

// Function to compute the magnitude (absolute value) of a float
float Magnitude(const float _kfX)
{
    // Return the positive value of _kfX
    return (_kfX >= 0.0f) ? _kfX : -_kfX;
}

// Function to determine the sign of a float
float Signum(const float _kfX)
{
    if (_kfX > 0.0f)
    {
        return 1.0f; // Positive number
    }
    else if (_kfX < 0.0f)
    {
        return -1.0f; // Negative number
    }
    else
    {
        return 0.0f; // Zero
    }
}

// Function to compute the floor of a float
float Floor(const float _kfX)
{
    int iIntPart = static_cast<int>(_kfX); // Truncate decimal part
    // Adjust for negative numbers not equal to integer part
    if (_kfX < 0.0f && _kfX != static_cast<float>(iIntPart))
    {
        return static_cast<float>(iIntPart - 1);
    }
    return static_cast<float>(iIntPart);
}

// Function to compute the ceiling of a float
float Ceiling(const float _kfX)
{
    int iIntPart = static_cast<int>(_kfX); // Truncate decimal part
    // Adjust for positive numbers not equal to integer part
    if (_kfX > 0.0f && _kfX != static_cast<float>(iIntPart))
    {
        return static_cast<float>(iIntPart + 1);
    }
    return static_cast<float>(iIntPart);
}

// Function to compute the factorial of an unsigned int
unsigned long long Factorial(const unsigned int _kdn)
{
    unsigned long long ullResult = 1; // Initialize result
    for (unsigned int uiI = 1; uiI <= _kdn; ++uiI)
    {
        ullResult *= uiI; // Multiply by each number up to _kdn
    }
    return ullResult;
}

// Function to compute combinations (n choose r)
unsigned long long Combination(const unsigned int _kuin, const unsigned int _kuir)
{
    if (_kuir > _kuin)
    {
        return 0; // No combinations if r > n
    }

    unsigned long long ullResult = 1;
    unsigned int uiK = (_kuir < (_kuin - _kuir)) ? _kuir : (_kuin - _kuir); // Symmetry property

    for (unsigned int uiI = 1; uiI <= uiK; ++uiI)
    {
        ullResult *= (_kuin - uiI + 1);
        ullResult /= uiI;
    }
    return ullResult;
}

// Function to compute permutations (n P r)
unsigned long long Permutation(const unsigned int _kuin, const unsigned int _kuir)
{
    if (_kuir > _kuin)
    {
        return 0; // No permutations if r > n
    }

    unsigned long long ullResult = 1;

    for (unsigned int uiI = 0; uiI < _kuir; ++uiI)
    {
        ullResult *= (_kuin - uiI);
    }
    return ullResult;
}

// Function to compute the cardinality (number of elements) of a set
int Cardinality(TSet& _rSet)
{
    int iCount = 0; // Initialize count
    for (int iI = 1; iI <= SET_SIZE_MAX; ++iI)
    {
        if (_rSet.ContainsElement(iI))
        {
            ++iCount; // Increment count for each element found
        }
    }
    return iCount;
}

// Function to compute the power set size (number of subsets)
unsigned long long Power(TSet& _rSet)
{
    int iCardinality = Cardinality(_rSet);
    // Compute 2^cardinality using bit shifting
    return static_cast<unsigned long long>(1) << iCardinality;
}

// Function to compute the Cartesian product size of two sets
unsigned long long CartesianProduct(TSet& _rA, TSet& _rB)
{
    int iCardinalityA = Cardinality(_rA);
    int iCardinalityB = Cardinality(_rB);
    // Cartesian product size is product of cardinalities
    return static_cast<unsigned long long>(iCardinalityA) * iCardinalityB;
}

// Function to check if two sets are equal
bool Equals(TSet& _rA, TSet& _rB)
{
    for (int iI = 1; iI <= SET_SIZE_MAX; ++iI)
    {
        if (_rA.ContainsElement(iI) != _rB.ContainsElement(iI))
        {
            return false; // Elements mismatch
        }
    }
    return true; // All elements match
}

// Function to check if _rA is a subset of _rB
bool Subset(TSet& _rA, TSet& _rB)
{
    for (int iI = 1; iI <= SET_SIZE_MAX; ++iI)
    {
        if (_rA.ContainsElement(iI) && !_rB.ContainsElement(iI))
        {
            return false; // Element in A not in B
        }
    }
    return true; // All elements of A are in B
}

// Function to check if _rA is a superset of _rB
bool Superset(TSet& _rA, TSet& _rB)
{
    // Superset if B is subset of A
    return Subset(_rB, _rA);
}

// Function to check if two sets are disjoint
bool Disjoint(TSet& _rA, TSet& _rB)
{
    for (int iI = 1; iI <= SET_SIZE_MAX; ++iI)
    {
        if (_rA.ContainsElement(iI) && _rB.ContainsElement(iI))
        {
            return false; // Common element found
        }
    }
    return true; // No common elements
}

// Function to compute the union of two sets
TSet& Union(TSet& _rA, TSet& _rB, TSet& _rResultant)
{
    _rResultant.SetClear(); // Clear resultant set
    for (int iI = 1; iI <= SET_SIZE_MAX; ++iI)
    {
        if (_rA.ContainsElement(iI) || _rB.ContainsElement(iI))
        {
            _rResultant.AddElement(iI); // Add element if in A or B
        }
    }
    return _rResultant;
}

// Function to compute the intersection of two sets
TSet& Intersection(TSet& _rA, TSet& _rB, TSet& _rResultant)
{
    _rResultant.SetClear(); // Clear resultant set
    for (int iI = 1; iI <= SET_SIZE_MAX; ++iI)
    {
        if (_rA.ContainsElement(iI) && _rB.ContainsElement(iI))
        {
            _rResultant.AddElement(iI); // Add element if in both A and B
        }
    }
    return _rResultant;
}

// Function to compute the set difference A \ B
TSet& SetDifference(TSet& _rA, TSet& _rB, TSet& _rResultant)
{
    _rResultant.SetClear(); // Clear resultant set
    for (int iI = 1; iI <= SET_SIZE_MAX; ++iI)
    {
        if (_rA.ContainsElement(iI) && !_rB.ContainsElement(iI))
        {
            _rResultant.AddElement(iI); // Add elements in A not in B
        }
    }
    return _rResultant;
}

// Function to compute the symmetric difference of two sets
TSet& SymmetricDifference(TSet& _rA, TSet& _rB, TSet& _rResultant)
{
    _rResultant.SetClear(); // Clear resultant set
    for (int iI = 1; iI <= SET_SIZE_MAX; ++iI)
    {
        bool bInA = _rA.ContainsElement(iI);
        bool bInB = _rB.ContainsElement(iI);
        if (bInA != bInB)
        {
            _rResultant.AddElement(iI); // Add elements in A or B but not both
        }
    }
    return _rResultant;
}

// Function to compute the complement of a set
TSet& Compliment(TSet& _rA, TSet& _rResultant)
{
    _rResultant.SetClear(); // Clear resultant set
    for (int iI = 1; iI <= SET_SIZE_MAX; ++iI)
    {
        if (!_rA.ContainsElement(iI))
        {
            _rResultant.AddElement(iI); // Add elements not in A
        }
    }
    return _rResultant;
}
