#include "math_fn.h"


namespace math_fn
{
	SumCountD::SumCountD(std::vector<int>& arr_, int devider_) : 
		arr(arr_),
		suma(0),
		count(0),
		devider(devider_)
	{
		for (int value : arr)
		{
			suma += value;
			if ((value % devider) == 0) ++count;
		}
	}

	SumCountD::~SumCountD()
	{}

	int SumCountD::operator()(bool isCount)
	{
		if (isCount)
		{
			return count;
		}
		else
		{
			return suma;
		}
	}
}
