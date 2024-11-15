#ifndef TEST_H
#define TEST_H

#include "discretemaths.h"

// Function to perform state check with acceptable precision
bool PerformStateCheck(const float _kfA, const float _kfB, const float _kfPrecision);

// Mathematical Function Tests

bool TestMagnitude(const float _kfTestState, const float _kfExpectedState);
void PerformMagnitudeTestScenarios(int& _riTestsPerformed, int& _riTestsPassed);

bool TestSignum(const float _kfTestState, const float _kfExpectedState);
void PerformSignumTestScenarios(int& _riTestsPerformed, int& _riTestsPassed);

bool TestFloor(const float _kfTestState, const float _kfExpectedState);
void PerformFloorTestScenarios(int& _riTestsPerformed, int& _riTestsPassed);

bool TestCeiling(const float _kfTestState, const float _kfExpectedState);
void PerformCeilingTestScenarios(int& _riTestsPerformed, int& _riTestsPassed);

bool TestFactorial(const unsigned int _kuiN, const unsigned long long _kullExpected);
void PerformFactorialTestScenarios(int& _riTestsPerformed, int& _riTestsPassed);

bool TestCombination(const unsigned int _kuiN, const unsigned int _kuiR, const unsigned long long _kullExpected);
void PerformCombinationTestScenarios(int& _riTestsPerformed, int& _riTestsPassed);

bool TestPermutation(const unsigned int _kuiN, const unsigned int _kuiR, const unsigned long long _kullExpected);
void PerformPermutationTestScenarios(int& _riTestsPerformed, int& _riTestsPassed);

// Set Function Tests

bool TestCardinality(TSet& _rtSet, const int _kiExpected);
void PerformCardinalityTestScenarios(int& _riTestsPerformed, int& _riTestsPassed);

bool TestPower(TSet& _rtSet, const unsigned long long _kullExpected);
void PerformPowerTestScenarios(int& _riTestsPerformed, int& _riTestsPassed);

bool TestCartesianProduct(TSet& _rtSetA, TSet& _rtSetB, const unsigned long long _kullExpected);
void PerformCartesianProductTestScenarios(int& _riTestsPerformed, int& _riTestsPassed);

bool TestEquals(TSet& _rtSetA, TSet& _rtSetB, const bool _kbExpected);
void PerformEqualsTestScenarios(int& _riTestsPerformed, int& _riTestsPassed);

bool TestSubset(TSet& _rtSetA, TSet& _rtSetB, const bool _kbExpected);
void PerformSubsetTestScenarios(int& _riTestsPerformed, int& _riTestsPassed);

bool TestSuperset(TSet& _rtSetA, TSet& _rtSetB, const bool _kbExpected);
void PerformSupersetTestScenarios(int& _riTestsPerformed, int& _riTestsPassed);

bool TestDisjoint(TSet& _rtSetA, TSet& _rtSetB, const bool _kbExpected);
void PerformDisjointTestScenarios(int& _riTestsPerformed, int& _riTestsPassed);

bool TestUnion(TSet& _rtSetA, TSet& _rtSetB, TSet& _rtSetExpected);
void PerformUnionTestScenarios(int& _riTestsPerformed, int& _riTestsPassed);

bool TestIntersection(TSet& _rtSetA, TSet& _rtSetB, TSet& _rtSetExpected);
void PerformIntersectionTestScenarios(int& _riTestsPerformed, int& _riTestsPassed);

bool TestSetDifference(TSet& _rtSetA, TSet& _rtSetB, TSet& _rtSetExpected);
void PerformSetDifferenceTestScenarios(int& _riTestsPerformed, int& _riTestsPassed);

bool TestSymmetricDifference(TSet& _rtSetA, TSet& _rtSetB, TSet& _rtSetExpected);
void PerformSymmetricDifferenceTestScenarios(int& _riTestsPerformed, int& _riTestsPassed);

bool TestComplement(TSet& _rtSetA, TSet& _rtSetExpected);
void PerformComplementTestScenarios(int& _riTestsPerformed, int& _riTestsPassed);

#endif // TEST_H