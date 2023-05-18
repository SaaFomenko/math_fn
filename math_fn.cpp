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
	std::vector& sqrt(std::vector& obj)
	{
		int i = 0;
		for (int value : obj)
		{
			obj[i] = value * value;
			++i;
		}

		return obj;
	}
};

#endif
