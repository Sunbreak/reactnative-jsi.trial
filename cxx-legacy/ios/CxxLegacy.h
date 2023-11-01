#ifdef __cplusplus
#import "react-native-cxx-legacy.h"
#endif

#ifdef RCT_NEW_ARCH_ENABLED
#import "RNCxxLegacySpec.h"

@interface CxxLegacy : NSObject <NativeCxxLegacySpec>
#else
#import <React/RCTBridgeModule.h>

@interface CxxLegacy : NSObject <RCTBridgeModule>
#endif

@end
