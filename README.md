<h1>
<img src="docs/img/blue-flame.png" height="40px" align="center" />
react-native-nitro
</h1>

Nitro Modules are highly efficient native modules exposed with a statically compiled binding layer to JSI.

## Installation

1. Install [react-native-nitro-modules](npmjs.org/react-native-nitro-modules) from npm:
  ```sh
  yarn add react-native-nitro-modules
  cd ios && pod install
  ```
2. If you don't already have one, add an empty Swift file to your iOS project (including a generated bridging header).
  1. Open your `.xcworkspace` in Xcode
  2. Right-click on your app's project on the left
  3. **New File** > **Swift File** > Call it **DummyFile.swift** > **Create**
  4. When promted to create a Bridging Header, press **Create Bridging Header**

## Usage

🤔

## Platforms

### Cross-platform

Cross-platform native modules can be built with C++.
Any custom C++ types can be used and bridged to JS with minimal overhead.

JS <-> C++ type converters are statically generated ahead of time - no more dynamic lookups or runtime parser errors! 🥳

### iOS

iOS native modules and view components can be written either in pure C++, or pure Swift.
Thanks to Swift 5.9, Swift Nitro Modules [bridge directly to C++](https://www.swift.org/documentation/cxx-interop/) instead of going through Objective-C message sends. Woohoo, no more Objective-C! 🥳

### Android

Android native modules and view components can be written either in pure C++, or pure Kotlin/Java.
Thanks to fbjni, even complex types can be effortlessly bridged to Kotlin/Java with minimal overhead! 🔥

## Contributing

See the [contributing guide](CONTRIBUTING.md) to learn how to contribute to the repository and the development workflow.

## License

MIT
