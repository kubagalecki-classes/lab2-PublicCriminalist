#pragma once

#include "Resource.hpp"

class ResourceManager
{
public:
  Resource *res;
	ResourceManager(){res=new Resource;}
	ResourceManager(const ResourceManager& RM){res=new Resource(*RM.res);}
	ResourceManager(ResourceManager&& RM) noexcept {
    res=RM.res;
    RM.res=nullptr;
    }
	ResourceManager& operator=(const ResourceManager& RM);
	ResourceManager& operator=(ResourceManager&& RM) noexcept;
	~ResourceManager(){delete res;}
  double get(){return res->get();}
};

ResourceManager & ResourceManager::operator=(const ResourceManager& RM)
{
    if(this!=&RM) *res=*RM.res;
    return *this;
}

ResourceManager & ResourceManager::operator=(ResourceManager&& RM) noexcept
{
    if(this!=&RM){
      delete res;
      res=RM.res;
      RM.res=nullptr;
    }
    return *this;
  }