/**
 * @file    insertion_sort.hpp
 * @author  Oleg E. Vorobiov <isnullxbh(at)gmail.com>
 * @date    27.10.2023
 */

#pragma once

#include <cstddef>
#include <iterator>

#include <dsa/comparator.hpp>
#include <dsa/comparators.hpp>
#include <dsa/detail/container_traits.hpp>

namespace dsa
{

/// @defgroup dsa-algorithms-sorting-insertion Insertion sort
/// @ingroup  dsa-algorithms-sorting

/// Insertion sort.
/// @tparam  T          The type of elements in the collection.
/// @tparam  Comparator Comparator type.
/// @param   data       A pointer to the beginning of the collection of elements.
/// @param   size       The number of elements in the collection.
/// @param   comparator Comparator.
/// @ingroup dsa-algorithms-sorting-insertion
/// @since   0.1.0
template<typename T, comparator<T> Comparator = less>
constexpr auto insertion_sort(T* data, std::size_t size, const Comparator& comparator = {}) -> void
{
    for (std::size_t i = 1; i < size; ++i)
    {
        auto key = std::move(data[i]);
        auto j = i;

        while (j > 0 && !comparator(data[j - 1], key))
        {
            data[j] = std::move(data[j - 1]);
            --j;
        }
        data[j] = std::move(key);
    }
}

/// Insertion sort.
/// @tparam  Iterator   Iterator type.
/// @tparam  Comparator Comparator type.
/// @param   first      An iterator to the beginning of the collection to be sorted.
/// @param   last       An iterator to the element following the last element in the collection to be sorted.
/// @param   comparator Comparator.
/// @ingroup dsa-algorithms-sorting-insertion
/// @since   0.1.0
template<std::bidirectional_iterator Iterator,
         comparator<typename std::iterator_traits<Iterator>::value_type> Comparator = less>
constexpr auto insertion_sort(Iterator first, Iterator last, const Comparator& comparator = {}) -> void
{
    if (first == last)
    {
        return;
    }

    for (auto cur = std::next(first); cur != last; ++cur)
    {
        auto key = std::move(*cur);
        auto tmp = cur;

        while (tmp != first && !comparator(*std::prev(tmp), key))
        {
            *tmp = std::move(*std::prev(tmp));
            tmp = std::prev(tmp);
        }
        *tmp = std::move(key);
    }
}

/// Insertion sort.
/// @tparam  Container  The type of the element collection.
/// @tparam  Comparator Comparator type.
/// @param   c          Collection to be sorted.
/// @param   comparator
/// @ingroup dsa-algorithms-sorting-insertion
/// @since   0.1.0
template<typename Container,
         comparator<typename detail::container_traits<Container>::value_type> Comparator = less>
constexpr auto insertion_sort(Container& c, const Comparator& comparator = {}) -> void
{
    return insertion_sort(std::begin(c), std::end(c), comparator);
}

} // namespace dsa
