///
/// NitroExampleOnLoad.cpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#include "NitroExampleOnLoad.hpp"

#include <jni.h>
#include <fbjni/fbjni.h>
#include <NitroModules/HybridObjectRegistry.hpp>



namespace margelo::nitro::example {

int initialize(JavaVM* vm) {
  using namespace margelo::nitro;
  using namespace margelo::nitro::example;
  using namespace facebook;

  return facebook::jni::initialize(vm, [] {
    // Register native JNI methods
    

    // Register Nitro Hybrid Objects
    
  });
}

} // namespace margelo::nitro::example