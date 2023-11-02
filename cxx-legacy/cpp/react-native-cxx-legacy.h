#ifndef CXXLEGACY_H
#define CXXLEGACY_H

#include <cxxreact/CxxModule.h>

using namespace facebook::xplat::module;

namespace cxxlegacy {

class CxxLegacyCxxModule : public CxxModule {
 public:
  CxxLegacyCxxModule() = default;

  inline std::string getName() override {
    return "CxxLegacy";
  };

  auto getMethods() -> std::vector<CxxModule::Method> override;
};

}

extern "C" CxxModule* createCxxLegacyCxxModule();

#endif /* CXXLEGACY_H */
