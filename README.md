# `boost::filesystem::path::operator+=` compile failure

With boost 1.78 installed, do `make`. It should fail to compile.

Comment out the line that fails, and uncomment the other line. `make` should now work and `./test` results in `foo/bar`
