#pragma once

#include <string>
#include <vector>

#include "abstract_system.hpp"
#include "types.hpp"


/// <summary>
/// Represents api for working with OS's file system.
/// </summary>
class AbstractFileSystem : public AbstractSystem
{
public:
  AbstractFileSystem() = default;
  virtual ~AbstractFileSystem() override = default;

  virtual OpResult ReadString(const char* path, std::string& str) = 0;
  virtual OpResult ReadBinary(const char* path, std::vector<Byte>& buffer) = 0;
};
