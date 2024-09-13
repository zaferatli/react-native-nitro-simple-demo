///
/// NitroImageAutolinking.swift
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

public final class NitroImageAutolinking {
  /**
   * Creates an instance of a Swift class that implements `HybridImageFactorySpec`,
   * and wraps it in a Swift class that can directly interop with C++ (`HybridImageFactorySpecCxx`)
   *
   * This is generated by Nitrogen and will initialize the class specified
   * in the `"autolinking"` property of `nitro.json` (in this case, `HybridImageFactory`).
   */
  public static func createImageFactory() -> HybridImageFactorySpecCxx {
    let hybridObject = HybridImageFactory()
    return hybridObject.createCxxBridge()
  }
  
  /**
   * Creates an instance of a Swift class that implements `HybridSwiftKotlinTestObjectSpec`,
   * and wraps it in a Swift class that can directly interop with C++ (`HybridSwiftKotlinTestObjectSpecCxx`)
   *
   * This is generated by Nitrogen and will initialize the class specified
   * in the `"autolinking"` property of `nitro.json` (in this case, `HybridSwiftKotlinTestObject`).
   */
  public static func createSwiftKotlinTestObject() -> HybridSwiftKotlinTestObjectSpecCxx {
    let hybridObject = HybridSwiftKotlinTestObject()
    return hybridObject.createCxxBridge()
  }
}
