#include "pch.h"
#include "CppUnitTest.h"
#include "../6.1i/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1iter
{
	TEST_CLASS(UnitTest1iter)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int a[10] = { 7, 3, -2, 1, 4, 0, 8, -4, 5, 6 };
			int c = Sum(a, 10);
			int d = Count(a, 10);

			Assert::AreEqual(c, 18);

			Assert::AreEqual(d, 4);
		}
	};
}