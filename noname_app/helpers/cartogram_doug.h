/* Generated by Cython 0.24 */

#ifndef __PYX_HAVE__noname_app__helpers__cartogram_doug
#define __PYX_HAVE__noname_app__helpers__cartogram_doug

struct Holder;
typedef struct Holder Holder;

/* "noname_app/helpers/cartogram_doug.pyx":56
 *     return geodf.to_json()
 * 
 * ctypedef public struct Holder:             # <<<<<<<<<<<<<<
 *     unsigned int lFID
 *     double ptCenter_x
 */
struct Holder {
  unsigned int lFID;
  double ptCenter_x;
  double ptCenter_y;
  double dValue;
  double dArea;
  double dMass;
  double dRadius;
};

#ifndef __PYX_HAVE_API__noname_app__helpers__cartogram_doug

#ifndef __PYX_EXTERN_C
  #ifdef __cplusplus
    #define __PYX_EXTERN_C extern "C"
  #else
    #define __PYX_EXTERN_C extern
  #endif
#endif

#ifndef DL_IMPORT
  #define DL_IMPORT(_T) _T
#endif

#endif /* !__PYX_HAVE_API__noname_app__helpers__cartogram_doug */

#if PY_MAJOR_VERSION < 3
PyMODINIT_FUNC initcartogram_doug(void);
#else
PyMODINIT_FUNC PyInit_cartogram_doug(void);
#endif

#endif /* !__PYX_HAVE__noname_app__helpers__cartogram_doug */
