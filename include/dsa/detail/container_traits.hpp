/**
 * @file    container_traits.hpp
 * @author  Oleg E. Vorobiov <isnullxbh(at)gmail.com>
 * @date    29.10.2023
 */

#pragma once

#include <cstddef>

namespace dsa::detail
{

/// @defgroup dsa-details-container-traits Container traits
/// @ingroup  dsa-details

/// Traits for STL containers.
/// @tparam  T Container type.
/// @since   0.1.0
/// @ingroup dsa-details-container-traits
template<typename T>
struct container_traits
{
    using value_type = typename T::value_type; ///< Type of the container element.
};

/// Traits for C arrays.
/// @tparam  T Array type.
/// @tparam  N Array length.
/// @since   0.1.0
/// @ingroup dsa-details-container-traits
template<typename T, std::size_t N>
struct container_traits<T[N]>
{
    using value_type = T; ///< Type of the array element.
};

} // namespace dsa::detail
