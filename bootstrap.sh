#!/bin/sh

export WANT_AUTOMAKE='1.10'
export WANT_AUTOCONF_2_5=1

echo "Just run autoreconf with your favorite flags instead of using this script."

libtoolize --force --no-warn && aclocal $ACLOCAL_FLAGS && autoheader && automake --include-deps --add-missing --foreign && autoconf 
