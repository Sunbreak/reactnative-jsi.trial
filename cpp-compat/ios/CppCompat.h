#ifdef __cplusplus
#import "react-native-cpp-compat.h"
#endif

#ifdef RCT_NEW_ARCH_ENABLED
#import "RNCppCompatSpec.h"

@interface CppCompat : NSObject <NativeCppCompatSpec>
#else
#import <React/RCTBridgeModule.h>

@interface CppCompat : NSObject <RCTBridgeModule>
#endif

@end
