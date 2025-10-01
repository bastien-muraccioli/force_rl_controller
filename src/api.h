#pragma once

#if defined _WIN32 || defined __CYGWIN__
#  define ForceRLController_DLLIMPORT __declspec(dllimport)
#  define ForceRLController_DLLEXPORT __declspec(dllexport)
#  define ForceRLController_DLLLOCAL
#else
// On Linux, for GCC >= 4, tag symbols using GCC extension.
#  if __GNUC__ >= 4
#    define ForceRLController_DLLIMPORT __attribute__((visibility("default")))
#    define ForceRLController_DLLEXPORT __attribute__((visibility("default")))
#    define ForceRLController_DLLLOCAL __attribute__((visibility("hidden")))
#  else
// Otherwise (GCC < 4 or another compiler is used), export everything.
#    define ForceRLController_DLLIMPORT
#    define ForceRLController_DLLEXPORT
#    define ForceRLController_DLLLOCAL
#  endif // __GNUC__ >= 4
#endif // defined _WIN32 || defined __CYGWIN__

#ifdef ForceRLController_STATIC
// If one is using the library statically, get rid of
// extra information.
#  define ForceRLController_DLLAPI
#  define ForceRLController_LOCAL
#else
// Depending on whether one is building or using the
// library define DLLAPI to import or export.
#  ifdef ForceRLController_EXPORTS
#    define ForceRLController_DLLAPI ForceRLController_DLLEXPORT
#  else
#    define ForceRLController_DLLAPI ForceRLController_DLLIMPORT
#  endif // ForceRLController_EXPORTS
#  define ForceRLController_LOCAL ForceRLController_DLLLOCAL
#endif // ForceRLController_STATIC
