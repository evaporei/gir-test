# gir-test

To generate the `foo.gir` file:

```bash
g-ir-scanner --warn-all --include=GObject-2.0 -I./ --library=foo --library-path=./build/ --pkg=gobject-2.0 --namespace=Foo -o foo.gir foo_double.h foo_double.c
```