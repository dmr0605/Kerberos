## DO NOT EDIT! GENERATED AUTOMATICALLY!
## Process this file with automake to produce Makefile.in.
# Copyright (C) 2002-2009 Free Software Foundation, Inc.
#
# This file is free software, distributed under the terms of the GNU
# General Public License.  As a special exception to the GNU General
# Public License, this file may be distributed as part of a program
# that contains a configuration script generated by Autoconf, under
# the same distribution terms as the rest of that program.
#
# Generated by gnulib-tool.
# Reproduce by: gnulib-tool --import --dir=. --lib=libgnu --source-base=src/gl --m4-base=src/gl/m4 --doc-base=doc --tests-base=tests --aux-dir=build-aux --avoid=extensions --avoid=gettext --avoid=gettext-h --avoid=include_next --avoid=intprops --avoid=stdarg --avoid=string --avoid=unistd --makefile-name=gnulib.mk --libtool --macro-prefix=gl2 --no-vc-files error getopt locale progname version-etc


MOSTLYCLEANFILES += core *.stackdump

noinst_LTLIBRARIES += libgnu.la

libgnu_la_SOURCES =
libgnu_la_LIBADD = $(gl2_LTLIBOBJS)
libgnu_la_DEPENDENCIES = $(gl2_LTLIBOBJS)
EXTRA_libgnu_la_SOURCES =
libgnu_la_LDFLAGS = $(AM_LDFLAGS)

## begin gnulib module errno

BUILT_SOURCES += $(ERRNO_H)

# We need the following in order to create <errno.h> when the system
# doesn't have one that is POSIX compliant.
errno.h: errno.in.h
	rm -f $@-t $@
	{ echo '/* DO NOT EDIT! GENERATED AUTOMATICALLY! */' && \
	  sed -e 's|@''INCLUDE_NEXT''@|$(INCLUDE_NEXT)|g' \
	      -e 's|@''PRAGMA_SYSTEM_HEADER''@|@PRAGMA_SYSTEM_HEADER@|g' \
	      -e 's|@''NEXT_ERRNO_H''@|$(NEXT_ERRNO_H)|g' \
	      -e 's|@''EMULTIHOP_HIDDEN''@|$(EMULTIHOP_HIDDEN)|g' \
	      -e 's|@''EMULTIHOP_VALUE''@|$(EMULTIHOP_VALUE)|g' \
	      -e 's|@''ENOLINK_HIDDEN''@|$(ENOLINK_HIDDEN)|g' \
	      -e 's|@''ENOLINK_VALUE''@|$(ENOLINK_VALUE)|g' \
	      -e 's|@''EOVERFLOW_HIDDEN''@|$(EOVERFLOW_HIDDEN)|g' \
	      -e 's|@''EOVERFLOW_VALUE''@|$(EOVERFLOW_VALUE)|g' \
	      < $(srcdir)/errno.in.h; \
	} > $@-t
	mv $@-t $@
MOSTLYCLEANFILES += errno.h errno.h-t

EXTRA_DIST += errno.in.h

## end   gnulib module errno

## begin gnulib module error


EXTRA_DIST += error.c error.h

EXTRA_libgnu_la_SOURCES += error.c

## end   gnulib module error

## begin gnulib module getopt

BUILT_SOURCES += $(GETOPT_H)

# We need the following in order to create <getopt.h> when the system
# doesn't have one that works with the given compiler.
getopt.h: getopt.in.h
	{ echo '/* DO NOT EDIT! GENERATED AUTOMATICALLY! */'; \
	  cat $(srcdir)/getopt.in.h; \
	} > $@-t
	mv -f $@-t $@
MOSTLYCLEANFILES += getopt.h getopt.h-t

EXTRA_DIST += getopt.c getopt.in.h getopt1.c getopt_int.h

EXTRA_libgnu_la_SOURCES += getopt.c getopt1.c

## end   gnulib module getopt

## begin gnulib module locale

BUILT_SOURCES += $(LOCALE_H)

# We need the following in order to create <locale.h> when the system
# doesn't have one that provides all definitions.
locale.h: locale.in.h
	rm -f $@-t $@
	{ echo '/* DO NOT EDIT! GENERATED AUTOMATICALLY! */' && \
	  sed -e 's|@''INCLUDE_NEXT''@|$(INCLUDE_NEXT)|g' \
	      -e 's|@''PRAGMA_SYSTEM_HEADER''@|@PRAGMA_SYSTEM_HEADER@|g' \
	      -e 's|@''NEXT_LOCALE_H''@|$(NEXT_LOCALE_H)|g' \
	      < $(srcdir)/locale.in.h; \
	} > $@-t
	mv $@-t $@
MOSTLYCLEANFILES += locale.h locale.h-t

EXTRA_DIST += locale.in.h

## end   gnulib module locale

## begin gnulib module progname

libgnu_la_SOURCES += progname.h progname.c

## end   gnulib module progname

## begin gnulib module strerror


EXTRA_DIST += strerror.c

EXTRA_libgnu_la_SOURCES += strerror.c

## end   gnulib module strerror

## begin gnulib module version-etc

libgnu_la_SOURCES += version-etc.h version-etc.c

## end   gnulib module version-etc


mostlyclean-local: mostlyclean-generic
	@for dir in '' $(MOSTLYCLEANDIRS); do \
	  if test -n "$$dir" && test -d $$dir; then \
	    echo "rmdir $$dir"; rmdir $$dir; \
	  fi; \
	done; \
	:
