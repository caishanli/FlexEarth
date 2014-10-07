#ifndef FLEXEARTH_GLOBAL_H
#define FLEXEARTH_GLOBAL_H

#ifdef FLEXEARTH_EXPORTS
# define FEEARTH_EXPORT __declspec(dllexport)
#else
# define FEEARTH_EXPORT __declspec(dllimport)
#endif

#endif // FLEXEARTH_GLOBAL_H
