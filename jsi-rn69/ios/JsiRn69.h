
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNJsiRn69Spec.h"

@interface JsiRn69 : NSObject <NativeJsiRn69Spec>
#else
#import <React/RCTBridgeModule.h>

@interface JsiRn69 : NSObject <RCTBridgeModule>
#endif

@end
