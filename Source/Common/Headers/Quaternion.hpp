#ifndef __DAWN_QUATERNION_HPP__
#define __DAWN_QUATERNION_HPP__

#include <DataTypes.hpp>

namespace Dawn
{
	class Quaternion
	{
	public:
		~Quaternion( ){ }

	private:
		// 0 = W
		// 1 = v0
		// 2 = v1
		// 3 = v2
		D_FLOAT32 m_Q[ 4 ];
	};
}

#endif

