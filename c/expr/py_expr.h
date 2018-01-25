//------------------------------------------------------------------------------
//  Copyright 2017 H2O.ai
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//------------------------------------------------------------------------------
#ifndef dt_EXPR_PY_EXPR_H
#define dt_EXPR_PY_EXPR_H
#include "py_utils.h"
#include "column.h"


DECLARE_FUNCTION(
  expr_column,
  "expr_column(dt, index)\n\n"
  "Retrieve column `index` from the DataTable `dt`. If the column has \n"
  "associated rowindex, it will be materialized first.\n",
  dt_EXPR_PY_EXPR_CC)

DECLARE_FUNCTION(
  expr_binaryop,
  "expr_binaryop(op, lhs, rhs)\n\n"
  "\n",
  dt_EXPR_PY_EXPR_CC)



namespace expr {

Column* binaryop(int opcode, Column* lhs, Column* rhs);

};

#endif