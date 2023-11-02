#include "react-native-cxx-legacy.h"
#include <cxxreact/JsArgumentHelpers.h>

using namespace facebook::xplat;

namespace cxxlegacy {

std::vector<CxxModule::Method> CxxLegacyCxxModule::getMethods() {
  return {
      CxxModule::Method(
          "multiply",
          [](folly::dynamic args, Callback cb) {
            cb({jsArgAsDouble(args, 0) * jsArgAsDouble(args, 1)});
          }),
  };
}

}

extern "C" CxxModule* createCxxLegacyCxxModule() {
  return new cxxlegacy::CxxLegacyCxxModule();
}
