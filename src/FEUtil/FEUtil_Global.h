#ifndef FEPLUGINENGINE_GLOBAL_H
#define FEPLUGINENGINE_GLOBAL_H



#ifdef FEUTIL_LIB
# define FEUTIL_EXPORT __declspec(dllexport)
#else
# define FEUTIL_EXPORT __declspec(dllimport)
#endif

#endif // FEPLUGINENGINE_GLOBAL_H
