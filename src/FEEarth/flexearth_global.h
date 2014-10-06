#ifndef FLEXEARTH_GLOBAL_H
#define FLEXEARTH_GLOBAL_H

#ifdef FLEXEARTH_EXPORTS
# define FLEXEARTH_EXPORT __declspec(dllexport)
#else
# define FLEXEARTH_EXPORT __declspec(dllimport)
#endif

#endif // FLEXEARTH_GLOBAL_H
