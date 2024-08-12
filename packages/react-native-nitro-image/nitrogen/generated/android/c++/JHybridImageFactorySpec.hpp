///
/// HybridImageFactorySpec.hpp
/// Mon Aug 12 2024
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/react-native-nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#include "HybridImageFactorySpec.hpp"
#include <fbjni/fbjni.h>

namespace margelo::nitro::image {

  using namespace facebook;

  class JHybridImageFactorySpec: public jni::HybridClass<JHybridImageFactorySpec>, public HybridImageFactorySpec {
  public:
    static auto constexpr kJavaDescriptor = "Lcom/margelo/nitro/image/HybridImageFactorySpec;";
    static jni::local_ref<jhybriddata> initHybrid(jni::alias_ref<jhybridobject> jThis);
    static void registerNatives();

  private:
    // C++ constructor (called from Java via `initHybrid()`)
    explicit JHybridImageFactorySpec(jni::alias_ref<jhybridobject> jThis) : _javaPart(jni::make_global(jThis)) {}

  public:
    size_t getExternalMemorySize() noexcept override;

  public:
    inline jni::global_ref<JHybridImageFactorySpec::javaobject>& getJavaPart() noexcept { return _javaPart; }

  public:
    // Properties
    

  public:
    // Methods
    std::shared_ptr<margelo::nitro::image::HybridImageSpec> loadImageFromFile(const std::string& path) override;
    std::shared_ptr<margelo::nitro::image::HybridImageSpec> loadImageFromURL(const std::string& path) override;
    std::shared_ptr<margelo::nitro::image::HybridImageSpec> loadImageFromSystemName(const std::string& path) override;
    std::shared_ptr<margelo::nitro::image::HybridImageSpec> bounceBack(const std::shared_ptr<margelo::nitro::image::HybridImageSpec>& image) override;

  private:
    friend HybridBase;
    jni::global_ref<JHybridImageFactorySpec::javaobject> _javaPart;
  };

} // namespace margelo::nitro::image
