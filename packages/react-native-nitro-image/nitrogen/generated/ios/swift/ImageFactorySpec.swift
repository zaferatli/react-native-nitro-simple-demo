///
/// ImageFactorySpec.swift
/// Thu Aug 01 2024
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/react-native-nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

import Foundation
import NitroModules

/**
 * A Swift protocol representing the ImageFactory HybridObject.
 * Implement this protocol to create Swift-based instances of ImageFactory.
 *
 * When implementing this protocol, make sure to initialize `hybridContext` - example:
 * ```
 * public class ImageFactory : ImageFactorySpec {
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
public protocol ImageFactorySpec: HybridObjectSpec {
  // Properties
  

  // Methods
  func loadImageFromFile(path: String) throws -> ImageSpec
  func loadImageFromURL(path: String) throws -> ImageSpec
  func loadImageFromSystemName(path: String) throws -> ImageSpec
  func bounceBack(image: ImageSpec) throws -> ImageSpec
}

public extension ImageFactorySpec {
  /**
   * Create a new instance of ImageFactorySpecCxx for the given ImageFactorySpec.
   *
   * Instances of ImageFactorySpecCxx can be accessed from C++, and contain
   * additional required bridging code for C++ <> Swift interop.
   */
  func createCxxBridge() -> ImageFactorySpecCxx {
    return ImageFactorySpecCxx(self)
  }
}