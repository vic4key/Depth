/*!
 *  \file    CTreeIteratorBreadthPrevMaker.inl Utility class that helps to
 *           create CTreeIteratorBreadthPrev instances from specific values.
 *  \brief   Tree breadth previous iterator maker class (inline).
 *  \author  Ivan Shynkarenka aka 4ekucT
 *  \version 1.0
 *  \date    12.07.2006
 */
/*==========================================================================*/
/*
    FILE DESCRIPTION: Tree breadth previous iterator maker class (inline).

    AUTHOR:    Ivan Shynkarenka aka 4ekucT
    GROUP:     The NULL workgroup
    PROJECT:   The Depth
    PART:      Template common containers iterators
    VERSION:   1.0
    CREATED:   13.07.2006 22:18:47

    EMAIL:     chronoxor@gmail.com
    WWW:       http://code.google.com/p/depth

    COPYRIGHT: (C) 2005-2010 The NULL workgroup. All Rights Reserved.
*/
/*--------------------------------------------------------------------------*/
/*
    Copyright (C) 2005-2010 The NULL workgroup.

    This program is free software; you can redistribute it  and/or  modify  it
    under the terms of the GNU General Public License as published by the Free
    Software Foundation; either version 2 of the License, or (at your  option)
    any later version.

    This program is distributed in the  hope  that  it  will  be  useful,  but
    WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
    or FITNESS FOR A PARTICULAR PURPOSE. See the GNU  General  Public  License
    for more details.

    You should have received a copy of the GNU General  Public  License  along
    with this program; if not, write to the Free Software Foundation, Inc., 59
    Temple Place, Suite 330, Boston, MA 02111-1307 USA
*/
/*--------------------------------------------------------------------------*/
/*
    FILE ID: $Id$

    CHANGE LOG:

    $Log$
*/
/*==========================================================================*/
#ifndef __CTREEITERATORBREADTHPREVMAKER_INL__
#define __CTREEITERATORBREADTHPREVMAKER_INL__
/*==========================================================================*/
/* NAMESPACE DECLARATIONS                                                   */
/*==========================================================================*/
namespace NDepth {
/*--------------------------------------------------------------------------*/
namespace NContainers {
/*--------------------------------------------------------------------------*/
namespace NIterators {
/*==========================================================================*/
/* INLINE CLASS IMPLEMENTATIONS                                             */
/*==========================================================================*/
template <class T_TreeIterator>
inline CTreeIteratorBreadthPrev<T_TreeIterator> CTreeIteratorBreadthPrevMaker::make(const T_TreeIterator& a_crTreeIterator)
{ CALL
  return CTreeIteratorBreadthPrev<T_TreeIterator>(a_crTreeIterator);
}
/*--------------------------------------------------------------------------*/
template <class T_TreeIterator, class T_Allocator>
inline CTreeIteratorBreadthPrev<T_TreeIterator, T_Allocator> CTreeIteratorBreadthPrevMaker::make(const T_TreeIterator& a_crTreeIterator, const T_Allocator& a_crAllocator)
{ CALL
  return CTreeIteratorBreadthPrev<T_TreeIterator, T_Allocator>(a_crTreeIterator, a_crAllocator);
}
/*--------------------------------------------------------------------------*/
template <class T_TreeIterator, class T_Allocator>
inline CTreeIteratorBreadthPrev<T_TreeIterator, T_Allocator> CTreeIteratorBreadthPrevMaker::make(const CTreeIteratorBreadthPrev<T_TreeIterator, T_Allocator>& a_crInstance)
{ CALL
  return CTreeIteratorBreadthPrev<T_TreeIterator, T_Allocator>(a_crInstance);
}
/*--------------------------------------------------------------------------*/
template <class T_TreeIterator, class T_Allocator, class T_OtherAllocator>
inline CTreeIteratorBreadthPrev<T_TreeIterator, T_OtherAllocator> CTreeIteratorBreadthPrevMaker::make(const CTreeIteratorBreadthPrev<T_TreeIterator, T_Allocator>& a_crInstance, const T_OtherAllocator& a_crAllocator)
{ CALL
  return CTreeIteratorBreadthPrev<T_TreeIterator, T_OtherAllocator>(a_crInstance, a_crAllocator);
}
/*==========================================================================*/
}
/*--------------------------------------------------------------------------*/
}
/*--------------------------------------------------------------------------*/
}
/*==========================================================================*/
#endif
