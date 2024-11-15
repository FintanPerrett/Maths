#include <iostream>
#define SET_SIZE_MAX 100

//					PART A

// ------------  INSTRUCTIONS ---------------
//			DO NOT MODIFY THIS FILE. 
// Failure to heed this warning will likely result in a failing grade 
// on this assignment!
// For the implementation of the following you are NOT permitted to 
// use math.h / <cmath> or ANY other library includes other than the 
// already provided <iostream>

// ---------- TSet FUNCTIONALITY ------------
// The following is required functionality of the set theory portion 
// of the project. You are NOT required to re-implement or modify ANY 
// parts of this header file. This includes the TSet in its entirety.
// This is the implementation for a Set of integers between 1 and 100 inclusive
// where integer values of '0' in the array are considered 'empty' ie. not an element. 
// U = { x : x E Z, x >= 1 & x <= 100 }
struct TSet
{
private:
	int* m_piArray = nullptr;
	const int m_iMaxSize = SET_SIZE_MAX;
	
public:
	TSet()
	{
		m_piArray = new int[SET_SIZE_MAX];
		SetClear();
	}

	~TSet()
	{
		delete[] m_piArray;
	}

	void Print()
	{
		std::cout << "\nSet Elements: {";
		for (int i = 0; i < m_iMaxSize; i++)
		{
			if (m_piArray[i] != 0)
			{
				std::cout << " " << m_piArray[i];
				if (i < m_iMaxSize - 1)
				{
					std::cout << ",";
				}
			}
		}
		std::cout << " }; ";
	}

	void SetClear()
	{
		for (int n = 0; n < m_iMaxSize; n++)
		{
			m_piArray[n] = 0;
		}
	}

	void SetUniversal()
	{
		for (int n = 0; n < m_iMaxSize; n++)
		{
			m_piArray[n] = n + 1;
		}
	}

	void AddElement(int _iElement)
	{
		if ((_iElement <= m_iMaxSize) && (_iElement > 0))
		{
			m_piArray[_iElement - 1] = _iElement;
		}
	}

	void RemoveElement(int _iElement)
	{
		if ((_iElement <= m_iMaxSize) && (_iElement > 0))
		{
			m_piArray[_iElement - 1] = 0;
		}
	}

	bool ContainsElement(int _iElement)
	{
		if ((_iElement <= m_iMaxSize) && (_iElement > 0))
		{
			return (m_piArray[_iElement - 1] != 0);
		}
		return false;
	}
};

// ----------- LIBRARY FUNCTION DECLARITONS ---------------
// You are to implement the following functions in the appropriately
// generated discretemaths.cpp implementation/definition file.
// The above "discretemaths.cpp" file is specifically to be
// created/generated by you in the course of completing this project.
// 

float Magnitude(const float _kfX);

float Signum(const float _kfX);

float Floor(const float _kfX);

float Ceiling(const float _kfX);

unsigned long long Factorial(const unsigned int _kdn);

unsigned long long Combination(const unsigned int _kuin, const unsigned int _kuir);

unsigned long long Permutation(const unsigned int _kuin, const unsigned int _kuir);

int Cardinality(TSet& _rSet);

unsigned long long Power(TSet& _rSet);

unsigned long long CartesianProduct(TSet& _rA, TSet& _rB);

bool Equals(TSet& _rA, TSet& _rB);

bool Subset(TSet& _rA, TSet& _rB);

bool Superset(TSet& _rA, TSet& _rB);

bool Disjoint(TSet& _rA, TSet& _rB);

TSet& Union(TSet& _rA, TSet& _rB, TSet& _rResultant);

TSet& Intersection(TSet& _rA, TSet& _rB, TSet& _rResultant);

TSet& SetDifference(TSet& _rA, TSet& _rB, TSet& _rResultant);

TSet& SymmetricDifference(TSet& _rA, TSet& _rB, TSet& _rResultant);

TSet& Compliment(TSet& _rA, TSet& _rResultant);
