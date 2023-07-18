# gir-test

To generate the `foo.gir` file:

```bash
g-ir-scanner --warn-all --include=GObject-2.0 -I./ --library=foo --library-path=./build/ --pkg=gobject-2.0 --namespace=Foo -o gir-files/foo-1.0.gir foo_double.h foo_double.c
```
