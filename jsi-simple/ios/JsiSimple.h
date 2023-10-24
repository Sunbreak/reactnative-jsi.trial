#ifdef __cplusplus
#import "react-native-jsi-simple.h"
#endif

#ifdef RCT_NEW_ARCH_ENABLED
#import "RNJsiSimpleSpec.h"

@interface JsiSimple : NSObject <NativeJsiSimpleSpec>
#else
#import <React/RCTBridgeModule.h>

@interface JsiSimple : NSObject <RCTBridgeModule>
#endif

@end
