///
/// HybridImageFactorySwift.hpp
/// Fri Jul 26 2024
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/react-native-nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#pragma once

#include "HybridImageFactory.hpp"

// Forward declaration of `ImageFactorySpecCxx` to properly resolve imports.
namespace NitroImage { class ImageFactorySpecCxx; }

// Forward declaration of `HybridImage` to properly resolve imports.
class HybridImage;
// Forward declaration of `HybridImageSwift` to properly resolve imports.
class HybridImageSwift;

#include "HybridImage.hpp"
#include "HybridImageSwift.hpp"

#include "NitroImage-Swift.h"

/**
 * The C++ part of ImageFactorySpecCxx.swift.
 */
class HybridImageFactorySwift final: public HybridImageFactory {
public:
  // Constructor from a Swift instance
  explicit HybridImageFactorySwift(const NitroImage::ImageFactorySpecCxx& swiftPart): HybridImageFactory(), _swiftPart(swiftPart) { }

public:
  // Get the Swift part
  inline NitroImage::ImageFactorySpecCxx getSwiftPart() noexcept { return _swiftPart; }

public:
  // Get memory pressure
  virtual inline size_t getExternalMemorySize() noexcept override {
    return _swiftPart.getMemorySize();
  }

public:
  // Properties
  

public:
  // Methods
  inline std::shared_ptr<HybridImage> loadImageFromFile(const std::string& path) override {
    auto valueOrError = _swiftPart.loadImageFromFile(std::forward<decltype(path)>(path));
    if (valueOrError.isError()) [[unlikely]] {
      throw std::runtime_error(valueOrError.getError());
    }
    auto value = valueOrError.getValue();
    return HybridContext::getOrCreate<HybridImageSwift>(value);
  }
  inline std::shared_ptr<HybridImage> loadImageFromURL(const std::string& path) override {
    auto valueOrError = _swiftPart.loadImageFromURL(std::forward<decltype(path)>(path));
    if (valueOrError.isError()) [[unlikely]] {
      throw std::runtime_error(valueOrError.getError());
    }
    auto value = valueOrError.getValue();
    return HybridContext::getOrCreate<HybridImageSwift>(value);
  }
  inline std::shared_ptr<HybridImage> loadImageFromSystemName(const std::string& path) override {
    auto valueOrError = _swiftPart.loadImageFromSystemName(std::forward<decltype(path)>(path));
    if (valueOrError.isError()) [[unlikely]] {
      throw std::runtime_error(valueOrError.getError());
    }
    auto value = valueOrError.getValue();
    return HybridContext::getOrCreate<HybridImageSwift>(value);
  }
  inline std::shared_ptr<HybridImage> bounceBack(std::shared_ptr<HybridImage> image) override {
    auto valueOrError = _swiftPart.bounceBack(std::static_pointer_cast<HybridImageSwift>(image)->getSwiftPart());
    if (valueOrError.isError()) [[unlikely]] {
      throw std::runtime_error(valueOrError.getError());
    }
    auto value = valueOrError.getValue();
    return HybridContext::getOrCreate<HybridImageSwift>(value);
  }

private:
  NitroImage::ImageFactorySpecCxx _swiftPart;
};