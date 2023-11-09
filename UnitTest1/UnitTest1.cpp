#include "pch.h"
#include "CppUnitTest.h"
#include "../laba 6.3(2)/laba 6.3(2).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1LAB63rec
{
	TEST_CLASS(UnitTest1LAB63rec)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int f[] = { 1, 2, 3, 4, 5 };
			int result = Sum(f, 5, 0, 0);
			Assert::AreEqual(9, result);
		}
	};
}


