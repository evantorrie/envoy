#pragma once

#include "extensions/filters/common/rbac/engine_impl.h"

#include "gmock/gmock.h"

namespace Envoy {
namespace Extensions {
namespace Filters {
namespace Common {
namespace RBAC {

class MockEngine : public RoleBasedAccessControlEngineImpl {
public:
  MockEngine(const envoy::config::rbac::v2alpha::RBAC& rules)
      : RoleBasedAccessControlEngineImpl(rules){};

  MOCK_CONST_METHOD2(allowed,
                     bool(const Envoy::Network::Connection&, const Envoy::Http::HeaderMap&));
};

} // namespace RBAC
} // namespace Common
} // namespace Filters
} // namespace Extensions
} // namespace Envoy
