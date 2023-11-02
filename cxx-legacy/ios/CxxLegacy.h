#ifdef __cplusplus
#import "react-native-cxx-legacy.h"
#endif

#import <React/RCTCxxModule.h>

@interface CxxLegacy : RCTCxxModule

- (std::unique_ptr<facebook::xplat::module::CxxModule>)createModule;

@end
