#include <stdio.h>    
#include <string.h>    
#include <stdlib.h>    
#include "bbhutil_f.i"

char *_STRING_cvt_bbhutil(char *in,int n) {
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

char **_VSTRING_cvt_bbhutil(char *in,int elemlen,int ns) {
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

void _STRCPY_cvt_bbhutil(char *out,char *in,int n) {
	if( !in ) return;
   strncpy(out,in,strlen(in));
}

void _VSTRCPY_cvt_bbhutil(char *out,char **in,int elemlen,int ns) {
   int  i;
   for( i = 0; i < ns; i++ ) {
      strncpy(out + i * elemlen,in[i],strlen(in[i]));
   }
}

void _free_VSTRING_cvt_bbhutil(char **s,int ns) {
   int    i;
   for( i = 0; i < ns; i++ ) {
      if( s[i] ) free(s[i]);
   }
   if( s ) free(s);
}

void rdvcpy_(
   double * r,
   double * s,
   int * p_len ) {

   rdvcpy(
      r,
      s,
      *p_len      );
}

double rdvprod_(
   double * r,
   int * p_len ) {

   double _mfi_rval;
   _mfi_rval = rdvprod(
      r,
      *p_len      );
   return _mfi_rval;
}

int rivprod_(
   int * r,
   int * p_len ) {

   int _mfi_rval;
   _mfi_rval = rivprod(
      r,
      *p_len      );
   return _mfi_rval;
}

void rivcpy_(
   int * r,
   int * s,
   int * p_len ) {

   rivcpy(
      r,
      s,
      *p_len      );
}

void rdvramp_(
   double * r,
   int * p_len,
   double * p_min,
   double * p_inc ) {

   rdvramp(
      r,
      *p_len,
      *p_min,
      *p_inc      );
}

void rdvaddc_(
   double * r,
   double * p_c1,
   double * s1,
   double * p_c2,
   double * s2,
   int * p_len ) {

   rdvaddc(
      r,
      *p_c1,
      s1,
      *p_c2,
      s2,
      *p_len      );
}

double rdvupdatemean_(
   double * r,
   double * s1,
   double * s2,
   int * p_len ) {

   double _mfi_rval;
   _mfi_rval = rdvupdatemean(
      r,
      s1,
      s2,
      *p_len      );
   return _mfi_rval;
}

double l2norm_(
   int * p_N,
   double * vec ) {

   double _mfi_rval;
   _mfi_rval = l2norm(
      *p_N,
      vec      );
   return _mfi_rval;
}

int sget_fvec_param__(
   char * string,
   char * name,
   double * p,
   int * p_size,
   int len_string,
   int len_name ) {

   int _mfi_rval;
   char * l_string;
   char * l_name;

   l_string = _STRING_cvt_bbhutil(string,len_string);
   l_name = _STRING_cvt_bbhutil(name,len_name);

   _mfi_rval = sget_fvec_param(
      l_string,
      l_name,
      p,
      *p_size      );

   /* string is 'const' ... */
   /* name is 'const' ... */


   free(l_string);
   free(l_name);

   return _mfi_rval;
}

int sget_fvec_param_(
   char * string,
   char * name,
   double * p,
   int * p_size,
   int len_string,
   int len_name ) {

   int _mfi_rval;
   char * l_string;
   char * l_name;

   l_string = _STRING_cvt_bbhutil(string,len_string);
   l_name = _STRING_cvt_bbhutil(name,len_name);

   _mfi_rval = sget_fvec_param(
      l_string,
      l_name,
      p,
      *p_size      );

   /* string is 'const' ... */
   /* name is 'const' ... */


   free(l_string);
   free(l_name);

   return _mfi_rval;
}

int sget_ivec_param__(
   char * string,
   char * name,
   int * p,
   int * p_size,
   int len_string,
   int len_name ) {

   int _mfi_rval;
   char * l_string;
   char * l_name;

   l_string = _STRING_cvt_bbhutil(string,len_string);
   l_name = _STRING_cvt_bbhutil(name,len_name);

   _mfi_rval = sget_ivec_param(
      l_string,
      l_name,
      p,
      *p_size      );

   /* string is 'const' ... */
   /* name is 'const' ... */


   free(l_string);
   free(l_name);

   return _mfi_rval;
}

int sget_ivec_param_(
   char * string,
   char * name,
   int * p,
   int * p_size,
   int len_string,
   int len_name ) {

   int _mfi_rval;
   char * l_string;
   char * l_name;

   l_string = _STRING_cvt_bbhutil(string,len_string);
   l_name = _STRING_cvt_bbhutil(name,len_name);

   _mfi_rval = sget_ivec_param(
      l_string,
      l_name,
      p,
      *p_size      );

   /* string is 'const' ... */
   /* name is 'const' ... */


   free(l_string);
   free(l_name);

   return _mfi_rval;
}

int sget_int_param__(
   char * string,
   char * name,
   int * p,
   int * p_size,
   int len_string,
   int len_name ) {

   int _mfi_rval;
   char * l_string;
   char * l_name;

   l_string = _STRING_cvt_bbhutil(string,len_string);
   l_name = _STRING_cvt_bbhutil(name,len_name);

   _mfi_rval = sget_int_param(
      l_string,
      l_name,
      p,
      *p_size      );

   /* string is 'const' ... */
   /* name is 'const' ... */


   free(l_string);
   free(l_name);

   return _mfi_rval;
}

int sget_int_param_(
   char * string,
   char * name,
   int * p,
   int * p_size,
   int len_string,
   int len_name ) {

   int _mfi_rval;
   char * l_string;
   char * l_name;

   l_string = _STRING_cvt_bbhutil(string,len_string);
   l_name = _STRING_cvt_bbhutil(name,len_name);

   _mfi_rval = sget_int_param(
      l_string,
      l_name,
      p,
      *p_size      );

   /* string is 'const' ... */
   /* name is 'const' ... */


   free(l_string);
   free(l_name);

   return _mfi_rval;
}

int sget_real_param__(
   char * string,
   char * name,
   double * p,
   int * p_size,
   int len_string,
   int len_name ) {

   int _mfi_rval;
   char * l_string;
   char * l_name;

   l_string = _STRING_cvt_bbhutil(string,len_string);
   l_name = _STRING_cvt_bbhutil(name,len_name);

   _mfi_rval = sget_real_param(
      l_string,
      l_name,
      p,
      *p_size      );

   /* string is 'const' ... */
   /* name is 'const' ... */


   free(l_string);
   free(l_name);

   return _mfi_rval;
}

int sget_real_param_(
   char * string,
   char * name,
   double * p,
   int * p_size,
   int len_string,
   int len_name ) {

   int _mfi_rval;
   char * l_string;
   char * l_name;

   l_string = _STRING_cvt_bbhutil(string,len_string);
   l_name = _STRING_cvt_bbhutil(name,len_name);

   _mfi_rval = sget_real_param(
      l_string,
      l_name,
      p,
      *p_size      );

   /* string is 'const' ... */
   /* name is 'const' ... */


   free(l_string);
   free(l_name);

   return _mfi_rval;
}

int sget_str_param__(
   char * string,
   char * name,
   char * p,
   int * p_size,
   int len_string,
   int len_name,
   int len_p ) {

   int _mfi_rval;
   char * l_string;
   char * l_name;
   char ** l_p;

   l_string = _STRING_cvt_bbhutil(string,len_string);
   l_name = _STRING_cvt_bbhutil(name,len_name);
   l_p = _VSTRING_cvt_bbhutil(p,len_p,*p_size);

   _mfi_rval = sget_str_param(
      l_string,
      l_name,
      l_p,
      *p_size      );

   /* string is 'const' ... */
   /* name is 'const' ... */
   _VSTRCPY_cvt_bbhutil(p,l_p,len_p,*p_size);


   free(l_string);
   free(l_name);
   _free_VSTRING_cvt_bbhutil(l_p,*p_size);

   return _mfi_rval;
}

int sget_str_param_(
   char * string,
   char * name,
   char * p,
   int * p_size,
   int len_string,
   int len_name,
   int len_p ) {

   int _mfi_rval;
   char * l_string;
   char * l_name;
   char ** l_p;

   l_string = _STRING_cvt_bbhutil(string,len_string);
   l_name = _STRING_cvt_bbhutil(name,len_name);
   l_p = _VSTRING_cvt_bbhutil(p,len_p,*p_size);

   _mfi_rval = sget_str_param(
      l_string,
      l_name,
      l_p,
      *p_size      );

   /* string is 'const' ... */
   /* name is 'const' ... */
   _VSTRCPY_cvt_bbhutil(p,l_p,len_p,*p_size);


   free(l_string);
   free(l_name);
   _free_VSTRING_cvt_bbhutil(l_p,*p_size);

   return _mfi_rval;
}

int get_fvec_param__(
   char * p_file,
   char * name,
   double * p,
   int * p_size,
   int len_p_file,
   int len_name ) {

   int _mfi_rval;
   char * l_p_file;
   char * l_name;

   l_p_file = _STRING_cvt_bbhutil(p_file,len_p_file);
   l_name = _STRING_cvt_bbhutil(name,len_name);

   _mfi_rval = get_fvec_param(
      l_p_file,
      l_name,
      p,
      *p_size      );

   /* p_file is 'const' ... */
   /* name is 'const' ... */


   free(l_p_file);
   free(l_name);

   return _mfi_rval;
}

int get_fvec_param_(
   char * p_file,
   char * name,
   double * p,
   int * p_size,
   int len_p_file,
   int len_name ) {

   int _mfi_rval;
   char * l_p_file;
   char * l_name;

   l_p_file = _STRING_cvt_bbhutil(p_file,len_p_file);
   l_name = _STRING_cvt_bbhutil(name,len_name);

   _mfi_rval = get_fvec_param(
      l_p_file,
      l_name,
      p,
      *p_size      );

   /* p_file is 'const' ... */
   /* name is 'const' ... */


   free(l_p_file);
   free(l_name);

   return _mfi_rval;
}

int get_ivec_param__(
   char * p_file,
   char * name,
   int * p,
   int * p_size,
   int len_p_file,
   int len_name ) {

   int _mfi_rval;
   char * l_p_file;
   char * l_name;

   l_p_file = _STRING_cvt_bbhutil(p_file,len_p_file);
   l_name = _STRING_cvt_bbhutil(name,len_name);

   _mfi_rval = get_ivec_param(
      l_p_file,
      l_name,
      p,
      *p_size      );

   /* p_file is 'const' ... */
   /* name is 'const' ... */


   free(l_p_file);
   free(l_name);

   return _mfi_rval;
}

int get_ivec_param_(
   char * p_file,
   char * name,
   int * p,
   int * p_size,
   int len_p_file,
   int len_name ) {

   int _mfi_rval;
   char * l_p_file;
   char * l_name;

   l_p_file = _STRING_cvt_bbhutil(p_file,len_p_file);
   l_name = _STRING_cvt_bbhutil(name,len_name);

   _mfi_rval = get_ivec_param(
      l_p_file,
      l_name,
      p,
      *p_size      );

   /* p_file is 'const' ... */
   /* name is 'const' ... */


   free(l_p_file);
   free(l_name);

   return _mfi_rval;
}

int get_int_param__(
   char * p_file,
   char * name,
   int * p,
   int * p_size,
   int len_p_file,
   int len_name ) {

   int _mfi_rval;
   char * l_p_file;
   char * l_name;

   l_p_file = _STRING_cvt_bbhutil(p_file,len_p_file);
   l_name = _STRING_cvt_bbhutil(name,len_name);

   _mfi_rval = get_int_param(
      l_p_file,
      l_name,
      p,
      *p_size      );

   /* p_file is 'const' ... */
   /* name is 'const' ... */


   free(l_p_file);
   free(l_name);

   return _mfi_rval;
}

int get_int_param_(
   char * p_file,
   char * name,
   int * p,
   int * p_size,
   int len_p_file,
   int len_name ) {

   int _mfi_rval;
   char * l_p_file;
   char * l_name;

   l_p_file = _STRING_cvt_bbhutil(p_file,len_p_file);
   l_name = _STRING_cvt_bbhutil(name,len_name);

   _mfi_rval = get_int_param(
      l_p_file,
      l_name,
      p,
      *p_size      );

   /* p_file is 'const' ... */
   /* name is 'const' ... */


   free(l_p_file);
   free(l_name);

   return _mfi_rval;
}

int get_real_param__(
   char * p_file,
   char * name,
   double * p,
   int * p_size,
   int len_p_file,
   int len_name ) {

   int _mfi_rval;
   char * l_p_file;
   char * l_name;

   l_p_file = _STRING_cvt_bbhutil(p_file,len_p_file);
   l_name = _STRING_cvt_bbhutil(name,len_name);

   _mfi_rval = get_real_param(
      l_p_file,
      l_name,
      p,
      *p_size      );

   /* p_file is 'const' ... */
   /* name is 'const' ... */


   free(l_p_file);
   free(l_name);

   return _mfi_rval;
}

int get_real_param_(
   char * p_file,
   char * name,
   double * p,
   int * p_size,
   int len_p_file,
   int len_name ) {

   int _mfi_rval;
   char * l_p_file;
   char * l_name;

   l_p_file = _STRING_cvt_bbhutil(p_file,len_p_file);
   l_name = _STRING_cvt_bbhutil(name,len_name);

   _mfi_rval = get_real_param(
      l_p_file,
      l_name,
      p,
      *p_size      );

   /* p_file is 'const' ... */
   /* name is 'const' ... */


   free(l_p_file);
   free(l_name);

   return _mfi_rval;
}

int get_str_param__(
   char * p_file,
   char * name,
   char * p,
   int * p_size,
   int len_p_file,
   int len_name,
   int len_p ) {

   int _mfi_rval;
   char * l_p_file;
   char * l_name;
   char ** l_p;

   l_p_file = _STRING_cvt_bbhutil(p_file,len_p_file);
   l_name = _STRING_cvt_bbhutil(name,len_name);
   l_p = _VSTRING_cvt_bbhutil(p,len_p,*p_size);

   _mfi_rval = get_str_param(
      l_p_file,
      l_name,
      l_p,
      *p_size      );

   /* p_file is 'const' ... */
   /* name is 'const' ... */
   _VSTRCPY_cvt_bbhutil(p,l_p,len_p,*p_size);


   free(l_p_file);
   free(l_name);
   _free_VSTRING_cvt_bbhutil(l_p,*p_size);

   return _mfi_rval;
}

int get_str_param_(
   char * p_file,
   char * name,
   char * p,
   int * p_size,
   int len_p_file,
   int len_name,
   int len_p ) {

   int _mfi_rval;
   char * l_p_file;
   char * l_name;
   char ** l_p;

   l_p_file = _STRING_cvt_bbhutil(p_file,len_p_file);
   l_name = _STRING_cvt_bbhutil(name,len_name);
   l_p = _VSTRING_cvt_bbhutil(p,len_p,*p_size);

   _mfi_rval = get_str_param(
      l_p_file,
      l_name,
      l_p,
      *p_size      );

   /* p_file is 'const' ... */
   /* name is 'const' ... */
   _VSTRCPY_cvt_bbhutil(p,l_p,len_p,*p_size);


   free(l_p_file);
   free(l_name);
   _free_VSTRING_cvt_bbhutil(l_p,*p_size);

   return _mfi_rval;
}

int do_ivec__(
   int * p_it,
   int * p_niter,
   int * ivec ) {

   int _mfi_rval;
   _mfi_rval = do_ivec(
      *p_it,
      *p_niter,
      ivec      );
   return _mfi_rval;
}

int do_ivec_(
   int * p_it,
   int * p_niter,
   int * ivec ) {

   int _mfi_rval;
   _mfi_rval = do_ivec(
      *p_it,
      *p_niter,
      ivec      );
   return _mfi_rval;
}

void fixup_ivec__(
   int * p_min,
   int * p_max,
   int * p_lev,
   int * ivec ) {

   fixup_ivec(
      *p_min,
      *p_max,
      *p_lev,
      ivec      );
}

void fixup_ivec_(
   int * p_min,
   int * p_max,
   int * p_lev,
   int * ivec ) {

   fixup_ivec(
      *p_min,
      *p_max,
      *p_lev,
      ivec      );
}

void fixup_fvec__(
   double * fv ) {

   fixup_fvec(
      fv      );
}

void fixup_fvec_(
   double * fv ) {

   fixup_fvec(
      fv      );
}

int size_fvec__(
   double * fv ) {

   int _mfi_rval;
   _mfi_rval = size_fvec(
      fv      );
   return _mfi_rval;
}

int size_fvec_(
   double * fv ) {

   int _mfi_rval;
   _mfi_rval = size_fvec(
      fv      );
   return _mfi_rval;
}

double get_fvec__(
   double * fv,
   int * p_i ) {

   double _mfi_rval;
   _mfi_rval = get_fvec(
      fv,
      *p_i      );
   return _mfi_rval;
}

double get_fvec_(
   double * fv,
   int * p_i ) {

   double _mfi_rval;
   _mfi_rval = get_fvec(
      fv,
      *p_i      );
   return _mfi_rval;
}

void gft_close_all__( void  ) {

   gft_close_all(
      );
}

void gft_close_all_( void  ) {

   gft_close_all(
      );
}

void gft_close__(
   char * nm,
   int len_nm ) {

   char * l_nm;

   l_nm = _STRING_cvt_bbhutil(nm,len_nm);

   gft_close(
      l_nm      );

   /* nm is 'const' ... */


   free(l_nm);

}

void gft_close_(
   char * nm,
   int len_nm ) {

   char * l_nm;

   l_nm = _STRING_cvt_bbhutil(nm,len_nm);

   gft_close(
      l_nm      );

   /* nm is 'const' ... */


   free(l_nm);

}

