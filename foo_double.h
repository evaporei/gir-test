#ifndef __FOO_DOUBLE_H__
#define __FOO_DOUBLE_H__

#include <glib-object.h>

#define FOO_TYPE_DOUBLE (foo_double_get_type ())
G_DECLARE_FINAL_TYPE (FooDouble, foo_double, FOO, DOUBLE, GObject)

gboolean foo_double_get_value (FooDouble *d, double *value);

void foo_double_set_value (FooDouble *d, double value);

FooDouble *foo_double_new (double value);

FooDouble *foo_double_add (FooDouble *self, FooDouble *other);

FooDouble *foo_double_sub (FooDouble *self, FooDouble *other);

FooDouble *foo_double_mul (FooDouble *self, FooDouble *other);

FooDouble *foo_double_div (FooDouble *self, FooDouble *other);

FooDouble *foo_double_inv (FooDouble *self);

#endif
