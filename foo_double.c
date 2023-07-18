#include "foo_double.h"

struct _FooDouble {
  GObject parent;
  double value;
};

G_DEFINE_TYPE (FooDouble, foo_double, G_TYPE_OBJECT)

void foo_double_class_init (FooDoubleClass *class) { g_print ("foo_double_class_init\n"); }

void foo_double_init (FooDouble *d) { g_print ("foo_double_init\n"); }

gboolean foo_double_get_value (FooDouble *d, double *value) {
  g_return_val_if_fail (FOO_IS_DOUBLE (d), FALSE);

  *value = d->value;
  return TRUE;
}

void foo_double_set_value (FooDouble *d, double value) {
  g_return_if_fail (FOO_IS_DOUBLE (d));

  d->value = value;
}

/**
 * foo_double_new:
 *
 * Returns: (transfer full)
 */
FooDouble *foo_double_new (double value) {
  FooDouble *d;

  d = g_object_new (FOO_TYPE_DOUBLE, NULL);
  d-> value = value;

  return d;
}

#define foo_double_binary_op(op) \
  g_return_val_if_fail (FOO_IS_DOUBLE (self), NULL); \
  g_return_val_if_fail (FOO_IS_DOUBLE (other), NULL); \
  \
  double other_value; \
  g_return_val_if_fail (foo_double_get_value (other, &other_value), NULL); \
  \
  return foo_double_new (self->value op other_value);

/**
 * foo_double_add:
 *
 * Returns: (transfer full)
 */
FooDouble *foo_double_add (FooDouble *self, FooDouble *other) {
  foo_double_binary_op(+)
}

/**
 * foo_double_sub:
 *
 * Returns: (transfer full)
 */
FooDouble *foo_double_sub (FooDouble *self, FooDouble *other) {
  foo_double_binary_op(-)
}

/**
 * foo_double_mul:
 *
 * Returns: (transfer full)
 */
FooDouble *foo_double_mul (FooDouble *self, FooDouble *other) {
  foo_double_binary_op(*)
}

/**
 * foo_double_div:
 *
 * Returns: (transfer full)
 */
FooDouble *foo_double_div (FooDouble *self, FooDouble *other) {
  foo_double_binary_op(/)
}

/**
 * foo_double_inv:
 *
 * Returns: (transfer full)
 */
FooDouble *foo_double_inv (FooDouble *self) {
  g_return_val_if_fail (FOO_IS_DOUBLE (self), NULL);

  return foo_double_new (-self->value);
}
