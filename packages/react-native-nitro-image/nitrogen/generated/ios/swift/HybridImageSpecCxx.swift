///
/// HybridImageSpecCxx.swift
/// Mon Aug 12 2024
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/react-native-nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

import Foundation
import NitroModules

/**
 * A class implementation that bridges HybridImageSpec over to C++.
 * In C++, we cannot use Swift protocols - so we need to wrap it in a class to make it strongly defined.
 *
 * Also, some Swift types need to be bridged with special handling:
 * - Enums need to be wrapped in Structs, otherwise they cannot be accessed bi-directionally (Swift bug: https://github.com/swiftlang/swift/issues/75330)
 * - Other HybridObjects need to be wrapped/unwrapped from the Swift TCxx wrapper
 * - Throwing methods need to be wrapped with a Result<T, Error> type, as exceptions cannot be propagated to C++
 */
public final class HybridImageSpecCxx {
  private(set) var implementation: HybridImageSpec

  public init(_ implementation: HybridImageSpec) {
    self.implementation = implementation
  }

  // HybridObject C++ part
  public var hybridContext: margelo.nitro.HybridContext {
    get {
      return self.implementation.hybridContext
    }
    set {
      self.implementation.hybridContext = newValue
    }
  }

  // Memory size of the Swift class (plus size of any other allocations)
  public var memorySize: Int {
    return self.implementation.memorySize
  }

  // Properties
  public var size: margelo.nitro.image.ImageSize {
    @inline(__always)
    get {
      return self.implementation.size
    }
  }
  
  public var pixelFormat: Int32 {
    @inline(__always)
    get {
      return self.implementation.pixelFormat.rawValue
    }
  }
  
  public var someSettableProp: Double {
    @inline(__always)
    get {
      return self.implementation.someSettableProp
    }
    @inline(__always)
    set {
      self.implementation.someSettableProp = newValue
    }
  }

  // Methods
  @inline(__always)
  public func toArrayBuffer(format: Int32) -> HybridImageSpecCxx_toArrayBuffer_Result {
    do {
      let result = try self.implementation.toArrayBuffer(format: margelo.nitro.image.ImageFormat(rawValue: format)!)
      return .value(result)
    } catch RuntimeError.error(withMessage: let message) {
      // A  `RuntimeError` was thrown.
      return .error(message: message)
    } catch {
      // Any other kind of error was thrown.
      // Due to a Swift bug, we have to copy the string here.
      let message = "\(error.localizedDescription)"
      return .error(message: message)
    }
  }
  
  @inline(__always)
  public func saveToFile(path: String, onFinished: margelo.nitro.image.Func_void_std__string) -> HybridImageSpecCxx_saveToFile_Result {
    do {
      try self.implementation.saveToFile(path: path, onFinished: onFinished)
      return .value
    } catch RuntimeError.error(withMessage: let message) {
      // A  `RuntimeError` was thrown.
      return .error(message: message)
    } catch {
      // Any other kind of error was thrown.
      // Due to a Swift bug, we have to copy the string here.
      let message = "\(error.localizedDescription)"
      return .error(message: message)
    }
  }
}
