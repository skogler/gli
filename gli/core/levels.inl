#include <glm/gtc/integer.hpp>
#include <glm/gtx/component_wise.hpp>

namespace gli
{
	template <typename T, precision P, template <typename, precision> class vecType>
	inline T levels(vecType<T, P> const& Extent)
	{
		return glm::log2(compMax(Extent)) + static_cast<T>(1);
	}

	inline size_t levels(size_t Extent)
	{
		return glm::log2(Extent) + static_cast<size_t>(1);
	}

	inline int levels(int Extent)
	{
		return glm::log2(Extent) + static_cast<int>(1);
	}
}//namespace gli
