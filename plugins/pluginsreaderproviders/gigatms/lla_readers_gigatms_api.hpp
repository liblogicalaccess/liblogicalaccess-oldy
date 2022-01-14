
#ifndef LLA_READERS_GIGATMS_API_H
#define LLA_READERS_GIGATMS_API_H

#ifdef GIGATMSREADERS_STATIC_DEFINE
#  define LLA_READERS_GIGATMS_API
#  define GIGATMSREADERS_NO_EXPORT
#else
#  ifndef LLA_READERS_GIGATMS_API
#    ifdef gigatmsreaders_EXPORTS
        /* We are building this library */
#      define LLA_READERS_GIGATMS_API __declspec(dllexport)
#    else
        /* We are using this library */
#      define LLA_READERS_GIGATMS_API __declspec(dllimport)
#    endif
#  endif

#  ifndef GIGATMSREADERS_NO_EXPORT
#    define GIGATMSREADERS_NO_EXPORT 
#  endif
#endif

#ifndef GIGATMSREADERS_DEPRECATED
#  define GIGATMSREADERS_DEPRECATED __declspec(deprecated)
#endif

#ifndef GIGATMSREADERS_DEPRECATED_EXPORT
#  define GIGATMSREADERS_DEPRECATED_EXPORT LLA_READERS_GIGATMS_API GIGATMSREADERS_DEPRECATED
#endif

#ifndef GIGATMSREADERS_DEPRECATED_NO_EXPORT
#  define GIGATMSREADERS_DEPRECATED_NO_EXPORT GIGATMSREADERS_NO_EXPORT GIGATMSREADERS_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef GIGATMSREADERS_NO_DEPRECATED
#    define GIGATMSREADERS_NO_DEPRECATED
#  endif
#endif

#endif /* LLA_READERS_GIGATMS_API_H */