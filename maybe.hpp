#ifndef __MORLOC__MAYBE_HPP__
#define __MORLOC__MAYBE_HPP__

#include <optional>

// fromMaybe :: ?a -> a
// Unwrap an optional value (safe under a null guard)
template <class A>
A morloc_fromMaybe(std::optional<A> x) {
    return x.value();
}

#endif
