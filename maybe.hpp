#ifndef __MORLOC__MAYBE_HPP__
#define __MORLOC__MAYBE_HPP__

#include <optional>
#include <stdexcept>

// fromMaybe :: ?a -> a
// Unwrap an optional value (safe under a null guard)
template <class A>
A morloc_fromMaybe(std::optional<A> x) {
    return x.value();
}

// Overload for coerced non-optional values (a -> ?a coercion)
template <class A>
A morloc_fromMaybe(A x) {
    return x;
}

// isNull :: ?a -> Bool
// True if an optional value is null
template <class A>
bool morloc_isNull(std::optional<A> x) {
    return !x.has_value();
}

// Overload for coerced non-optional values (a -> ?a coercion)
template <class A>
bool morloc_isNull(A x) {
    return false;
}

#endif
