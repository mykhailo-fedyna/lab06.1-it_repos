#include "pch.h"
#include "CppUnitTest.h"
#include "../lab6.1(it).cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;
namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		TEST_METHOD(TestSum)
		{
			const int n = 5;
			int r[n] = { 6, 10, 18, 5, 30 };
			int expected_sum = 69;
			int count_element = 0;

			int actual_sum = Sum(r, n, count_element);

			Assert::AreEqual(expected_sum, actual_sum, L"Sum calculation is incorrect.");
			Assert::AreEqual(5, count_element, L"Element count is incorrect.");

			int expected_result[n] = { 0, 0, 0, 5, 0 };
			for (int i = 0; i < n; i++) {
				Assert::AreEqual(expected_result[0], r[i], L"Array element is not set to zero correctly.");
			}
		}
	};
}
