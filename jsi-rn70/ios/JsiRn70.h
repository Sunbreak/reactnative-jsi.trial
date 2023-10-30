
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNJsiRn70Spec.h"

@interface JsiRn70 : NSObject <NativeJsiRn70Spec>
#else
#import <React/RCTBridgeModule.h>

@interface JsiRn70 : NSObject <RCTBridgeModule>
#endif

@end
