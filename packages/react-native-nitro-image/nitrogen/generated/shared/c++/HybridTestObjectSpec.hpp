///
/// HybridTestObjectSpec.hpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#pragma once

#if __has_include(<NitroModules/HybridObject.hpp>)
#include <NitroModules/HybridObject.hpp>
#else
#error NitroModules cannot be found! Are you sure you installed NitroModules properly?
#endif

// Forward declaration of `HybridTestObjectSpec` to properly resolve imports.
namespace margelo::nitro::image { class HybridTestObjectSpec; }
// Forward declaration of `AnyMap` to properly resolve imports.
namespace NitroModules { class AnyMap; }
// Forward declaration of `OldEnum` to properly resolve imports.
namespace margelo::nitro::image { enum class OldEnum; }
// Forward declaration of `Person` to properly resolve imports.
namespace margelo::nitro::image { struct Person; }
// Forward declaration of `Car` to properly resolve imports.
namespace margelo::nitro::image { struct Car; }
// Forward declaration of `ArrayBuffer` to properly resolve imports.
namespace NitroModules { class ArrayBuffer; }

#include <string>
#include <optional>
#include <variant>
#include <tuple>
#include <memory>
#include "HybridTestObjectSpec.hpp"
#include <NitroModules/AnyMap.hpp>
#include <vector>
#include "OldEnum.hpp"
#include "Person.hpp"
#include "Car.hpp"
#include <future>
#include <functional>
#include <NitroModules/ArrayBuffer.hpp>

namespace margelo::nitro::image {

  using namespace margelo::nitro;

  /**
   * An abstract base class for `TestObject`
   * Inherit this class to create instances of `HybridTestObjectSpec` in C++.
   * @example
   * ```cpp
   * class HybridTestObject: public HybridTestObjectSpec {
   *   // ...
   * };
   * ```
   */
  class HybridTestObjectSpec: public virtual HybridObject {
    public:
      // Constructor
      explicit HybridTestObjectSpec(): HybridObject(TAG) { }

      // Destructor
      virtual ~HybridTestObjectSpec() { }

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
      virtual double getValueThatWillThrowOnAccess() = 0;
      virtual void setValueThatWillThrowOnAccess(double valueThatWillThrowOnAccess) = 0;
      virtual std::variant<std::string, double> getSomeVariant() = 0;
      virtual void setSomeVariant(const std::variant<std::string, double>& someVariant) = 0;
      virtual std::tuple<double, std::string> getSomeTuple() = 0;
      virtual void setSomeTuple(const std::tuple<double, std::string>& someTuple) = 0;
      virtual std::shared_ptr<margelo::nitro::image::HybridTestObjectSpec> getSelf() = 0;

    public:
      // Methods
      virtual void simpleFunc() = 0;
      virtual double addNumbers(double a, double b) = 0;
      virtual std::string addStrings(const std::string& a, const std::string& b) = 0;
      virtual void multipleArguments(double num, const std::string& str, bool boo) = 0;
      virtual std::shared_ptr<AnyMap> createMap() = 0;
      virtual std::shared_ptr<AnyMap> mapRoundtrip(const std::shared_ptr<AnyMap>& map) = 0;
      virtual double funcThatThrows() = 0;
      virtual std::string tryOptionalParams(double num, bool boo, const std::optional<std::string>& str) = 0;
      virtual std::string tryMiddleParam(double num, std::optional<bool> boo, const std::string& str) = 0;
      virtual std::variant<std::string, double> passVariant(const std::variant<std::string, double, bool, std::vector<double>, std::vector<std::string>>& either) = 0;
      virtual std::variant<bool, OldEnum> getVariantEnum(const std::variant<bool, OldEnum>& variant) = 0;
      virtual std::variant<Person, Car> getVariantObjects(const std::variant<Person, Car>& variant) = 0;
      virtual std::variant<std::shared_ptr<margelo::nitro::image::HybridTestObjectSpec>, Person> getVariantHybrid(const std::variant<std::shared_ptr<margelo::nitro::image::HybridTestObjectSpec>, Person>& variant) = 0;
      virtual std::variant<std::tuple<double, double>, std::tuple<double, double, double>> getVariantTuple(const std::variant<std::tuple<double, double>, std::tuple<double, double, double>>& variant) = 0;
      virtual std::tuple<double, double, double> flip(const std::tuple<double, double, double>& tuple) = 0;
      virtual std::tuple<double, std::string, bool> passTuple(const std::tuple<double, std::string, bool>& tuple) = 0;
      virtual int64_t calculateFibonacciSync(double value) = 0;
      virtual std::future<int64_t> calculateFibonacciAsync(double value) = 0;
      virtual std::future<void> wait(double seconds) = 0;
      virtual void callCallback(const std::function<void()>& callback) = 0;
      virtual void getValueFromJSCallback(const std::function<std::future<double>()>& getValue) = 0;
      virtual std::future<double> getValueFromJSCallbackAndWait(const std::function<std::future<double>()>& getValue) = 0;
      virtual void callAll(const std::function<void()>& first, const std::function<void()>& second, const std::function<void()>& third) = 0;
      virtual std::future<void> getValueFromJsCallback(const std::function<std::future<std::string>()>& callback, const std::function<void(const std::string& /* valueFromJs */)>& andThenCall) = 0;
      virtual Car getCar() = 0;
      virtual bool isCarElectric(const Car& car) = 0;
      virtual std::optional<Person> getDriver(const Car& car) = 0;
      virtual std::shared_ptr<ArrayBuffer> createArrayBuffer() = 0;
      virtual double getBufferLastItem(const std::shared_ptr<ArrayBuffer>& buffer) = 0;
      virtual void setAllValuesTo(const std::shared_ptr<ArrayBuffer>& buffer, double value) = 0;
      virtual std::shared_ptr<margelo::nitro::image::HybridTestObjectSpec> newTestObject() = 0;

    protected:
      // Hybrid Setup
      void loadHybridMethods() override;

    protected:
      // Tag for logging
      static constexpr auto TAG = "TestObject";
  };

} // namespace margelo::nitro::image
