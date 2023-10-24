#ifdef __cplusplus
#import "react-native-cpp-simple.h"
#endif

#ifdef RCT_NEW_ARCH_ENABLED
#import "RNCppSimpleSpec.h"

@interface CppSimple : NSObject <NativeCppSimpleSpec>
#else
#import <React/RCTBridgeModule.h>

@interface CppSimple : NSObject <RCTBridgeModule>
#endif

@end
