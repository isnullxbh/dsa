/**
 * @file    comparators.hpp
 * @author  Oleg E. Vorobiov <isnullxbh(at)gmail.com>
 * @date    27.10.2023
 */

#pragma once

namespace dsa
{

/// A function object that performs a check of objects for equality.
/// @ingroup dsa-algorithms-comparators
/// @since   0.1.0
struct equal
{
    /// Checks objects for equality.
    /// @tparam T   Object type.
    /// @param  lhs Object to compare.
    /// @param  rhs Object to compare.
    /// @return If objects are equal - true, otherwise - false.
    template<typename T>
    constexpr auto operator()(const T& lhs, const T& rhs) const -> bool
    {
        return lhs == rhs;
    }
};

/// A function object that performs a check of objects for inequality.
/// @ingroup dsa-algorithms-comparators
/// @since   0.1.0
struct not_equal
{
    /// Checks objects for inequality.
    /// @tparam T   Object type.
    /// @param  lhs Object to compare.
    /// @param  rhs Object to compare.
    /// @return If objects are not equal - true, otherwise - false.
    template<typename T>
    constexpr auto operator()(const T& lhs, const T& rhs) const -> bool
    {
        return lhs != rhs;
    }
};

/// A function object that performs a check of objects for strict @a less relation.
/// @ingroup dsa-algorithms-comparators
/// @since   0.1.0
struct less
{
    /// Checks if @a lhs is less than @a rhs.
    /// @tparam T   Object type.
    /// @param  lhs Object to compare.
    /// @param  rhs Object to compare.
    /// @return If @a lhs is less than @a rhs - true, otherwise - false.
    template<typename T>
    constexpr auto operator()(const T& lhs, const T& rhs) const -> bool
    {
        return lhs < rhs;
    }
};

/// A function object that performs a check of objects for <em>less or equal</em> relation.
/// @ingroup dsa-algorithms-comparators
/// @since   0.1.0
struct less_or_equal
{
    /// Checks if @a lhs is less or equal than @a rhs.
    /// @tparam T   Object type.
    /// @param  lhs Object to compare.
    /// @param  rhs Object to compare.
    /// @return If @a lhs is less or equal than @a rhs - true, otherwise - false.
    template<typename T>
    constexpr auto operator()(const T& lhs, const T& rhs) const -> bool
    {
        return lhs <= rhs;
    }
};

/// A function object that performs a check of objects for @a greater relation.
/// @ingroup dsa-algorithms-comparators
/// @since   0.1.0
struct greater
{
    /// Checks if @a lhs is greater than @a rhs.
    /// @tparam T   Object type.
    /// @param  lhs Object to compare.
    /// @param  rhs Object to compare.
    /// @return If @a lhs is greater than @a rhs - true, otherwise - false.
    template<typename T>
    constexpr auto operator()(const T& lhs, const T& rhs) const -> bool
    {
        return lhs > rhs;
    }
};

/// A function object that performs a check of objects for <em>greater or equal</em> relation.
/// @ingroup dsa-algorithms-comparators
/// @since   0.1.0
struct greater_or_equal
{
    /// Checks if @a lhs is greater or equal than @a rhs.
    /// @tparam T   Object type.
    /// @param  lhs Object to compare.
    /// @param  rhs Object to compare.
    /// @return If @a lhs is greater or equal than @a rhs - true, otherwise - false.
    template<typename T>
    constexpr auto operator()(const T& lhs, const T& rhs) const -> bool
    {
        return lhs >= rhs;
    }
};

} // namespace dsa
