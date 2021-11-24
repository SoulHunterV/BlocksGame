#pragma once

#include "chunk_part.hpp"


struct Chunk
{
  const static size_t PartsNumber = 16;
  const static size_t Length = ChunkPart::Length;
  const static size_t Width = ChunkPart::Width;
  const static size_t Height = ChunkPart::Height * PartsNumber;
  const static size_t BlocksNumber = PartsNumber * ChunkPart::BlocksNumber;

  ChunkPart parts[PartsNumber];

  bool operator==(const Chunk& other) const
  {
    return std::memcmp(&parts, &other.parts, PartsNumber * sizeof(ChunkPart));
  }
};
