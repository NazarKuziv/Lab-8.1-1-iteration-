#include "pch.h"
#include "CppUnitTest.h"
#include "../Project 8.1-1(ітерація).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest8111
{
	TEST_CLASS(UnitTest8111)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char s[10] = "JKNGSQHJN";
			
			bool t = Include(s);

			Assert::AreEqual(t,true);

		}
	};
}
