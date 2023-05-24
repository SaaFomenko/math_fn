#ifndef MATH_FN_H
#define MATH_FN_H

#include <vector>


namespace math_fn
{
	template<class T>
	T sqrt(T obj)
	{
		return obj * obj;
	}

	template<>
	std::vector<int> sqrt(std::vector<int> obj)
	{
		std::vector<int> result{};
		int x = 0;
		
		for (int value : obj)
		{
			x = value * value;
			result.push_back(x);
		}

		return result;
	}

	class SumCountD
	{
		private:
			int suma;
			int count;
			int devider;
			std::vector<int>& arr;

		public:
			SumCountD(std::vector<int>& arr_, int devider_=0);
			virtual ~SumCountD();

			int operator()();
	};
};

#endif
