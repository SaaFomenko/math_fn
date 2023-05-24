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
			if (devider)
			{
				if ((value % devider) == 0) ++count;
			}
			else
			{
				suma += value;
			}
		}
	}

	SumCountD::~SumCountD()
	{}

	int SumCountD::operator()()
	{
		if (devider)
		{
			return count;
		}
		else
		{
			return suma;
		}
	}
}

