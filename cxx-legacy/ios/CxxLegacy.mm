#import "CxxLegacy.h"

@implementation CxxLegacy
RCT_EXPORT_MODULE()

- (std::unique_ptr<facebook::xplat::module::CxxModule>)createModule {
  return std::make_unique<cxxlegacy::CxxLegacyCxxModule>();
}

@end
