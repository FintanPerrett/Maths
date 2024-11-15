#include "test.h"
#include <iostream>

// Function to perform state check with acceptable precision
bool PerformStateCheck(const float _kfA, const float _kfB, const float _kfPrecision)
{
    // Check if the absolute difference between _kfA and _kfB is less than the precision
    return (Magnitude(_kfA - _kfB) < _kfPrecision);
}

// Mathematical Function Tests

// Test function for Magnitude
bool TestMagnitude(const float _kfTestState, const float _kfExpectedState)
{
    const float _kfPrecision = 0.000001f; // Precision for 6 decimal places

    // Act: Call the Magnitude function with the test input
    float _fResult = Magnitude(_kfTestState);

    // Assert: Check if the result matches the expected value within the precision
    bool _bResult = PerformStateCheck(_kfExpectedState, _fResult, _kfPrecision);

    // Output the expected and actual results
    std::cout << "\nExpected Magnitude == " << _kfExpectedState;
    std::cout << "\nResultant Magnitude == " << _fResult;

    std::cout << "\nTest " << (_bResult ? "passed" : "failed") << "\n";

    return _bResult;
}

// Function to perform Magnitude test scenarios
void PerformMagnitudeTestScenarios(int& _riTestsPerformed, int& _riTestsPassed)
{
    float _fData;
    float _fExpected;
    bool _bTestResult;

    // Scenario 1: Positive number
    _fData = 2.644238f;
    _fExpected = 2.644238f;
    // Test with positive float
    _bTestResult = TestMagnitude(_fData, _fExpected);
    _riTestsPerformed++;
    _riTestsPassed += _bTestResult;

    // Scenario 2: Negative number
    _fData = -5.123457f;
    _fExpected = 5.123457f;
    // Test with negative float
    _bTestResult = TestMagnitude(_fData, _fExpected);
    _riTestsPerformed++;
    _riTestsPassed += _bTestResult;

    // Scenario 3: Zero
    _fData = 0.0f;
    _fExpected = 0.0f;
    // Test with zero
    _bTestResult = TestMagnitude(_fData, _fExpected);
    _riTestsPerformed++;
    _riTestsPassed += _bTestResult;
}

// Test function for Signum
bool TestSignum(const float _kfTestState, const float _kfExpectedState)
{
    const float _kfPrecision = 0.000001f;

    // Act: Call the Signum function with the test input
    float _fResult = Signum(_kfTestState);

    // Assert: Check if the result matches the expected value within the precision
    bool _bResult = PerformStateCheck(_kfExpectedState, _fResult, _kfPrecision);

    // Output the expected and actual results
    std::cout << "\nExpected Signum == " << _kfExpectedState;
    std::cout << "\nResultant Signum == " << _fResult;

    std::cout << "\nTest " << (_bResult ? "passed" : "failed") << "\n";

    return _bResult;
}

// Function to perform Signum test scenarios
void PerformSignumTestScenarios(int& _riTestsPerformed, int& _riTestsPassed)
{
    float _fData;
    float _fExpected;
    bool _bTestResult;

    // Scenario 1: Positive number
    _fData = 3.5f;
    _fExpected = 1.0f;
    // Test with positive number
    _bTestResult = TestSignum(_fData, _fExpected);
    _riTestsPerformed++;
    _riTestsPassed += _bTestResult;

    // Scenario 2: Negative number
    _fData = -2.7f;
    _fExpected = -1.0f;
    // Test with negative number
    _bTestResult = TestSignum(_fData, _fExpected);
    _riTestsPerformed++;
    _riTestsPassed += _bTestResult;

    // Scenario 3: Zero
    _fData = 0.0f;
    _fExpected = 0.0f;
    // Test with zero
    _bTestResult = TestSignum(_fData, _fExpected);
    _riTestsPerformed++;
    _riTestsPassed += _bTestResult;
}

// Test function for Floor
bool TestFloor(const float _kfTestState, const float _kfExpectedState)
{
    const float _kfPrecision = 0.000001f;

    // Act: Call the Floor function with the test input
    float _fResult = Floor(_kfTestState);

    // Assert: Check if the result matches the expected value within the precision
    bool _bResult = PerformStateCheck(_kfExpectedState, _fResult, _kfPrecision);

    // Output the expected and actual results
    std::cout << "\nExpected Floor == " << _kfExpectedState;
    std::cout << "\nResultant Floor == " << _fResult;

    std::cout << "\nTest " << (_bResult ? "passed" : "failed") << "\n";

    return _bResult;
}

// Function to perform Floor test scenarios
void PerformFloorTestScenarios(int& _riTestsPerformed, int& _riTestsPassed)
{
    float _fData;
    float _fExpected;
    bool _bTestResult;

    // Scenario 1: Positive decimal
    _fData = 3.7f;
    _fExpected = 3.0f;
    _bTestResult = TestFloor(_fData, _fExpected);
    _riTestsPerformed++;
    _riTestsPassed += _bTestResult;

    // Scenario 2: Negative decimal
    _fData = -2.3f;
    _fExpected = -3.0f;
    _bTestResult = TestFloor(_fData, _fExpected);
    _riTestsPerformed++;
    _riTestsPassed += _bTestResult;

    // Scenario 3: Integer
    _fData = 5.0f;
    _fExpected = 5.0f;
    _bTestResult = TestFloor(_fData, _fExpected);
    _riTestsPerformed++;
    _riTestsPassed += _bTestResult;
}

// Test function for Ceiling
bool TestCeiling(const float _kfTestState, const float _kfExpectedState)
{
    const float _kfPrecision = 0.000001f;

    // Act: Call the Ceiling function with the test input
    float _fResult = Ceiling(_kfTestState);

    // Assert: Check if the result matches the expected value within the precision
    bool _bResult = PerformStateCheck(_kfExpectedState, _fResult, _kfPrecision);

    // Output the expected and actual results
    std::cout << "\nExpected Ceiling == " << _kfExpectedState;
    std::cout << "\nResultant Ceiling == " << _fResult;

    std::cout << "\nTest " << (_bResult ? "passed" : "failed") << "\n";

    return _bResult;
}

// Function to perform Ceiling test scenarios
void PerformCeilingTestScenarios(int& _riTestsPerformed, int& _riTestsPassed)
{
    float _fData;
    float _fExpected;
    bool _bTestResult;

    // Scenario 1: Positive decimal
    _fData = 3.2f;
    _fExpected = 4.0f;
    _bTestResult = TestCeiling(_fData, _fExpected);
    _riTestsPerformed++;
    _riTestsPassed += _bTestResult;

    // Scenario 2: Negative decimal
    _fData = -2.8f;
    _fExpected = -2.0f;
    _bTestResult = TestCeiling(_fData, _fExpected);
    _riTestsPerformed++;
    _riTestsPassed += _bTestResult;

    // Scenario 3: Integer
    _fData = -5.0f;
    _fExpected = -5.0f;
    _bTestResult = TestCeiling(_fData, _fExpected);
    _riTestsPerformed++;
    _riTestsPassed += _bTestResult;
}

// Test function for Factorial
bool TestFactorial(const unsigned int _kuiN, const unsigned long long _kullExpected)
{
    // Act: Call the Factorial function with the test input
    unsigned long long _ullResult = Factorial(_kuiN);

    // Assert: Check if the result matches the expected value
    bool _bResult = (_ullResult == _kullExpected);

    // Output the expected and actual results
    std::cout << "\nExpected Factorial(" << _kuiN << ") == " << _kullExpected;
    std::cout << "\nResultant Factorial == " << _ullResult;

    std::cout << "\nTest " << (_bResult ? "passed" : "failed") << "\n";

    return _bResult;
}

// Function to perform Factorial test scenarios
void PerformFactorialTestScenarios(int& _riTestsPerformed, int& _riTestsPassed)
{
    unsigned int _uiN;
    unsigned long long _ullExpected;
    bool _bTestResult;

    // Scenario 1: Factorial(0)
    _uiN = 0;
    _ullExpected = 1;
    _bTestResult = TestFactorial(_uiN, _ullExpected);
    _riTestsPerformed++;
    _riTestsPassed += _bTestResult;

    // Scenario 2: Factorial(5)
    _uiN = 5;
    _ullExpected = 120;
    _bTestResult = TestFactorial(_uiN, _ullExpected);
    _riTestsPerformed++;
    _riTestsPassed += _bTestResult;

    // Scenario 3: Factorial(10)
    _uiN = 10;
    _ullExpected = 3628800;
    _bTestResult = TestFactorial(_uiN, _ullExpected);
    _riTestsPerformed++;
    _riTestsPassed += _bTestResult;
}
// Test function for Combination
bool TestCombination(const unsigned int _kuiN, const unsigned int _kuiR, const unsigned long long _kullExpected)
{
    // Act: Call the Combination function with the test inputs
    unsigned long long _ullResult = Combination(_kuiN, _kuiR);

    // Assert: Check if the result matches the expected value
    bool _bResult = (_ullResult == _kullExpected);

    // Output the expected and actual results
    std::cout << "\nExpected Combination(" << _kuiN << ", " << _kuiR << ") == " << _kullExpected;
    std::cout << "\nResultant Combination == " << _ullResult;

    std::cout << "\nTest " << (_bResult ? "passed" : "failed") << "\n";

    return _bResult;
}

// Function to perform Combination test scenarios
void PerformCombinationTestScenarios(int& _riTestsPerformed, int& _riTestsPassed)
{
    unsigned int _uiN, _uiR;
    unsigned long long _ullExpected;
    bool _bTestResult;

    // Scenario 1: C(5, 3)
    _uiN = 5;
    _uiR = 3;
    _ullExpected = 10;
    _bTestResult = TestCombination(_uiN, _uiR, _ullExpected);
    _riTestsPerformed++;
    _riTestsPassed += _bTestResult;

    // Scenario 2: C(10, 0)
    _uiN = 10;
    _uiR = 0;
    _ullExpected = 1;
    _bTestResult = TestCombination(_uiN, _uiR, _ullExpected);
    _riTestsPerformed++;
    _riTestsPassed += _bTestResult;

    // Scenario 3: C(10, 10)
    _uiN = 10;
    _uiR = 10;
    _ullExpected = 1;
    _bTestResult = TestCombination(_uiN, _uiR, _ullExpected);
    _riTestsPerformed++;
    _riTestsPassed += _bTestResult;

    // Scenario 4: C(20, 15)
    _uiN = 20;
    _uiR = 15;
    _ullExpected = 15504;
    _bTestResult = TestCombination(_uiN, _uiR, _ullExpected);
    _riTestsPerformed++;
    _riTestsPassed += _bTestResult;
}

// Test function for Permutation
bool TestPermutation(const unsigned int _kuiN, const unsigned int _kuiR, const unsigned long long _kullExpected)
{
    // Act: Call the Permutation function with the test inputs
    unsigned long long _ullResult = Permutation(_kuiN, _kuiR);

    // Assert: Check if the result matches the expected value
    bool _bResult = (_ullResult == _kullExpected);

    // Output the expected and actual results
    std::cout << "\nExpected Permutation(" << _kuiN << ", " << _kuiR << ") == " << _kullExpected;
    std::cout << "\nResultant Permutation == " << _ullResult;

    std::cout << "\nTest " << (_bResult ? "passed" : "failed") << "\n";

    return _bResult;
}

// Function to perform Permutation test scenarios
void PerformPermutationTestScenarios(int& _riTestsPerformed, int& _riTestsPassed)
{
    unsigned int _uiN, _uiR;
    unsigned long long _ullExpected;
    bool _bTestResult;

    // Scenario 1: P(5, 3)
    _uiN = 5;
    _uiR = 3;
    _ullExpected = 60;
    _bTestResult = TestPermutation(_uiN, _uiR, _ullExpected);
    _riTestsPerformed++;
    _riTestsPassed += _bTestResult;

    // Scenario 2: P(10, 0)
    _uiN = 10;
    _uiR = 0;
    _ullExpected = 1;
    _bTestResult = TestPermutation(_uiN, _uiR, _ullExpected);
    _riTestsPerformed++;
    _riTestsPassed += _bTestResult;

    // Scenario 3: P(10, 10)
    _uiN = 10;
    _uiR = 10;
    _ullExpected = 3628800;
    _bTestResult = TestPermutation(_uiN, _uiR, _ullExpected);
    _riTestsPerformed++;
    _riTestsPassed += _bTestResult;
}

bool TestCardinality(TSet& _rtSet, const int _kiExpected)
{
    // Act: Call the Cardinality function with the test set
    int _iResult = Cardinality(_rtSet);

    // Assert: Check if the result matches the expected value
    bool _bResult = (_iResult == _kiExpected);

    // Output the expected and actual results
    std::cout << "\nExpected Cardinality == " << _kiExpected;
    std::cout << "\nResultant Cardinality == " << _iResult;

    std::cout << "\nTest " << (_bResult ? "passed" : "failed") << "\n";

    return _bResult;
}

// Function to perform Cardinality test scenarios
void PerformCardinalityTestScenarios(int& _riTestsPerformed, int& _riTestsPassed)
{
    TSet _tSetA;
    int _iExpected;
    bool _bTestResult;

    // Scenario 1: Empty set
    _tSetA.SetClear();
    _iExpected = 0;
    // Test with empty set
    _bTestResult = TestCardinality(_tSetA, _iExpected);
    _riTestsPerformed++;
    _riTestsPassed += _bTestResult;

    // Scenario 2: Universal set
    _tSetA.SetUniversal();
    _iExpected = SET_SIZE_MAX;
    // Test with universal set
    _bTestResult = TestCardinality(_tSetA, _iExpected);
    _riTestsPerformed++;
    _riTestsPassed += _bTestResult;

    // Scenario 3: Set with specific elements
    _tSetA.SetClear();
    _tSetA.AddElement(1);
    _tSetA.AddElement(50);
    _tSetA.AddElement(100);
    _iExpected = 3;
    // Test with set containing 3 elements
    _bTestResult = TestCardinality(_tSetA, _iExpected);
    _riTestsPerformed++;
    _riTestsPassed += _bTestResult;
}

// Test function for Power
bool TestPower(TSet& _rtSet, const unsigned long long _kullExpected)
{
    // Act: Call the Power function with the test set
    unsigned long long _ullResult = Power(_rtSet);

    // Assert: Check if the result matches the expected value
    bool _bResult = (_ullResult == _kullExpected);

    // Output the expected and actual results
    std::cout << "\nExpected Power Set Size == " << _kullExpected;
    std::cout << "\nResultant Power Set Size == " << _ullResult;

    std::cout << "\nTest " << (_bResult ? "passed" : "failed") << "\n";

    return _bResult;
}

// Function to perform Power test scenarios
void PerformPowerTestScenarios(int& _riTestsPerformed, int& _riTestsPassed)
{
    TSet _tSetA;
    unsigned long long _ullExpected;
    bool _bTestResult;

    // Scenario 1: Empty set
    _tSetA.SetClear();
    _ullExpected = 1; // The power set of an empty set has 1 subset (the empty set itself)
    _bTestResult = TestPower(_tSetA, _ullExpected);
    _riTestsPerformed++;
    _riTestsPassed += _bTestResult;

    // Scenario 2: Set with 3 elements
    _tSetA.SetClear();
    _tSetA.AddElement(1);
    _tSetA.AddElement(2);
    _tSetA.AddElement(3);
    _ullExpected = 8; // 2^3 subsets
    _bTestResult = TestPower(_tSetA, _ullExpected);
    _riTestsPerformed++;
    _riTestsPassed += _bTestResult;
}

// Test function for CartesianProduct
bool TestCartesianProduct(TSet& _rtSetA, TSet& _rtSetB, const unsigned long long _kullExpected)
{
    // Act: Call the CartesianProduct function with the test sets
    unsigned long long _ullResult = CartesianProduct(_rtSetA, _rtSetB);

    // Assert: Check if the result matches the expected value
    bool _bResult = (_ullResult == _kullExpected);

    // Output the expected and actual results
    std::cout << "\nExpected Cartesian Product Size == " << _kullExpected;
    std::cout << "\nResultant Cartesian Product Size == " << _ullResult;

    std::cout << "\nTest " << (_bResult ? "passed" : "failed") << "\n";

    return _bResult;
}

// Function to perform CartesianProduct test scenarios
void PerformCartesianProductTestScenarios(int& _riTestsPerformed, int& _riTestsPassed)
{
    TSet _tSetA, _tSetB;
    unsigned long long _ullExpected;
    bool _bTestResult;

    // Scenario 1: Both sets empty
    _tSetA.SetClear();
    _tSetB.SetClear();
    _ullExpected = 0; // No elements to pair
    _bTestResult = TestCartesianProduct(_tSetA, _tSetB, _ullExpected);
    _riTestsPerformed++;
    _riTestsPassed += _bTestResult;

    // Scenario 2: One set empty
    _tSetA.SetClear();
    _tSetA.AddElement(1);
    _tSetB.SetClear();
    _ullExpected = 0; // Cannot pair elements if one set is empty
    _bTestResult = TestCartesianProduct(_tSetA, _tSetB, _ullExpected);
    _riTestsPerformed++;
    _riTestsPassed += _bTestResult;

    // Scenario 3: Both sets have elements
    _tSetA.SetClear();
    _tSetB.SetClear();
    _tSetA.AddElement(1);
    _tSetA.AddElement(2);
    _tSetB.AddElement(3);
    _tSetB.AddElement(4);
    _ullExpected = 4; // 2 elements in A * 2 elements in B
    _bTestResult = TestCartesianProduct(_tSetA, _tSetB, _ullExpected);
    _riTestsPerformed++;
    _riTestsPassed += _bTestResult;
}

// Test function for Equals
bool TestEquals(TSet& _rtSetA, TSet& _rtSetB, const bool _kbExpected)
{
    // Act: Check if _rtSetA and _rtSetB are equal
    bool _bResultActual = Equals(_rtSetA, _rtSetB);

    // Assert: Check if the result matches the expected value
    bool _bResult = (_bResultActual == _kbExpected);

    // Output the expected and actual results
    std::cout << "\nExpected Equals == " << (_kbExpected ? "true" : "false");
    std::cout << "\nResultant Equals == " << (_bResultActual ? "true" : "false");

    std::cout << "\nTest " << (_bResult ? "passed" : "failed") << "\n";

    return _bResult;
}

// Function to perform Equals test scenarios
void PerformEqualsTestScenarios(int& _riTestsPerformed, int& _riTestsPassed)
{
    TSet _tSetA, _tSetB;
    bool _bExpected;
    bool _bTestResult;

    // Scenario 1: Both sets empty
    _tSetA.SetClear();
    _tSetB.SetClear();
    _bExpected = true;
    _bTestResult = TestEquals(_tSetA, _tSetB, _bExpected);
    _riTestsPerformed++;
    _riTestsPassed += _bTestResult;

    // Scenario 2: Sets with same elements
    _tSetA.SetClear();
    _tSetB.SetClear();
    _tSetA.AddElement(1);
    _tSetA.AddElement(2);
    _tSetB.AddElement(1);
    _tSetB.AddElement(2);
    _bExpected = true;
    _bTestResult = TestEquals(_tSetA, _tSetB, _bExpected);
    _riTestsPerformed++;
    _riTestsPassed += _bTestResult;

    // Scenario 3: Sets with different elements
    _tSetA.SetClear();
    _tSetB.SetClear();
    _tSetA.AddElement(1);
    _tSetA.AddElement(2);
    _tSetB.AddElement(2);
    _tSetB.AddElement(3);
    _bExpected = false;
    _bTestResult = TestEquals(_tSetA, _tSetB, _bExpected);
    _riTestsPerformed++;
    _riTestsPassed += _bTestResult;
}

// Test function for Subset
bool TestSubset(TSet& _rtSetA, TSet& _rtSetB, const bool _kbExpected)
{
    // Act: Check if _rtSetA is a subset of _rtSetB
    bool _bResultActual = Subset(_rtSetA, _rtSetB);

    // Assert: Check if the result matches the expected value
    bool _bResult = (_bResultActual == _kbExpected);

    // Output the expected and actual results
    std::cout << "\nExpected Subset == " << (_kbExpected ? "true" : "false");
    std::cout << "\nResultant Subset == " << (_bResultActual ? "true" : "false");

    std::cout << "\nTest " << (_bResult ? "passed" : "failed") << "\n";

    return _bResult;
}

// Function to perform Subset test scenarios
void PerformSubsetTestScenarios(int& _riTestsPerformed, int& _riTestsPassed)
{
    TSet _tSetA, _tSetB;
    bool _bExpected;
    bool _bTestResult;

    // Scenario 1: Empty set is subset of any set
    _tSetA.SetClear();
    _tSetB.SetUniversal();
    _bExpected = true;
    // Test with _tSetA empty and _tSetB universal
    _bTestResult = TestSubset(_tSetA, _tSetB, _bExpected);
    _riTestsPerformed++;
    _riTestsPassed += _bTestResult;

    // Scenario 2: A set is subset of itself
    _tSetA.SetClear();
    _tSetA.AddElement(1);
    _tSetA.AddElement(2);

    // Manually add same elements to _tSetB
    _tSetB.SetClear();
    _tSetB.AddElement(1);
    _tSetB.AddElement(2);

    _bExpected = true;
    // Test with _tSetA and _tSetB being the same
    _bTestResult = TestSubset(_tSetA, _tSetB, _bExpected);
    _riTestsPerformed++;
    _riTestsPassed += _bTestResult;

    // Scenario 3: Proper subset
    _tSetA.SetClear();
    _tSetB.SetClear();
    _tSetA.AddElement(1);
    _tSetA.AddElement(2);

    _tSetB.AddElement(1);
    _tSetB.AddElement(2);
    _tSetB.AddElement(3);

    _bExpected = true;
    // Test with _tSetA being a proper subset of _tSetB
    _bTestResult = TestSubset(_tSetA, _tSetB, _bExpected);
    _riTestsPerformed++;
    _riTestsPassed += _bTestResult;

    // Scenario 4: Not a subset
    _tSetA.SetClear();
    _tSetB.SetClear();
    _tSetA.AddElement(1);
    _tSetA.AddElement(4);
    _tSetB.AddElement(1);
    _tSetB.AddElement(2);

    _bExpected = false;
    // Test with _tSetA not being a subset of _tSetB
    _bTestResult = TestSubset(_tSetA, _tSetB, _bExpected);
    _riTestsPerformed++;
    _riTestsPassed += _bTestResult;
}

// Test function for Superset
bool TestSuperset(TSet& _rtSetA, TSet& _rtSetB, const bool _kbExpected)
{
    // Act: Check if _rtSetA is a superset of _rtSetB
    bool _bResultActual = Superset(_rtSetA, _rtSetB);

    // Assert: Check if the result matches the expected value
    bool _bResult = (_bResultActual == _kbExpected);

    // Output the expected and actual results
    std::cout << "\nExpected Superset == " << (_kbExpected ? "true" : "false");
    std::cout << "\nResultant Superset == " << (_bResultActual ? "true" : "false");

    std::cout << "\nTest " << (_bResult ? "passed" : "failed") << "\n";

    return _bResult;
}

// Function to perform Superset test scenarios
void PerformSupersetTestScenarios(int& _riTestsPerformed, int& _riTestsPassed)
{
    TSet _tSetA, _tSetB;
    bool _bExpected;
    bool _bTestResult;

    // Scenario 1: Universal set is a superset of any set
    _tSetA.SetUniversal();
    _tSetB.SetClear();
    _bExpected = true;
    _bTestResult = TestSuperset(_tSetA, _tSetB, _bExpected);
    _riTestsPerformed++;
    _riTestsPassed += _bTestResult;

    // Scenario 2: A set is a superset of itself
    _tSetA.SetClear();
    _tSetA.AddElement(1);
    _tSetA.AddElement(2);
    _tSetB.SetClear();
    _tSetB.AddElement(1);
    _tSetB.AddElement(2);
    _bExpected = true;
    _bTestResult = TestSuperset(_tSetA, _tSetB, _bExpected);
    _riTestsPerformed++;
    _riTestsPassed += _bTestResult;

    // Scenario 3: Proper superset
    _tSetA.SetClear();
    _tSetB.SetClear();
    _tSetA.AddElement(1);
    _tSetA.AddElement(2);
    _tSetA.AddElement(3);
    _tSetB.AddElement(1);
    _tSetB.AddElement(2);
    _bExpected = true;
    _bTestResult = TestSuperset(_tSetA, _tSetB, _bExpected);
    _riTestsPerformed++;
    _riTestsPassed += _bTestResult;

    // Scenario 4: Not a superset
    _tSetA.SetClear();
    _tSetB.SetClear();
    _tSetA.AddElement(1);
    _tSetA.AddElement(2);
    _tSetB.AddElement(1);
    _tSetB.AddElement(4);
    _bExpected = false;
    _bTestResult = TestSuperset(_tSetA, _tSetB, _bExpected);
    _riTestsPerformed++;
    _riTestsPassed += _bTestResult;
}

// Test function for Disjoint
bool TestDisjoint(TSet& _rtSetA, TSet& _rtSetB, const bool _kbExpected)
{
    // Act: Check if _rtSetA and _rtSetB are disjoint
    bool _bResultActual = Disjoint(_rtSetA, _rtSetB);

    // Assert: Check if the result matches the expected value
    bool _bResult = (_bResultActual == _kbExpected);

    // Output the expected and actual results
    std::cout << "\nExpected Disjoint == " << (_kbExpected ? "true" : "false");
    std::cout << "\nResultant Disjoint == " << (_bResultActual ? "true" : "false");

    std::cout << "\nTest " << (_bResult ? "passed" : "failed") << "\n";

    return _bResult;
}

// Function to perform Disjoint test scenarios
void PerformDisjointTestScenarios(int& _riTestsPerformed, int& _riTestsPassed)
{
    TSet _tSetA, _tSetB;
    bool _bExpected;
    bool _bTestResult;

    // Scenario 1: Disjoint sets
    _tSetA.SetClear();
    _tSetB.SetClear();
    _tSetA.AddElement(1);
    _tSetA.AddElement(2);
    _tSetB.AddElement(3);
    _tSetB.AddElement(4);
    _bExpected = true;
    _bTestResult = TestDisjoint(_tSetA, _tSetB, _bExpected);
    _riTestsPerformed++;
    _riTestsPassed += _bTestResult;

    // Scenario 2: Non-disjoint sets
    _tSetA.SetClear();
    _tSetB.SetClear();
    _tSetA.AddElement(1);
    _tSetA.AddElement(2);
    _tSetB.AddElement(2);
    _tSetB.AddElement(3);
    _bExpected = false;
    _bTestResult = TestDisjoint(_tSetA, _tSetB, _bExpected);
    _riTestsPerformed++;
    _riTestsPassed += _bTestResult;

    // Scenario 3: One set empty
    _tSetA.SetClear();
    _tSetB.SetClear();
    _tSetA.AddElement(1);
    _tSetA.AddElement(2);
    _bExpected = true;
    _bTestResult = TestDisjoint(_tSetA, _tSetB, _bExpected);
    _riTestsPerformed++;
    _riTestsPassed += _bTestResult;
}

// Test function for Union
bool TestUnion(TSet& _rtSetA, TSet& _rtSetB, TSet& _rtSetExpected)
{
    TSet _tSetResult;
    // Act: Compute the union of _rtSetA and _rtSetB
    Union(_rtSetA, _rtSetB, _tSetResult);

    // Assert: Check if the result matches the expected set
    bool _bResult = Equals(_tSetResult, _rtSetExpected);

    // Output the expected and actual results
    std::cout << "\nExpected Union: ";
    _rtSetExpected.Print();
    std::cout << "\nResultant Union: ";
    _tSetResult.Print();

    std::cout << "\nTest " << (_bResult ? "passed" : "failed") << "\n";

    return _bResult;
}

// Function to perform Union test scenarios
void PerformUnionTestScenarios(int& _riTestsPerformed, int& _riTestsPassed)
{
    TSet _tSetA, _tSetB, _tSetExpected;
    bool _bTestResult;

    // Scenario 1: Union of two disjoint sets
    _tSetA.SetClear();
    _tSetB.SetClear();
    _tSetExpected.SetClear();

    _tSetA.AddElement(1);
    _tSetA.AddElement(2);
    _tSetA.AddElement(3);

    _tSetB.AddElement(4);
    _tSetB.AddElement(5);
    _tSetB.AddElement(6);

    _tSetExpected.AddElement(1);
    _tSetExpected.AddElement(2);
    _tSetExpected.AddElement(3);
    _tSetExpected.AddElement(4);
    _tSetExpected.AddElement(5);
    _tSetExpected.AddElement(6);

    // Test the union of _tSetA and _tSetB
    _bTestResult = TestUnion(_tSetA, _tSetB, _tSetExpected);
    _riTestsPerformed++;
    _riTestsPassed += _bTestResult;

    // Scenario 2: Union with overlapping sets
    _tSetA.SetClear();
    _tSetB.SetClear();
    _tSetExpected.SetClear();

    _tSetA.AddElement(1);
    _tSetA.AddElement(2);
    _tSetB.AddElement(2);
    _tSetB.AddElement(3);

    _tSetExpected.AddElement(1);
    _tSetExpected.AddElement(2);
    _tSetExpected.AddElement(3);

    // Test the union of _tSetA and _tSetB
    _bTestResult = TestUnion(_tSetA, _tSetB, _tSetExpected);
    _riTestsPerformed++;
    _riTestsPassed += _bTestResult;
}

// Test function for Intersection
bool TestIntersection(TSet& _rtSetA, TSet& _rtSetB, TSet& _rtSetExpected)
{
    TSet _tSetResult;
    // Act: Compute the intersection of _rtSetA and _rtSetB
    Intersection(_rtSetA, _rtSetB, _tSetResult);

    // Assert: Check if the result matches the expected set
    bool _bResult = Equals(_tSetResult, _rtSetExpected);

    // Output the expected and actual results
    std::cout << "\nExpected Intersection: ";
    _rtSetExpected.Print();
    std::cout << "\nResultant Intersection: ";
    _tSetResult.Print();

    std::cout << "\nTest " << (_bResult ? "passed" : "failed") << "\n";

    return _bResult;
}

// Function to perform Intersection test scenarios
void PerformIntersectionTestScenarios(int& _riTestsPerformed, int& _riTestsPassed)
{
    TSet _tSetA, _tSetB, _tSetExpected;
    bool _bTestResult;

    // Scenario 1: Intersection of overlapping sets
    _tSetA.SetClear();
    _tSetB.SetClear();
    _tSetExpected.SetClear();

    _tSetA.AddElement(1);
    _tSetA.AddElement(2);
    _tSetA.AddElement(3);

    _tSetB.AddElement(2);
    _tSetB.AddElement(3);
    _tSetB.AddElement(4);

    _tSetExpected.AddElement(2);
    _tSetExpected.AddElement(3);

    // Test the intersection of _tSetA and _tSetB
    _bTestResult = TestIntersection(_tSetA, _tSetB, _tSetExpected);
    _riTestsPerformed++;
    _riTestsPassed += _bTestResult;

    // Scenario 2: Intersection of disjoint sets
    _tSetA.SetClear();
    _tSetB.SetClear();
    _tSetExpected.SetClear();

    _tSetA.AddElement(1);
    _tSetA.AddElement(2);

    _tSetB.AddElement(3);
    _tSetB.AddElement(4);

    // Expected intersection is empty
    // Test the intersection of _tSetA and _tSetB
    _bTestResult = TestIntersection(_tSetA, _tSetB, _tSetExpected);
    _riTestsPerformed++;
    _riTestsPassed += _bTestResult;
}

// Test function for SetDifference
bool TestSetDifference(TSet& _rtSetA, TSet& _rtSetB, TSet& _rtSetExpected)
{
    TSet _tSetResult;
    // Act: Compute the set difference A \ B
    SetDifference(_rtSetA, _rtSetB, _tSetResult);

    // Assert: Check if the result matches the expected set
    bool _bResult = Equals(_tSetResult, _rtSetExpected);

    // Output the expected and actual results
    std::cout << "\nExpected Set Difference (A \\ B): ";
    _rtSetExpected.Print();
    std::cout << "\nResultant Set Difference: ";
    _tSetResult.Print();

    std::cout << "\nTest " << (_bResult ? "passed" : "failed") << "\n";

    return _bResult;
}

// Function to perform SetDifference test scenarios
void PerformSetDifferenceTestScenarios(int& _riTestsPerformed, int& _riTestsPassed)
{
    TSet _tSetA, _tSetB, _tSetExpected;
    bool _bTestResult;

    // Scenario 1: Set difference with overlapping sets
    _tSetA.SetClear();
    _tSetB.SetClear();
    _tSetExpected.SetClear();

    _tSetA.AddElement(1);
    _tSetA.AddElement(2);
    _tSetA.AddElement(3);

    _tSetB.AddElement(2);
    _tSetB.AddElement(4);

    _tSetExpected.AddElement(1);
    _tSetExpected.AddElement(3);

    // Test the set difference A \ B
    _bTestResult = TestSetDifference(_tSetA, _tSetB, _tSetExpected);
    _riTestsPerformed++;
    _riTestsPassed += _bTestResult;

    // Scenario 2: Set difference with disjoint sets
    _tSetA.SetClear();
    _tSetB.SetClear();
    _tSetExpected.SetClear();

    _tSetA.AddElement(1);
    _tSetA.AddElement(2);

    _tSetB.AddElement(3);
    _tSetB.AddElement(4);

    _tSetExpected.AddElement(1);
    _tSetExpected.AddElement(2);

    // Test the set difference A \ B (should be same as _tSetA)
    _bTestResult = TestSetDifference(_tSetA, _tSetB, _tSetExpected);
    _riTestsPerformed++;
    _riTestsPassed += _bTestResult;
}

// Test function for SymmetricDifference
bool TestSymmetricDifference(TSet& _rtSetA, TSet& _rtSetB, TSet& _rtSetExpected)
{
    TSet _tSetResult;
    // Act: Compute the symmetric difference of _rtSetA and _rtSetB
    SymmetricDifference(_rtSetA, _rtSetB, _tSetResult);

    // Assert: Check if the result matches the expected set
    bool _bResult = Equals(_tSetResult, _rtSetExpected);

    // Output the expected and actual results
    std::cout << "\nExpected Symmetric Difference: ";
    _rtSetExpected.Print();
    std::cout << "\nResultant Symmetric Difference: ";
    _tSetResult.Print();

    std::cout << "\nTest " << (_bResult ? "passed" : "failed") << "\n";

    return _bResult;
}

// Function to perform SymmetricDifference test scenarios
void PerformSymmetricDifferenceTestScenarios(int& _riTestsPerformed, int& _riTestsPassed)
{
    TSet _tSetA, _tSetB, _tSetExpected;
    bool _bTestResult;

    // Scenario 1: Symmetric difference with overlapping sets
    _tSetA.SetClear();
    _tSetB.SetClear();
    _tSetExpected.SetClear();

    _tSetA.AddElement(1);
    _tSetA.AddElement(2);
    _tSetB.AddElement(2);
    _tSetB.AddElement(3);

    _tSetExpected.AddElement(1);
    _tSetExpected.AddElement(3);

    // Test the symmetric difference of _tSetA and _tSetB
    _bTestResult = TestSymmetricDifference(_tSetA, _tSetB, _tSetExpected);
    _riTestsPerformed++;
    _riTestsPassed += _bTestResult;

    // Scenario 2: Symmetric difference of identical sets
    _tSetA.SetClear();
    _tSetB.SetClear();
    _tSetExpected.SetClear();

    _tSetA.AddElement(1);
    _tSetA.AddElement(2);
    _tSetB.AddElement(1);
    _tSetB.AddElement(2);

    // Expected symmetric difference is empty
    // Test the symmetric difference of _tSetA and _tSetB
    _bTestResult = TestSymmetricDifference(_tSetA, _tSetB, _tSetExpected);
    _riTestsPerformed++;
    _riTestsPassed += _bTestResult;
}

// Test function for Complement
bool TestComplement(TSet& _rtSetA, TSet& _rtSetExpected)
{
    TSet _tSetResult;
    // Act: Compute the complement of _rtSetA
    Compliment(_rtSetA, _tSetResult);

    // Assert: Check if the result matches the expected set
    bool _bResult = Equals(_tSetResult, _rtSetExpected);

    // Output the expected and actual results
    std::cout << "\nExpected Complement: ";
    _rtSetExpected.Print();
    std::cout << "\nResultant Complement: ";
    _tSetResult.Print();

    std::cout << "\nTest " << (_bResult ? "passed" : "failed") << "\n";

    return _bResult;
}

// Function to perform Complement test scenarios
void PerformComplementTestScenarios(int& _riTestsPerformed, int& _riTestsPassed)
{
    TSet _tSetA, _tSetExpected;
    bool _bTestResult;

    // Scenario 1: Complement of empty set (should be universal set)
    _tSetA.SetClear();
    _tSetExpected.SetUniversal();

    // Test the complement of _tSetA
    _bTestResult = TestComplement(_tSetA, _tSetExpected);
    _riTestsPerformed++;
    _riTestsPassed += _bTestResult;

    // Scenario 2: Complement of universal set (should be empty set)
    _tSetA.SetUniversal();
    _tSetExpected.SetClear();

    // Test the complement of _tSetA
    _bTestResult = TestComplement(_tSetA, _tSetExpected);
    _riTestsPerformed++;
    _riTestsPassed += _bTestResult;

    // Scenario 3: Complement of a set with some elements
    _tSetA.SetClear();
    _tSetExpected.SetClear();
    _tSetA.AddElement(1);
    _tSetA.AddElement(2);
    _tSetA.AddElement(3);

    // Add all elements except 1, 2, 3 to expected set
    for (int _i = 1; _i <= SET_SIZE_MAX; ++_i)
    {
        if (!_tSetA.ContainsElement(_i))
        {
            _tSetExpected.AddElement(_i);
        }
    }

    // Test the complement of _tSetA
    _bTestResult = TestComplement(_tSetA, _tSetExpected);
    _riTestsPerformed++;
    _riTestsPassed += _bTestResult;
}