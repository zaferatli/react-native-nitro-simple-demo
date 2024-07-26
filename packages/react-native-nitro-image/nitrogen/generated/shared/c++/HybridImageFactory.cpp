///
/// HybridImageFactory.cpp
/// Fri Jul 26 2024
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/react-native-nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#include "HybridImageFactory.hpp"

void HybridImageFactory::loadHybridMethods() {
  // load base methods/properties
  HybridObject::loadHybridMethods();
  // load custom methods/properties
  registerHybridMethod("loadImageFromFile", &HybridImageFactory::loadImageFromFile, this);
  registerHybridMethod("loadImageFromURL", &HybridImageFactory::loadImageFromURL, this);
  registerHybridMethod("loadImageFromSystemName", &HybridImageFactory::loadImageFromSystemName, this);
  registerHybridMethod("bounceBack", &HybridImageFactory::bounceBack, this);
}