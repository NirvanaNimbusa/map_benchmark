#pragma once

#include "hashes.h"
#include "robin_hood/robin_hood.h"

static const char* MapName = "robin_hood::unordered_flat_map CityHash";

template <class Key, class Val>
using Map = robin_hood::unordered_flat_map<Key, Val, hash::CityHash<Key>>;