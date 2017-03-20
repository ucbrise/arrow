/*
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */

#pragma once

#include <arrow-glib/data-type.h>

G_BEGIN_DECLS

#define GARROW_TYPE_UINT64_DATA_TYPE            \
  (garrow_uint64_data_type_get_type())
#define GARROW_UINT64_DATA_TYPE(obj)                            \
  (G_TYPE_CHECK_INSTANCE_CAST((obj),                            \
                              GARROW_TYPE_UINT64_DATA_TYPE,     \
                              GArrowUInt64DataType))
#define GARROW_UINT64_DATA_TYPE_CLASS(klass)                    \
  (G_TYPE_CHECK_CLASS_CAST((klass),                             \
                           GARROW_TYPE_UINT64_DATA_TYPE,        \
                           GArrowUInt64DataTypeClass))
#define GARROW_IS_UINT64_DATA_TYPE(obj)                         \
  (G_TYPE_CHECK_INSTANCE_TYPE((obj),                            \
                              GARROW_TYPE_UINT64_DATA_TYPE))
#define GARROW_IS_UINT64_DATA_TYPE_CLASS(klass)                 \
  (G_TYPE_CHECK_CLASS_TYPE((klass),                             \
                           GARROW_TYPE_UINT64_DATA_TYPE))
#define GARROW_UINT64_DATA_TYPE_GET_CLASS(obj)                  \
  (G_TYPE_INSTANCE_GET_CLASS((obj),                             \
                             GARROW_TYPE_UINT64_DATA_TYPE,      \
                             GArrowUInt64DataTypeClass))

typedef struct _GArrowUInt64DataType         GArrowUInt64DataType;
typedef struct _GArrowUInt64DataTypeClass    GArrowUInt64DataTypeClass;

/**
 * GArrowUInt64DataType:
 *
 * It wraps `arrow::UInt64Type`.
 */
struct _GArrowUInt64DataType
{
  /*< private >*/
  GArrowDataType parent_instance;
};

struct _GArrowUInt64DataTypeClass
{
  GArrowDataTypeClass parent_class;
};

GType                 garrow_uint64_data_type_get_type (void) G_GNUC_CONST;
GArrowUInt64DataType *garrow_uint64_data_type_new      (void);

G_END_DECLS