#ifndef RENDERDOCPLUGIN_API_H
#define RENDERDOCPLUGIN_API_H

#include <QtCore/qglobal.h>

#if defined(RENDERDOCPLUGIN_LIBRARY)
#  define RENDERDOCPLUGIN_API Q_DECL_EXPORT
#else
#  define RENDERDOCPLUGIN_API Q_DECL_IMPORT
#endif

#endif // RENDERDOCPLUGIN_API_H