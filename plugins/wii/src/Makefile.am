plugindir = $(libdir)/gnome-games/plugins
plugin_LTLIBRARIES = libgames-wii-plugin.la

libgames_wii_plugin_la_DEPENDENCIES = \
	$(top_builddir)/src/gnome-games.vapi \
	$(NULL)

libgames_wii_plugin_la_SOURCES = \
	wii-header.vala \
	wii-plugin.vala \
	wii-uid.vala \
	$(NULL)

libgames_wii_plugin_la_VALAFLAGS = \
	--target-glib=@GLIB_MIN_VERSION@ \
	--pkg gnome-games \
	--vapidir $(top_builddir)/src \
	$(NULL)

libgames_wii_plugin_la_CFLAGS = \
	$(WII_PLUGIN_CFLAGS) \
	$(GNOME_GAMES_CFLAGS) \
	-DRETRO_GTK_USE_UNSTABLE_API \
	-DG_LOG_DOMAIN=\"GamesWii\" \
	-DLOCALEDIR=\"$(localedir)\" \
	$(NULL)

libgames_wii_plugin_la_CPPFLAGS = \
	-I$(top_srcdir) \
	-I$(top_srcdir)/src \
	$(NULL)

libgames_wii_plugin_la_LIBADD = \
	$(WII_PLUGIN_LIBS) \
	$(GNOME_GAMES_LIBS) \
	$(NULL)

libgames_wii_plugin_la_LDFLAGS = \
	-no-undefined \
	-module \
	-avoid-version \
	$(NULL)

EXTRA_DIST = \
	$(plugin_DATA) \
	$(NULL)

MAINTAINERCLEANFILES = \
	$(BUILT_SOURCES) \
	$(NULL)

-include $(top_srcdir)/git.mk
