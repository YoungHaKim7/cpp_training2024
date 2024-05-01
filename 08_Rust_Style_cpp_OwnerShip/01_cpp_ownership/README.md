# Result

```bash

1) Unique ownership semantics demo
D::D
D::bar
D::~D

2) Runtime polymorphism demo
D::D
D::bar
D::~D

3) Custom deleter demo
x

4) Custom lambda-expression deleter and exception safety demo
D::D
destroying from a custom deleter...
D::~D
Caught exception

5) Array form of unique_ptr demo
D::D
D::D
D::D
D::~D
D::~D
D::~D

6) Linked list demo
terminate called after throwing an instance of 'std::runtime_error'
  what():  locale::facet::_S_create_c_locale name not valid
make: *** [Makefile:21: r] Aborted (core dumped)
```
