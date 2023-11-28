/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raitmous <raitmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 12:36:13 by raitmous          #+#    #+#             */
/*   Updated: 2023/11/28 08:50:31 by raitmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>
#include <string>

template<typename S>
void swap(S& a, S& b)
{
    S c;

    c = a;
    a = b;
    b = c;
}

template<typename Min>
Min& min(const Min& a, const Min& b)
{
    return (a < b ? const_cast<Min &>(a) : const_cast<Min &>(b));
}

template<typename Max>
Max& max(const Max& a, const Max& b)
{
    return (a > b ? const_cast<Max &>(a) : const_cast<Max &>(b));
}

#endif
