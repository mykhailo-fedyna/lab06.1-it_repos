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

			Assert::AreEqual(expected_sum, actual_sum);

			Assert::AreEqual(5, count_element);

			int expected_result[n] = { 0, 0, 0, 5, 0 };
			for (int i = 0; i < n; i++) {
				Assert::AreEqual(0, r[i]);
			}
		}

		TEST_METHOD(TestCountElements)
		{
			const int n = 5;
			int r[n] = { 6, 10, 18, 5, 30 };

			int expected_count = 5;

			int actual_count = CountElements(r, n);

			Assert::AreEqual(expected_count, actual_count);
		}

		TEST_METHOD(TestReplaceElements)
		{
			const int n = 5;
			int r[n] = { 6, 10, 18, 5, 30 };
			int expected_result[n] = { 0, 0, 0, 5, 0 };

			ReplaceElements(r, n);

			for (int i = 0; i < n; i++) {
				Assert::AreEqual(0, r[i]);
			}
		}
	};
}
