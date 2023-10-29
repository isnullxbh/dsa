/**
 * @file    comparator.hpp
 * @author  Oleg E. Vorobiov <isnullxbh(at)gmail.com>
 * @date    29.10.2023
 */

#pragma once

#include <concepts>

namespace dsa
{

/// A concept of function object used to compare elements.
/// @tparam  C Comparator type.
/// @tparam  T The type of comparable elements.
/// @ingroup dsa-concepts
/// @since   0.1.0
template<typename C, typename T>
concept comparator = requires(const C& c, const T& lhs, const T& rhs)
{
    { c(lhs, rhs) } -> std::same_as<bool>;
};

} // namespace dsa
