#include <iostream>
#include "test.h"

int main()
{
    int iTestsPerformed = 0;
    int iTestsPassed = 0;

    // Perform mathematical function tests
    std::cout << "Testing Magnitude function:\n";
    PerformMagnitudeTestScenarios(iTestsPerformed, iTestsPassed);

    std::cout << "\nTesting Signum function:\n";
    PerformSignumTestScenarios(iTestsPerformed, iTestsPassed);

    std::cout << "\nTesting Floor function:\n";
    PerformFloorTestScenarios(iTestsPerformed, iTestsPassed);

    std::cout << "\nTesting Ceiling function:\n";
    PerformCeilingTestScenarios(iTestsPerformed, iTestsPassed);

    std::cout << "\nTesting Factorial function:\n";
    PerformFactorialTestScenarios(iTestsPerformed, iTestsPassed);

    std::cout << "\nTesting Combination function:\n";
    PerformCombinationTestScenarios(iTestsPerformed, iTestsPassed);

    std::cout << "\nTesting Permutation function:\n";
    PerformPermutationTestScenarios(iTestsPerformed, iTestsPassed);

    // Perform set function tests
    std::cout << "\nTesting Cardinality function:\n";
    PerformCardinalityTestScenarios(iTestsPerformed, iTestsPassed);

    std::cout << "\nTesting Power function:\n";
    PerformPowerTestScenarios(iTestsPerformed, iTestsPassed);

    std::cout << "\nTesting CartesianProduct function:\n";
    PerformCartesianProductTestScenarios(iTestsPerformed, iTestsPassed);

    std::cout << "\nTesting Equals function:\n";
    PerformEqualsTestScenarios(iTestsPerformed, iTestsPassed);

    std::cout << "\nTesting Subset function:\n";
    PerformSubsetTestScenarios(iTestsPerformed, iTestsPassed);

    std::cout << "\nTesting Superset function:\n";
    PerformSupersetTestScenarios(iTestsPerformed, iTestsPassed);

    std::cout << "\nTesting Disjoint function:\n";
    PerformDisjointTestScenarios(iTestsPerformed, iTestsPassed);

    std::cout << "\nTesting Union function:\n";
    PerformUnionTestScenarios(iTestsPerformed, iTestsPassed);

    std::cout << "\nTesting Intersection function:\n";
    PerformIntersectionTestScenarios(iTestsPerformed, iTestsPassed);

    std::cout << "\nTesting SetDifference function:\n";
    PerformSetDifferenceTestScenarios(iTestsPerformed, iTestsPassed);

    std::cout << "\nTesting SymmetricDifference function:\n";
    PerformSymmetricDifferenceTestScenarios(iTestsPerformed, iTestsPassed);

    std::cout << "\nTesting Compliment function:\n";
    PerformComplementTestScenarios(iTestsPerformed, iTestsPassed);

    // Output test summary
    std::cout << "\nTests Performed: " << iTestsPerformed;
    std::cout << "\nTests Passed: " << iTestsPassed;

    float fPercentagePassed = (iTestsPerformed > 0) ? (static_cast<float>(iTestsPassed) / iTestsPerformed) * 100.0f : 0.0f;
    std::cout << "\nPercentage Passed: " << fPercentagePassed << "%\n";

    // Wait for any key to terminate
    std::cout << "\nPress Enter to terminate the application.";
    std::cin.get();

    return 0;
}