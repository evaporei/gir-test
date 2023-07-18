project('gir-test', 'c',
  version : '0.1',
  default_options : ['warning_level=3'])

gobject = dependency('gobject-2.0')

srcs = files('foo_double.c',
  )
  # 'tcomparable.c',
  # 'tint.c',
  # 'tdouble.c',
  # 'tnumber.c',
  # 'tstr.c')

library('foo', srcs, dependencies: gobject)
