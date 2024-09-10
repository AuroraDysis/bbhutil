# 0 "bbhutil_f.h"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "bbhutil_f.h"




void rdvcpy(double *r,double *s, int len);
double rdvprod(double *r, int len);
int rivprod(int *r, int len);
void rivcpy(int *r, int *s, int len);
void rdvramp(double *r, int len, double min, double inc);
void rdvaddc(double *r, double c1, double *s1, double c2, double *s2, int len);
double rdvupdatemean(double *r, double *s1, double *s2, int len);

double l2norm(int N, double *vec);

int sget_fvec_param(const char *string, const char *name,
                    double *p, int size);

int sget_ivec_param(const char *string, const char *name,
                    int *p, int size);

int sget_int_param(const char *string, const char *name,
                   int *p, int size);

int sget_real_param(const char *string, const char *name,
                    double *p, int size);

int sget_str_param(const char *string, const char *name,
                   char **p, int size);

int get_fvec_param(const char *p_file, const char *name,
                    double *p, int size);

int get_ivec_param(const char *p_file, const char *name,
                    int *p, int size);

int get_int_param(const char *p_file, const char *name,
                   int *p, int size);

int get_real_param(const char *p_file, const char *name,
                    double *p, int size);

int get_str_param(const char *p_file, const char *name,
                   char **p, int size);

int do_ivec(const int it, const int niter, int *ivec);
void fixup_ivec(const int min, const int max, const int lev, int *ivec);

void fixup_fvec(double *fv);
int size_fvec(double *fv);
double get_fvec(double *fv, const int i);

void gft_close_all();
void gft_close(const char *nm);
