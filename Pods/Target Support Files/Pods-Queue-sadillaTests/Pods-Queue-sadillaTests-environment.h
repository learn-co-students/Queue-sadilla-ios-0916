
// To check if a library is compiled with CocoaPods you
// can use the `COCOAPODS` macro definition which is
// defined in the xcconfigs so it is available in
// headers also when they are imported in the client
// project.


// Expecta
#define COCOAPODS_POD_AVAILABLE_Expecta
#define COCOAPODS_VERSION_MAJOR_Expecta 0
#define COCOAPODS_VERSION_MINOR_Expecta 2
#define COCOAPODS_VERSION_PATCH_Expecta 4

// KIF
#define COCOAPODS_POD_AVAILABLE_KIF
#define COCOAPODS_VERSION_MAJOR_KIF 3
#define COCOAPODS_VERSION_MINOR_KIF 1
#define COCOAPODS_VERSION_PATCH_KIF 2

// KIF/XCTest
#define COCOAPODS_POD_AVAILABLE_KIF_XCTest
#define COCOAPODS_VERSION_MAJOR_KIF_XCTest 3
#define COCOAPODS_VERSION_MINOR_KIF_XCTest 1
#define COCOAPODS_VERSION_PATCH_KIF_XCTest 2

// Specta
#define COCOAPODS_POD_AVAILABLE_Specta
// This library does not follow semantic-versioning,
// so we were not able to define version macros.
// Please contact the author.
// Version: 0.3.0.beta1.

// Swizzlean
#define COCOAPODS_POD_AVAILABLE_Swizzlean
#define COCOAPODS_VERSION_MAJOR_Swizzlean 0
#define COCOAPODS_VERSION_MINOR_Swizzlean 1
#define COCOAPODS_VERSION_PATCH_Swizzlean 2

