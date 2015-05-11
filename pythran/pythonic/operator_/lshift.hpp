#ifndef PYTHONIC_OPERATOR_LSHIFT_HPP
#define PYTHONIC_OPERATOR_LSHIFT_HPP

#include "pythonic/include/operator_/lshift.hpp"

#include "pythonic/utils/proxy.hpp"

namespace pythonic {

    namespace operator_ {

        template <class A, class B>
            auto lshift(A const& a, B const& b) -> decltype(a<<b) {
              return a << b;
            }

        PROXY_IMPL(pythonic::operator_, lshift);
    }

}

#endif
