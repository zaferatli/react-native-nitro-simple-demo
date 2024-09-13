///
/// HybridImageSpec.cpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#include "HybridImageSpec.hpp"

namespace margelo::nitro::image {

  void HybridImageSpec::loadHybridMethods() {
    // load base methods/properties
    HybridObject::loadHybridMethods();
    // load custom methods/properties
    registerHybrids(this, [](Prototype& prototype) {
      prototype.registerHybridGetter("size", &HybridImageSpec::getSize);
      prototype.registerHybridGetter("pixelFormat", &HybridImageSpec::getPixelFormat);
      prototype.registerHybridGetter("someSettableProp", &HybridImageSpec::getSomeSettableProp);
      prototype.registerHybridSetter("someSettableProp", &HybridImageSpec::setSomeSettableProp);
      prototype.registerHybridMethod("toArrayBuffer", &HybridImageSpec::toArrayBuffer);
      prototype.registerHybridMethod("saveToFile", &HybridImageSpec::saveToFile);
    });
  }

} // namespace margelo::nitro::image
