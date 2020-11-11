#pragma once

#include "Resource.hpp"

class ResourceManager:Resource
{
public:
	ResourceManager(){}
	ResourceManager(const ResourceManager& RM){}
	ResourceManager(ResourceManager&& RM) noexcept {}
	ResourceManager operator=(const ResourceManager& RM) {}
	ResourceManager operator=(ResourceManager&& RM) noexcept {}
	~ResourceManager(){}
};
