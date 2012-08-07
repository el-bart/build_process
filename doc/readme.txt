build process
=============

this package is a build process for C++ and C.

full-featured build is located in build_process/ directory. it is able to build static and dynamic
libraries as long as applications. it integrates autoamted and manual tests, doxygen documentation
and debug/release building modes. it also offers advanced setups, for conditional code inclusion,
per-profile settings, flags and components list to compile.

simpler build, for small projects is placed under small_prj_build_process/ directory. it is
targeted for systems where components division is not required (i.e. build all ass one applications
is fine).

both build systems generate all output and temporary files inside gen/ directory. this makes it
easy to clean and maintain. additionally each setup for build is generated inside separate
sub-directory within gen/, making it possible to build ex. debug and release independently,
without need for cleaning anything.

author:  bartek szurgot

www:     http://www.baszerr.eu/doku.php/prjs/build_process/build_process

license: revised BSD

version: 2.2.0
