SUBDIRS = . cegui datafiles doc projects Samples

EXTRA_DIST=bootstrap

dist-hook:
	mkdir $(distdir)/bin $(distdir)/lib

ACLOCAL_AMFLAGS = -I m4 --install

DISTCLEANFILES = *~ autoscan.log build-aux/*~

distclean-local:
	-rm -rf autom4te.cache || rmdir autom4te.cache || find . -name '*.cache' -delete
