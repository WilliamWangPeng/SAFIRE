/*BHEADER**********************************************************************
 * Copyright (c) 2017,  Lawrence Livermore National Security, LLC.
 * Produced at the Lawrence Livermore National Laboratory.
 * Written by Ulrike Yang (yang11@llnl.gov) et al. CODE-LLNL-738-322.
 * This file is part of AMG.  See files README and COPYRIGHT for details.
 *
 * AMG is free software; you can redistribute it and/or modify it under the
 * terms of the GNU Lesser General Public License (as published by the Free
 * Software Foundation) version 2.1 dated February 1999.
 *
 * This software is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the IMPLIED WARRANTY OF MERCHANTIBILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the terms and conditions of the
 * GNU General Public License for more details.
 *
 ***********************************************************************EHEADER*/

#include "_hypre_utilities.h"

#ifdef HYPRE_COMPLEX

#include <complex.h>

HYPRE_Complex
hypre_conj( HYPRE_Complex value )
{
   return conj(value);
}

HYPRE_Real
hypre_cabs( HYPRE_Complex value )
{
   return cabs(value);
}

HYPRE_Real
hypre_creal( HYPRE_Complex value )
{
   return creal(value);
}

HYPRE_Real
hypre_cimag( HYPRE_Complex value )
{
   return cimag(value);
}

#endif
