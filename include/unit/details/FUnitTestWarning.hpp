/*!
 *  \file    FUnitTestWarning.hpp Helper function that invokes unit test
 *           warning handler.
 *  \brief   Unit test warning helper function.
 *  \author  Ivan Shynkarenka aka 4ekucT
 *  \version 1.0
 *  \date    22.01.2009
 */
/*==========================================================================*/
/*
    FILE DESCRIPTION: Unit test warning helper function.

    AUTHOR:    Ivan Shynkarenka aka 4ekucT
    GROUP:     The NULL workgroup
    PROJECT:   The Depth
    PART:      Unit test details
    VERSION:   1.0
    CREATED:   22.01.2009 20:42:58

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
#ifndef __FUNITTESTWARNING_HPP__
#define __FUNITTESTWARNING_HPP__
/*==========================================================================*/
#include <Depth/include/unit.hpp>
/*==========================================================================*/
/* NAMESPACE DECLARATIONS                                                   */
/*==========================================================================*/
namespace NDepth {
/*--------------------------------------------------------------------------*/
namespace NUnitTest {
/*--------------------------------------------------------------------------*/
namespace NDetails {
/*==========================================================================*/
/* FUNCTION DECLARATIONS                                                    */
/*==========================================================================*/
//! Unit test warning helper function (ASCII version).
/*!
    Unit test warning helper function shows unit test warning message for  the
    given function signature, file name and line in file. This  function  uses
    common Depth argument formatting algorithm.

    \param a_cpFunctionSignature - Function signature name, which rises the unit test warning.
    \param a_cpFileName - File name, from where the unit test warning has been risen.
    \param a_cLine - Line in file, from where the unit test warning has been risen.
    \param a_cpMessage - Unit test warning message to be shown.
*/
UNITTEST_API void unitTestWarning(Tcsstr a_cpFunctionSignature, Tcstr a_cpFileName, const Tuint a_cLine, Tcsstr a_cpMessage, ...);
/*--------------------------------------------------------------------------*/
//! Unit test warning helper function (Unicode version).
/*!
    Unit test warning helper function shows unit test warning message for  the
    given function signature, file name and line in file. This  function  uses
    common Depth argument formatting algorithm.

    \param a_cpFunctionSignature - Function signature name, which rises the unit test warning.
    \param a_cpFileName - File name, from where the unit test warning has been risen.
    \param a_cLine - Line in file, from where the unit test warning has been risen.
    \param a_cpMessage - Unit test warning message to be shown.
*/
UNITTEST_API void unitTestWarning(Tcsstr a_cpFunctionSignature, Tcstr a_cpFileName, const Tuint a_cLine, Tcwstr a_cpMessage, ...);
/*==========================================================================*/
}
/*--------------------------------------------------------------------------*/
}
/*--------------------------------------------------------------------------*/
}
/*==========================================================================*/
#endif
