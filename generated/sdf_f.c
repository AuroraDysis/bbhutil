#include <stdio.h>    
#include <string.h>    
#include <stdlib.h>    
#include "sdf_f.i"

char *_STRING_cvt_sdf(char *in,int n) {
   char *out = NULL;
   int   i;
   if( in ) {
		out = (char *) malloc((n + 1) * sizeof(char));
		strncpy(out,in,n);
		out[n] = '\0';

		for(i = n - 1;i >= 0 && out[i] == ' ';i--);
		if(i >= 0 && i < n) out[i+1] = '\0';
   }

   return out;
}

char **_VSTRING_cvt_sdf(char *in,int elemlen,int ns) {
   char **out;
   int  i,  j;
   out = (char **) malloc(ns * sizeof(char *));
   for( i = 0; i < ns; i++ ) {
      out[i] = (char *)  malloc((elemlen + 1) * sizeof(char));
      strncpy(out[i],in + i * elemlen,elemlen);
      out[i][elemlen] = '\0';
      for(j = elemlen - 1; j >= 0 && out[i][j] == ' '; j--);
      if( j >= 0 && j < elemlen ) out[i][j+1] = '\0';
   }
   return out;
}

void _STRCPY_cvt_sdf(char *out,char *in,int n) {
	if( !in ) return;
   strncpy(out,in,strlen(in));
}

void _VSTRCPY_cvt_sdf(char *out,char **in,int elemlen,int ns) {
   int  i;
   for( i = 0; i < ns; i++ ) {
      strncpy(out + i * elemlen,in[i],strlen(in[i]));
   }
}

void _free_VSTRING_cvt_sdf(char **s,int ns) {
   int    i;
   for( i = 0; i < ns; i++ ) {
      if( s[i] ) free(s[i]);
   }
   if( s ) free(s);
}

void gft_set_single__(
   char * nm,
   int len_nm ) {

   char * l_nm;

   l_nm = _STRING_cvt_sdf(nm,len_nm);

   gft_set_single(
      l_nm      );

   /* nm is 'const' ... */


   free(l_nm);

}

void gft_set_single_(
   char * nm,
   int len_nm ) {

   char * l_nm;

   l_nm = _STRING_cvt_sdf(nm,len_nm);

   gft_set_single(
      l_nm      );

   /* nm is 'const' ... */


   free(l_nm);

}

void gft_set_multi__( void  ) {

   gft_set_multi(
      );
}

void gft_set_multi_( void  ) {

   gft_set_multi(
      );
}

int gft_write_id_gf__(
   char * gfname,
   int * shape,
   int * p_rank,
   double * data,
   int len_gfname ) {

   int _mfi_rval;
   char * l_gfname;

   l_gfname = _STRING_cvt_sdf(gfname,len_gfname);

   _mfi_rval = gft_write_id_gf(
      l_gfname,
      shape,
      *p_rank,
      data      );

   /* gfname is 'const' ... */


   free(l_gfname);

   return _mfi_rval;
}

int gft_write_id_gf_(
   char * gfname,
   int * shape,
   int * p_rank,
   double * data,
   int len_gfname ) {

   int _mfi_rval;
   char * l_gfname;

   l_gfname = _STRING_cvt_sdf(gfname,len_gfname);

   _mfi_rval = gft_write_id_gf(
      l_gfname,
      shape,
      *p_rank,
      data      );

   /* gfname is 'const' ... */


   free(l_gfname);

   return _mfi_rval;
}

int gft_write_id_int__(
   char * pname,
   int * param,
   int * p_nparam,
   int len_pname ) {

   int _mfi_rval;
   char * l_pname;

   l_pname = _STRING_cvt_sdf(pname,len_pname);

   _mfi_rval = gft_write_id_int(
      l_pname,
      param,
      *p_nparam      );

   /* pname is 'const' ... */


   free(l_pname);

   return _mfi_rval;
}

int gft_write_id_int_(
   char * pname,
   int * param,
   int * p_nparam,
   int len_pname ) {

   int _mfi_rval;
   char * l_pname;

   l_pname = _STRING_cvt_sdf(pname,len_pname);

   _mfi_rval = gft_write_id_int(
      l_pname,
      param,
      *p_nparam      );

   /* pname is 'const' ... */


   free(l_pname);

   return _mfi_rval;
}

int gft_write_id_float__(
   char * pname,
   double * param,
   int * p_nparam,
   int len_pname ) {

   int _mfi_rval;
   char * l_pname;

   l_pname = _STRING_cvt_sdf(pname,len_pname);

   _mfi_rval = gft_write_id_float(
      l_pname,
      param,
      *p_nparam      );

   /* pname is 'const' ... */


   free(l_pname);

   return _mfi_rval;
}

int gft_write_id_float_(
   char * pname,
   double * param,
   int * p_nparam,
   int len_pname ) {

   int _mfi_rval;
   char * l_pname;

   l_pname = _STRING_cvt_sdf(pname,len_pname);

   _mfi_rval = gft_write_id_float(
      l_pname,
      param,
      *p_nparam      );

   /* pname is 'const' ... */


   free(l_pname);

   return _mfi_rval;
}

int gft_write_id_str__(
   char * pname,
   char * param,
   int * p_nparam,
   int len_pname,
   int len_param ) {

   int _mfi_rval;
   char * l_pname;
   char ** l_param;

   l_pname = _STRING_cvt_sdf(pname,len_pname);
   l_param = _VSTRING_cvt_sdf(param,len_param,*p_nparam);

   _mfi_rval = gft_write_id_str(
      l_pname,
      l_param,
      *p_nparam      );

   /* pname is 'const' ... */
   _VSTRCPY_cvt_sdf(param,l_param,len_param,*p_nparam);


   free(l_pname);
   _free_VSTRING_cvt_sdf(l_param,*p_nparam);

   return _mfi_rval;
}

int gft_write_id_str_(
   char * pname,
   char * param,
   int * p_nparam,
   int len_pname,
   int len_param ) {

   int _mfi_rval;
   char * l_pname;
   char ** l_param;

   l_pname = _STRING_cvt_sdf(pname,len_pname);
   l_param = _VSTRING_cvt_sdf(param,len_param,*p_nparam);

   _mfi_rval = gft_write_id_str(
      l_pname,
      l_param,
      *p_nparam      );

   /* pname is 'const' ... */
   _VSTRCPY_cvt_sdf(param,l_param,len_param,*p_nparam);


   free(l_pname);
   _free_VSTRING_cvt_sdf(l_param,*p_nparam);

   return _mfi_rval;
}

int gft_read_id_gf__(
   char * gfname,
   int * shape,
   int * rank,
   double * data,
   int len_gfname ) {

   int _mfi_rval;
   char * l_gfname;

   l_gfname = _STRING_cvt_sdf(gfname,len_gfname);

   _mfi_rval = gft_read_id_gf(
      l_gfname,
      shape,
      rank,
      data      );

   /* gfname is 'const' ... */


   free(l_gfname);

   return _mfi_rval;
}

int gft_read_id_gf_(
   char * gfname,
   int * shape,
   int * rank,
   double * data,
   int len_gfname ) {

   int _mfi_rval;
   char * l_gfname;

   l_gfname = _STRING_cvt_sdf(gfname,len_gfname);

   _mfi_rval = gft_read_id_gf(
      l_gfname,
      shape,
      rank,
      data      );

   /* gfname is 'const' ... */


   free(l_gfname);

   return _mfi_rval;
}

int gft_read_id_int__(
   char * pname,
   int * param,
   int * p_nparam,
   int len_pname ) {

   int _mfi_rval;
   char * l_pname;

   l_pname = _STRING_cvt_sdf(pname,len_pname);

   _mfi_rval = gft_read_id_int(
      l_pname,
      param,
      *p_nparam      );

   /* pname is 'const' ... */


   free(l_pname);

   return _mfi_rval;
}

int gft_read_id_int_(
   char * pname,
   int * param,
   int * p_nparam,
   int len_pname ) {

   int _mfi_rval;
   char * l_pname;

   l_pname = _STRING_cvt_sdf(pname,len_pname);

   _mfi_rval = gft_read_id_int(
      l_pname,
      param,
      *p_nparam      );

   /* pname is 'const' ... */


   free(l_pname);

   return _mfi_rval;
}

int gft_read_id_float__(
   char * pname,
   double * param,
   int * p_nparam,
   int len_pname ) {

   int _mfi_rval;
   char * l_pname;

   l_pname = _STRING_cvt_sdf(pname,len_pname);

   _mfi_rval = gft_read_id_float(
      l_pname,
      param,
      *p_nparam      );

   /* pname is 'const' ... */


   free(l_pname);

   return _mfi_rval;
}

int gft_read_id_float_(
   char * pname,
   double * param,
   int * p_nparam,
   int len_pname ) {

   int _mfi_rval;
   char * l_pname;

   l_pname = _STRING_cvt_sdf(pname,len_pname);

   _mfi_rval = gft_read_id_float(
      l_pname,
      param,
      *p_nparam      );

   /* pname is 'const' ... */


   free(l_pname);

   return _mfi_rval;
}

int gft_read_id_str__(
   char * pname,
   char * param,
   int * p_nparam,
   int len_pname,
   int len_param ) {

   int _mfi_rval;
   char * l_pname;
   char ** l_param;

   l_pname = _STRING_cvt_sdf(pname,len_pname);
   l_param = _VSTRING_cvt_sdf(param,len_param,*p_nparam);

   _mfi_rval = gft_read_id_str(
      l_pname,
      l_param,
      *p_nparam      );

   /* pname is 'const' ... */
   _VSTRCPY_cvt_sdf(param,l_param,len_param,*p_nparam);


   free(l_pname);
   _free_VSTRING_cvt_sdf(l_param,*p_nparam);

   return _mfi_rval;
}

int gft_read_id_str_(
   char * pname,
   char * param,
   int * p_nparam,
   int len_pname,
   int len_param ) {

   int _mfi_rval;
   char * l_pname;
   char ** l_param;

   l_pname = _STRING_cvt_sdf(pname,len_pname);
   l_param = _VSTRING_cvt_sdf(param,len_param,*p_nparam);

   _mfi_rval = gft_read_id_str(
      l_pname,
      l_param,
      *p_nparam      );

   /* pname is 'const' ... */
   _VSTRCPY_cvt_sdf(param,l_param,len_param,*p_nparam);


   free(l_pname);
   _free_VSTRING_cvt_sdf(l_param,*p_nparam);

   return _mfi_rval;
}

int gft_out_full__(
   char * func_name,
   double * p_time,
   int * shape,
   char * cnames,
   int * p_rank,
   double * coords,
   double * data,
   int len_func_name,
   int len_cnames ) {

   int _mfi_rval;
   char * l_func_name;
   char * l_cnames;

   l_func_name = _STRING_cvt_sdf(func_name,len_func_name);
   l_cnames = _STRING_cvt_sdf(cnames,len_cnames);

   _mfi_rval = gft_out_full(
      l_func_name,
      *p_time,
      shape,
      l_cnames,
      *p_rank,
      coords,
      data      );

   /* func_name is 'const' ... */
   /* cnames is 'const' ... */


   free(l_func_name);
   free(l_cnames);

   return _mfi_rval;
}

int gft_out_full_(
   char * func_name,
   double * p_time,
   int * shape,
   char * cnames,
   int * p_rank,
   double * coords,
   double * data,
   int len_func_name,
   int len_cnames ) {

   int _mfi_rval;
   char * l_func_name;
   char * l_cnames;

   l_func_name = _STRING_cvt_sdf(func_name,len_func_name);
   l_cnames = _STRING_cvt_sdf(cnames,len_cnames);

   _mfi_rval = gft_out_full(
      l_func_name,
      *p_time,
      shape,
      l_cnames,
      *p_rank,
      coords,
      data      );

   /* func_name is 'const' ... */
   /* cnames is 'const' ... */


   free(l_func_name);
   free(l_cnames);

   return _mfi_rval;
}

int gft_out_bbox__(
   char * func_name,
   double * p_time,
   int * shape,
   int * p_rank,
   double * coords,
   double * data,
   int len_func_name ) {

   int _mfi_rval;
   char * l_func_name;

   l_func_name = _STRING_cvt_sdf(func_name,len_func_name);

   _mfi_rval = gft_out_bbox(
      l_func_name,
      *p_time,
      shape,
      *p_rank,
      coords,
      data      );

   /* func_name is 'const' ... */


   free(l_func_name);

   return _mfi_rval;
}

int gft_out_bbox_(
   char * func_name,
   double * p_time,
   int * shape,
   int * p_rank,
   double * coords,
   double * data,
   int len_func_name ) {

   int _mfi_rval;
   char * l_func_name;

   l_func_name = _STRING_cvt_sdf(func_name,len_func_name);

   _mfi_rval = gft_out_bbox(
      l_func_name,
      *p_time,
      shape,
      *p_rank,
      coords,
      data      );

   /* func_name is 'const' ... */


   free(l_func_name);

   return _mfi_rval;
}

int gft_out_brief__(
   char * func_name,
   double * p_time,
   int * shape,
   int * p_rank,
   double * data,
   int len_func_name ) {

   int _mfi_rval;
   char * l_func_name;

   l_func_name = _STRING_cvt_sdf(func_name,len_func_name);

   _mfi_rval = gft_out_brief(
      l_func_name,
      *p_time,
      shape,
      *p_rank,
      data      );

   /* func_name is 'const' ... */


   free(l_func_name);

   return _mfi_rval;
}

int gft_out_brief_(
   char * func_name,
   double * p_time,
   int * shape,
   int * p_rank,
   double * data,
   int len_func_name ) {

   int _mfi_rval;
   char * l_func_name;

   l_func_name = _STRING_cvt_sdf(func_name,len_func_name);

   _mfi_rval = gft_out_brief(
      l_func_name,
      *p_time,
      shape,
      *p_rank,
      data      );

   /* func_name is 'const' ... */


   free(l_func_name);

   return _mfi_rval;
}

int gft_out__(
   char * func_name,
   double * p_time,
   int * shape,
   int * p_rank,
   double * data,
   int len_func_name ) {

   int _mfi_rval;
   char * l_func_name;

   l_func_name = _STRING_cvt_sdf(func_name,len_func_name);

   _mfi_rval = gft_out(
      l_func_name,
      *p_time,
      shape,
      *p_rank,
      data      );

   /* func_name is 'const' ... */


   free(l_func_name);

   return _mfi_rval;
}

int gft_out_(
   char * func_name,
   double * p_time,
   int * shape,
   int * p_rank,
   double * data,
   int len_func_name ) {

   int _mfi_rval;
   char * l_func_name;

   l_func_name = _STRING_cvt_sdf(func_name,len_func_name);

   _mfi_rval = gft_out(
      l_func_name,
      *p_time,
      shape,
      *p_rank,
      data      );

   /* func_name is 'const' ... */


   free(l_func_name);

   return _mfi_rval;
}

int gft_out_set_bbox__(
   double * bbox,
   int * p_rank ) {

   int _mfi_rval;
   _mfi_rval = gft_out_set_bbox(
      bbox,
      *p_rank      );
   return _mfi_rval;
}

int gft_out_set_bbox_(
   double * bbox,
   int * p_rank ) {

   int _mfi_rval;
   _mfi_rval = gft_out_set_bbox(
      bbox,
      *p_rank      );
   return _mfi_rval;
}

int gft_outm__(
   char * func_name,
   double * time,
   int * shape,
   int * p_nt,
   int * rank,
   double * data,
   int len_func_name ) {

   int _mfi_rval;
   char * l_func_name;

   l_func_name = _STRING_cvt_sdf(func_name,len_func_name);

   _mfi_rval = gft_outm(
      l_func_name,
      time,
      shape,
      *p_nt,
      rank,
      data      );

   /* func_name is 'const' ... */


   free(l_func_name);

   return _mfi_rval;
}

int gft_outm_(
   char * func_name,
   double * time,
   int * shape,
   int * p_nt,
   int * rank,
   double * data,
   int len_func_name ) {

   int _mfi_rval;
   char * l_func_name;

   l_func_name = _STRING_cvt_sdf(func_name,len_func_name);

   _mfi_rval = gft_outm(
      l_func_name,
      time,
      shape,
      *p_nt,
      rank,
      data      );

   /* func_name is 'const' ... */


   free(l_func_name);

   return _mfi_rval;
}

int gft_outm_brief__(
   char * func_name,
   double * time,
   int * shape,
   int * p_nt,
   int * rank,
   double * data,
   int len_func_name ) {

   int _mfi_rval;
   char * l_func_name;

   l_func_name = _STRING_cvt_sdf(func_name,len_func_name);

   _mfi_rval = gft_outm_brief(
      l_func_name,
      time,
      shape,
      *p_nt,
      rank,
      data      );

   /* func_name is 'const' ... */


   free(l_func_name);

   return _mfi_rval;
}

int gft_outm_brief_(
   char * func_name,
   double * time,
   int * shape,
   int * p_nt,
   int * rank,
   double * data,
   int len_func_name ) {

   int _mfi_rval;
   char * l_func_name;

   l_func_name = _STRING_cvt_sdf(func_name,len_func_name);

   _mfi_rval = gft_outm_brief(
      l_func_name,
      time,
      shape,
      *p_nt,
      rank,
      data      );

   /* func_name is 'const' ... */


   free(l_func_name);

   return _mfi_rval;
}

int gft_outm_bbox__(
   char * func_name,
   double * time,
   int * shape,
   int * p_nt,
   int * rank,
   double * coords,
   double * data,
   int len_func_name ) {

   int _mfi_rval;
   char * l_func_name;

   l_func_name = _STRING_cvt_sdf(func_name,len_func_name);

   _mfi_rval = gft_outm_bbox(
      l_func_name,
      time,
      shape,
      *p_nt,
      rank,
      coords,
      data      );

   /* func_name is 'const' ... */


   free(l_func_name);

   return _mfi_rval;
}

int gft_outm_bbox_(
   char * func_name,
   double * time,
   int * shape,
   int * p_nt,
   int * rank,
   double * coords,
   double * data,
   int len_func_name ) {

   int _mfi_rval;
   char * l_func_name;

   l_func_name = _STRING_cvt_sdf(func_name,len_func_name);

   _mfi_rval = gft_outm_bbox(
      l_func_name,
      time,
      shape,
      *p_nt,
      rank,
      coords,
      data      );

   /* func_name is 'const' ... */


   free(l_func_name);

   return _mfi_rval;
}

int gft_outm_full__(
   char * func_name,
   double * time,
   int * shape,
   char * cnames,
   int * p_nt,
   int * rank,
   double * coords,
   double * data,
   int len_func_name,
   int len_cnames ) {

   int _mfi_rval;
   char * l_func_name;
   char ** l_cnames;

   l_func_name = _STRING_cvt_sdf(func_name,len_func_name);
   l_cnames = _VSTRING_cvt_sdf(cnames,len_cnames,*p_nt);

   _mfi_rval = gft_outm_full(
      l_func_name,
      time,
      shape,
      l_cnames,
      *p_nt,
      rank,
      coords,
      data      );

   /* func_name is 'const' ... */
   /* cnames is 'const' ... */


   free(l_func_name);
   _free_VSTRING_cvt_sdf(l_cnames,*p_nt);

   return _mfi_rval;
}

int gft_outm_full_(
   char * func_name,
   double * time,
   int * shape,
   char * cnames,
   int * p_nt,
   int * rank,
   double * coords,
   double * data,
   int len_func_name,
   int len_cnames ) {

   int _mfi_rval;
   char * l_func_name;
   char ** l_cnames;

   l_func_name = _STRING_cvt_sdf(func_name,len_func_name);
   l_cnames = _VSTRING_cvt_sdf(cnames,len_cnames,*p_nt);

   _mfi_rval = gft_outm_full(
      l_func_name,
      time,
      shape,
      l_cnames,
      *p_nt,
      rank,
      coords,
      data      );

   /* func_name is 'const' ... */
   /* cnames is 'const' ... */


   free(l_func_name);
   _free_VSTRING_cvt_sdf(l_cnames,*p_nt);

   return _mfi_rval;
}

int gft_read_full__(
   char * gf_name,
   int * p_level,
   int * shape,
   char * cnames,
   int * p_rank,
   double * time,
   double * coords,
   double * data,
   int len_gf_name,
   int len_cnames ) {

   int _mfi_rval;
   char * l_gf_name;
   char * l_cnames;

   l_gf_name = _STRING_cvt_sdf(gf_name,len_gf_name);
   l_cnames = _STRING_cvt_sdf(cnames,len_cnames);

   _mfi_rval = gft_read_full(
      l_gf_name,
      *p_level,
      shape,
      l_cnames,
      *p_rank,
      time,
      coords,
      data      );

   /* gf_name is 'const' ... */
   _STRCPY_cvt_sdf(cnames,l_cnames,len_cnames);


   free(l_gf_name);
   free(l_cnames);

   return _mfi_rval;
}

int gft_read_full_(
   char * gf_name,
   int * p_level,
   int * shape,
   char * cnames,
   int * p_rank,
   double * time,
   double * coords,
   double * data,
   int len_gf_name,
   int len_cnames ) {

   int _mfi_rval;
   char * l_gf_name;
   char * l_cnames;

   l_gf_name = _STRING_cvt_sdf(gf_name,len_gf_name);
   l_cnames = _STRING_cvt_sdf(cnames,len_cnames);

   _mfi_rval = gft_read_full(
      l_gf_name,
      *p_level,
      shape,
      l_cnames,
      *p_rank,
      time,
      coords,
      data      );

   /* gf_name is 'const' ... */
   _STRCPY_cvt_sdf(cnames,l_cnames,len_cnames);


   free(l_gf_name);
   free(l_cnames);

   return _mfi_rval;
}

int gft_read_brief__(
   char * gf_name,
   int * p_level,
   double * data,
   int len_gf_name ) {

   int _mfi_rval;
   char * l_gf_name;

   l_gf_name = _STRING_cvt_sdf(gf_name,len_gf_name);

   _mfi_rval = gft_read_brief(
      l_gf_name,
      *p_level,
      data      );

   /* gf_name is 'const' ... */


   free(l_gf_name);

   return _mfi_rval;
}

int gft_read_brief_(
   char * gf_name,
   int * p_level,
   double * data,
   int len_gf_name ) {

   int _mfi_rval;
   char * l_gf_name;

   l_gf_name = _STRING_cvt_sdf(gf_name,len_gf_name);

   _mfi_rval = gft_read_brief(
      l_gf_name,
      *p_level,
      data      );

   /* gf_name is 'const' ... */


   free(l_gf_name);

   return _mfi_rval;
}

int gft_read_shape__(
   char * gf_name,
   int * p_level,
   int * shape,
   int len_gf_name ) {

   int _mfi_rval;
   char * l_gf_name;

   l_gf_name = _STRING_cvt_sdf(gf_name,len_gf_name);

   _mfi_rval = gft_read_shape(
      l_gf_name,
      *p_level,
      shape      );

   /* gf_name is 'const' ... */


   free(l_gf_name);

   return _mfi_rval;
}

int gft_read_shape_(
   char * gf_name,
   int * p_level,
   int * shape,
   int len_gf_name ) {

   int _mfi_rval;
   char * l_gf_name;

   l_gf_name = _STRING_cvt_sdf(gf_name,len_gf_name);

   _mfi_rval = gft_read_shape(
      l_gf_name,
      *p_level,
      shape      );

   /* gf_name is 'const' ... */


   free(l_gf_name);

   return _mfi_rval;
}

int gft_read_bbox__(
   char * file_name,
   int * p_n,
   double * bbox,
   int len_file_name ) {

   int _mfi_rval;
   char * l_file_name;

   l_file_name = _STRING_cvt_sdf(file_name,len_file_name);

   _mfi_rval = gft_read_bbox(
      l_file_name,
      *p_n,
      bbox      );

   /* file_name is 'const' ... */


   free(l_file_name);

   return _mfi_rval;
}

int gft_read_bbox_(
   char * file_name,
   int * p_n,
   double * bbox,
   int len_file_name ) {

   int _mfi_rval;
   char * l_file_name;

   l_file_name = _STRING_cvt_sdf(file_name,len_file_name);

   _mfi_rval = gft_read_bbox(
      l_file_name,
      *p_n,
      bbox      );

   /* file_name is 'const' ... */


   free(l_file_name);

   return _mfi_rval;
}

int gft_read_rank__(
   char * gf_name,
   int * p_level,
   int * rank,
   int len_gf_name ) {

   int _mfi_rval;
   char * l_gf_name;

   l_gf_name = _STRING_cvt_sdf(gf_name,len_gf_name);

   _mfi_rval = gft_read_rank(
      l_gf_name,
      *p_level,
      rank      );

   /* gf_name is 'const' ... */


   free(l_gf_name);

   return _mfi_rval;
}

int gft_read_rank_(
   char * gf_name,
   int * p_level,
   int * rank,
   int len_gf_name ) {

   int _mfi_rval;
   char * l_gf_name;

   l_gf_name = _STRING_cvt_sdf(gf_name,len_gf_name);

   _mfi_rval = gft_read_rank(
      l_gf_name,
      *p_level,
      rank      );

   /* gf_name is 'const' ... */


   free(l_gf_name);

   return _mfi_rval;
}

int gft_read_name__(
   char * file_name,
   int * p_n,
   char * name,
   int len_file_name,
   int len_name ) {

   int _mfi_rval;
   char * l_file_name;
   char * l_name;

   l_file_name = _STRING_cvt_sdf(file_name,len_file_name);
   l_name = _STRING_cvt_sdf(name,len_name);

   _mfi_rval = gft_read_name(
      l_file_name,
      *p_n,
      l_name      );

   /* file_name is 'const' ... */
   _STRCPY_cvt_sdf(name,l_name,len_name);


   free(l_file_name);
   free(l_name);

   return _mfi_rval;
}

int gft_read_name_(
   char * file_name,
   int * p_n,
   char * name,
   int len_file_name,
   int len_name ) {

   int _mfi_rval;
   char * l_file_name;
   char * l_name;

   l_file_name = _STRING_cvt_sdf(file_name,len_file_name);
   l_name = _STRING_cvt_sdf(name,len_name);

   _mfi_rval = gft_read_name(
      l_file_name,
      *p_n,
      l_name      );

   /* file_name is 'const' ... */
   _STRCPY_cvt_sdf(name,l_name,len_name);


   free(l_file_name);
   free(l_name);

   return _mfi_rval;
}

int gft_read_sdf_ntlevs__(
   char * file_name,
   int len_file_name ) {

   int _mfi_rval;
   char * l_file_name;

   l_file_name = _STRING_cvt_sdf(file_name,len_file_name);

   _mfi_rval = gft_read_sdf_ntlevs(
      l_file_name      );

   /* file_name is 'const' ... */


   free(l_file_name);

   return _mfi_rval;
}

int gft_read_sdf_ntlevs_(
   char * file_name,
   int len_file_name ) {

   int _mfi_rval;
   char * l_file_name;

   l_file_name = _STRING_cvt_sdf(file_name,len_file_name);

   _mfi_rval = gft_read_sdf_ntlevs(
      l_file_name      );

   /* file_name is 'const' ... */


   free(l_file_name);

   return _mfi_rval;
}

int gft_out_part_xyz__(
   char * func_name,
   double * p_t,
   double * x,
   double * y,
   double * z,
   int * p_np,
   int len_func_name ) {

   int _mfi_rval;
   char * l_func_name;

   l_func_name = _STRING_cvt_sdf(func_name,len_func_name);

   _mfi_rval = gft_out_part_xyz(
      l_func_name,
      *p_t,
      x,
      y,
      z,
      *p_np      );

   /* func_name is 'const' ... */


   free(l_func_name);

   return _mfi_rval;
}

int gft_out_part_xyz_(
   char * func_name,
   double * p_t,
   double * x,
   double * y,
   double * z,
   int * p_np,
   int len_func_name ) {

   int _mfi_rval;
   char * l_func_name;

   l_func_name = _STRING_cvt_sdf(func_name,len_func_name);

   _mfi_rval = gft_out_part_xyz(
      l_func_name,
      *p_t,
      x,
      y,
      z,
      *p_np      );

   /* func_name is 'const' ... */


   free(l_func_name);

   return _mfi_rval;
}

int gft_out_part_xyzf__(
   char * func_name,
   double * p_t,
   double * xyzf,
   int * p_np,
   int * p_nf,
   int len_func_name ) {

   int _mfi_rval;
   char * l_func_name;

   l_func_name = _STRING_cvt_sdf(func_name,len_func_name);

   _mfi_rval = gft_out_part_xyzf(
      l_func_name,
      *p_t,
      xyzf,
      *p_np,
      *p_nf      );

   /* func_name is 'const' ... */


   free(l_func_name);

   return _mfi_rval;
}

int gft_out_part_xyzf_(
   char * func_name,
   double * p_t,
   double * xyzf,
   int * p_np,
   int * p_nf,
   int len_func_name ) {

   int _mfi_rval;
   char * l_func_name;

   l_func_name = _STRING_cvt_sdf(func_name,len_func_name);

   _mfi_rval = gft_out_part_xyzf(
      l_func_name,
      *p_t,
      xyzf,
      *p_np,
      *p_nf      );

   /* func_name is 'const' ... */


   free(l_func_name);

   return _mfi_rval;
}

int gft_set_append__( void  ) {

   int _mfi_rval;
   _mfi_rval = gft_set_append(
      );
   return _mfi_rval;
}

int gft_set_append_( void  ) {

   int _mfi_rval;
   _mfi_rval = gft_set_append(
      );
   return _mfi_rval;
}

int gft_unset_append__( void  ) {

   int _mfi_rval;
   _mfi_rval = gft_unset_append(
      );
   return _mfi_rval;
}

int gft_unset_append_( void  ) {

   int _mfi_rval;
   _mfi_rval = gft_unset_append(
      );
   return _mfi_rval;
}

