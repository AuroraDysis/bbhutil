# 0 "sdf_f.h"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "sdf_f.h"






void gft_set_single(const char *nm);
void gft_set_multi(void);

int gft_write_id_gf(const char *gfname, int *shape, int rank, double *data);
int gft_write_id_int(const char *pname, int *param, int nparam);
int gft_write_id_float(const char *pname, double *param, int nparam);
int gft_write_id_str(const char *pname, char **param, int nparam);

int gft_read_id_gf(const char *gfname, int *shape, int *rank, double *data);
int gft_read_id_int(const char *pname, int *param, int nparam);
int gft_read_id_float(const char *pname, double *param, int nparam);
int gft_read_id_str(const char *pname, char **param, int nparam);

int gft_out_full(const char *func_name, double time, int *shape,
                 const char *cnames, int rank, double *coords, double *data);
int gft_out_bbox(const char *func_name, double time, int *shape, int rank,
                 double *coords, double *data);
int gft_out_brief(const char *func_name, double time, int *shape, int rank,
                  double *data);
int gft_out(const char *func_name, double time,int *shape, int rank, double *data);
int gft_out_set_bbox(double *bbox, int rank);

int gft_outm(const char *func_name, double *time, int *shape, const int nt,
             int *rank, double *data);
int gft_outm_brief(const char *func_name, double *time, int *shape, const int nt,
                   int *rank, double *data);
int gft_outm_bbox(const char *func_name, double *time, int *shape, const int nt,
                  int *rank, double *coords, double *data);
int gft_outm_full(const char *func_name, double *time, int *shape, const char **cnames,
                  const int nt, int *rank, double *coords, double *data);

int gft_read_full(const char *gf_name,
                    int level,
                    int *shape,
                    char *cnames,
                    int rank,
                    double *time,
                    double *coords,
                    double *data );

int gft_read_brief(const char *gf_name,
                    int level,
                    double *data );

int gft_read_shape(const char *gf_name, const int level, int *shape);
int gft_read_bbox(const char *file_name, const int n,double *bbox);
int gft_read_rank(const char *gf_name, const int level, int *rank);
int gft_read_name(const char *file_name, const int n, char *name);
int gft_read_sdf_ntlevs(const char *file_name);


int gft_out_part_xyz(const char *func_name, double t, double *x, double *y, double *z,int np);
int gft_out_part_xyzf(const char *func_name, double t, double *xyzf, int np, int nf);


int gft_set_append(void);
int gft_unset_append(void);
