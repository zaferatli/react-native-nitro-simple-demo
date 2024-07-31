///
/// PixelFormat.hpp
/// Thu Aug 01 2024
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/react-native-nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#pragma once

#if __has_include(<NitroModules/NitroHash.hpp>)
#include <NitroModules/NitroHash.hpp>
#else
#error NitroModules cannot be found! Are you sure you installed NitroModules properly?
#endif
#if __has_include(<NitroModules/JSIConverter.hpp>)
#include <NitroModules/JSIConverter.hpp>
#else
#error NitroModules cannot be found! Are you sure you installed NitroModules properly?
#endif
#if __has_include(<NitroModules/NitroDefines.hpp>)
#include <NitroModules/NitroDefines.hpp>
#else
#error NitroModules cannot be found! Are you sure you installed NitroModules properly?
#endif

namespace margelo::nitro::image {

  /**
   * An enum which can be represented as a JavaScript union (PixelFormat).
   */
  enum class PixelFormat {
    RGB SWIFT_NAME(rgb) = 0,
    YUV_8BIT SWIFT_NAME(yuv_8bit) = 1,
    YUV_10BIT SWIFT_NAME(yuv_10bit) = 2,
  } CLOSED_ENUM;

} // namespace margelo::nitro::image

namespace margelo::nitro {

  using namespace margelo::nitro::image;

  // C++ PixelFormat <> JS PixelFormat (union)
  template <>
  struct JSIConverter<PixelFormat> {
    static inline PixelFormat fromJSI(jsi::Runtime& runtime, const jsi::Value& arg) {
      std::string unionValue = JSIConverter<std::string>::fromJSI(runtime, arg);
      switch (hashString(unionValue.c_str(), unionValue.size())) {
        case hashString("rgb"): return PixelFormat::RGB;
        case hashString("yuv-8bit"): return PixelFormat::YUV_8BIT;
        case hashString("yuv-10bit"): return PixelFormat::YUV_10BIT;
        default: [[unlikely]]
          throw std::runtime_error("Cannot convert " + unionValue + " to PixelFormat - invalid value!");
      }
    }
    static inline jsi::Value toJSI(jsi::Runtime& runtime, PixelFormat arg) {
      switch (arg) {
        case PixelFormat::RGB: return JSIConverter<std::string>::toJSI(runtime, "rgb");
        case PixelFormat::YUV_8BIT: return JSIConverter<std::string>::toJSI(runtime, "yuv-8bit");
        case PixelFormat::YUV_10BIT: return JSIConverter<std::string>::toJSI(runtime, "yuv-10bit");
        default: [[unlikely]]
          throw std::runtime_error("Cannot convert PixelFormat to JS - invalid value: "
                                    + std::to_string(static_cast<int>(arg)) + "!");
      }
    }
  };

} // namespace margelo::nitro