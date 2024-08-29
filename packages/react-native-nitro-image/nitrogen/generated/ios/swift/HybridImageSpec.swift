///
/// HybridImageSpec.swift
/// Thu Aug 29 2024
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

import Foundation
import NitroModules

/**
 * A Swift protocol representing the Image HybridObject.
 * Implement this protocol to create Swift-based instances of Image.
 *
 * When implementing this protocol, make sure to initialize `hybridContext` - example:
 * ```
 * public class HybridImage : HybridImageSpec {
 *   // Initialize HybridContext
 *   var hybridContext = margelo.nitro.HybridContext()
 *
 *   // Return size of the instance to inform JS GC about memory pressure
 *   var memorySize: Int {
 *     return getSizeOf(self)
 *   }
 *
 *   // ...
 * }
 * ```
 */
public protocol HybridImageSpec: HybridObjectSpec {
  // Properties
  var size: ImageSize { get }
  var pixelFormat: PixelFormat { get }
  var someSettableProp: Double { get set }

  // Methods
  func toArrayBuffer(format: ImageFormat) throws -> Double
  func saveToFile(path: String, onFinished: @escaping ((_ path: String) -> Void)) throws -> Void
}

public extension HybridImageSpec {
  /**
   * Create a new instance of HybridImageSpecCxx for the given HybridImageSpec.
   *
   * Instances of HybridImageSpecCxx can be accessed from C++, and contain
   * additional required bridging code for C++ <> Swift interop.
   */
  func createCxxBridge() -> HybridImageSpecCxx {
    return HybridImageSpecCxx(self)
  }
}
