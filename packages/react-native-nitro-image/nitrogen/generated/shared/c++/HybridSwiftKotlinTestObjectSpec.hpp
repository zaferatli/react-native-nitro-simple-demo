///
/// HybridSwiftKotlinTestObjectSpec.hpp
/// Mon Aug 12 2024
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/react-native-nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#pragma once

#if __has_include(<NitroModules/HybridObject.hpp>)
#include <NitroModules/HybridObject.hpp>
#else
#error NitroModules cannot be found! Are you sure you installed NitroModules properly?
#endif





namespace margelo::nitro::image {

  using namespace margelo::nitro;

  /**
   * An abstract base class for `SwiftKotlinTestObject`
   * Inherit this class to create instances of `HybridSwiftKotlinTestObjectSpec` in C++.
   * @example
   * ```cpp
   * class HybridSwiftKotlinTestObject: public HybridSwiftKotlinTestObjectSpec {
   *   // ...
   * };
   * ```
   */
  class HybridSwiftKotlinTestObjectSpec: public HybridObject {
    public:
      // Constructor
      explicit HybridSwiftKotlinTestObjectSpec(): HybridObject(TAG) { }

      // Destructor
      ~HybridSwiftKotlinTestObjectSpec() { }

    public:
      // Properties
      virtual double getNumberValue() = 0;
      virtual void setNumberValue(double numberValue) = 0;
      virtual bool getBoolValue() = 0;
      virtual void setBoolValue(bool boolValue) = 0;
      virtual std::string getStringValue() = 0;
      virtual void setStringValue(const std::string& stringValue) = 0;
      virtual int64_t getBigintValue() = 0;
      virtual void setBigintValue(int64_t bigintValue) = 0;
      virtual std::optional<std::string> getStringOrUndefined() = 0;
      virtual void setStringOrUndefined(const std::optional<std::string>& stringOrUndefined) = 0;
      virtual std::optional<std::string> getStringOrNull() = 0;
      virtual void setStringOrNull(const std::optional<std::string>& stringOrNull) = 0;
      virtual std::optional<std::string> getOptionalString() = 0;
      virtual void setOptionalString(const std::optional<std::string>& optionalString) = 0;

    public:
      // Methods
      virtual void simpleFunc() = 0;
      virtual double addNumbers(double a, double b) = 0;
      virtual std::string addStrings(const std::string& a, const std::string& b) = 0;
      virtual void multipleArguments(double num, const std::string& str, bool boo) = 0;

    protected:
      // Hybrid Setup
      void loadHybridMethods() override;

    protected:
      // Tag for logging
      static constexpr auto TAG = "SwiftKotlinTestObject";
  };

} // namespace margelo::nitro::image
