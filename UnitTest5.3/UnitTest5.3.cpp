#include "pch.h"
#include "CppUnitTest.h"
#include "../ChyrunSofialab5.3/ChyrunSofialab5.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest53
{
	TEST_CLASS(UnitTest53)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			t = f(0);
			Assert::AreEqual(t, 0);
		}
	};
}
