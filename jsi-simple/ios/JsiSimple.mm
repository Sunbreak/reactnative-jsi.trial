#import "JsiSimple.h"
#import "jsi/jsi.h"
#import <React/RCTBridge+Private.h>

using namespace facebook::jsi;

@implementation JsiSimple

@synthesize bridge = _bridge;

RCT_EXPORT_MODULE()

+ (BOOL)requiresMainQueueSetup {
    return YES;
}

- (void)setBridge:(RCTBridge *)bridge {
    _bridge = bridge;
    RCTCxxBridge *cxxBridge = (RCTCxxBridge *)bridge;
    Runtime &runtime = *(Runtime *)cxxBridge.runtime;
    jsisimple::install(runtime);
}

@end
