/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zael-mab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 06:36:09 by zael-mab          #+#    #+#             */
/*   Updated: 2020/02/05 12:07:09 by zael-mab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include "libft/libft.h"
# include <stdarg.h>

# define NOTHING		0b000000000
# define MINES			0b000000001
# define PLUS			0b000000010
# define HASH			0b000000100
# define SPACE			0b000001000
# define ZERO			0b000010000

# define MNS(c)			(c - '0')
# define PLS(c)			(c + '0')

typedef struct			s_data
{
	int					jumper;
	int					ps;
	int					flg;
	int					pres;
	int					h_flags;
	int					l_flags;
	int					fw0;
	int					fw1;
	int					huck;
	char				*f_lags;
	char				*types;
	char				*ar;
}						t_data;

typedef struct			s_cnt
{
	char				*arr;
	long double			c;
	double				s;
	int					i;
	int					total;
	int					x;
	int					a;
	int					b;
	char				*res;
	char				*z;
	char				*mantissa;
	char				*exp;
	int					sign;
	char				lg;
	int					u;
}						t_cnt;

typedef struct			s_lol
{
	int					y;
	int					x;
	int					d;
	int					tp;
	int					z;
	int					k;
	int					r;
	int					p;
	char				*vf;
	char				*res;
	char				*tmp;
}						t_lol;

typedef struct			s_ayy
{
	char				*rar;
	char				*tmp;
	char				a;
	unsigned long long	n;
	int					w0;
	int					w1;
	int					y0;
	int					y1;
	int					y2;
	int					carry;
	int					looper;
	long long			sum;
}						t_ayy;

void					z_data_flg(t_data *data, t_lol lol, const char *ar);
void					a01_prim(t_data *data, t_cnt *cnt, t_lol *lol,
		const char *ar);
void					a04_prim(t_data data, t_cnt *cnt, va_list vl,
		const char *f);
void					a04_p(t_data data, t_cnt *cnt);
void					a02(t_data *data, t_lol lol, const char *ar);
void					it_b09(unsigned long long value, int base, t_ayy *ayy);
void					dd(int i, int j, char b);
void					a06_prim(t_data data, t_cnt *cnt);
void					a10prim(t_data data, t_cnt *cnt, const char *ar,
		va_list vl);
void					a11d_prim(t_data data, const char *ar, t_cnt *cnt);
void					a10prim0(t_data data, t_cnt *cnt, const char *ar);
void					z_data_huck(t_data *data, t_lol lol, const char *ar);
void					z_data_fw(t_data *data, t_lol lol, const char *ar);
void					z_data_hl(t_data *data, t_lol lol, const char *ar);
void					z_06_str1(t_data data, t_cnt *cnt, t_ayy *ayy);
void					z_06_str2(t_data data, t_cnt *cnt, t_ayy *ayy);
void					a10primp(t_ayy ayy, t_data data, t_cnt *cnt,
		const char *ar);
int						pn(long long cnt);
int						pn_u(unsigned long long cnt);
void					f_loat(const char *ar, t_data data, t_cnt *cnt,
		va_list vl);
long double				c_onvert(const char *bnr);
long long				ft_pow(long long x, long long y);
char					*get_bits(char *ptr, size_t size);
char					*ft_sum(char *ar, char *ax);
void					ft_sump(char *ax, char *ar, t_ayy *ayy);
char					*ft_powx(char *x, int y);
char					*ft_multi(char *ar, char *ax);
void					ft_multi0(char *ar, char *ax, t_ayy *ayy);
char					*ft_strev (char *x);
char					*ignor(char *r);
char					*l_exponnt(char *ar, int x, t_lol *lol);
int						ft_printf (const char *f, ...);
void					xxp_0(t_ayy ayy, t_data data, t_cnt *cnt,
		const char *ar);
void					xxp_1(t_ayy ayy, t_data data, t_cnt *cnt,
		const char *ar);
void					xxp_2(t_ayy ayy, t_data data, t_cnt *cnt);
void					xxp_3(t_ayy ayy, t_data data, t_cnt *cnt);
void					xxp_1p(t_ayy ayy, t_data data, t_cnt *cnt,
		const char *ar);
void					xxp2_p(t_ayy ayy, t_data data, t_cnt *cnt);
void					xxp3_p(t_ayy ayy, t_data data, t_cnt *cnt,
		const char *ar);
void					z_06_sp(t_data data, t_cnt *cnt, t_ayy *ayy);
void					diu_0(t_data data, const char *ar, t_cnt *cnt,
		t_ayy *ayy);
void					diu_1(t_data data, t_cnt *cnt, t_ayy *ayy);
void					diu_2(t_data data, t_cnt *cnt, t_ayy *ayy);
void					diu_11(t_data data, const char *ar, t_cnt *cnt,
		t_ayy *ayy);
void					diu_3(t_data data, t_cnt *cnt,
		t_ayy *ayy);
void					o_01(t_ayy ayy, t_data data, t_cnt *cnt,
		const char *ar);
void					o_02(t_ayy ayy, t_data data, t_cnt *cnt);
void					o_03(t_ayy ayy, t_data data, t_cnt *cnt);
int						ft_abs(int x);
void					f_loat0(t_cnt *cnt, t_lol *lol);
void					f_loat2(const char *ar, t_data data, t_cnt *cnt,
		t_lol *lol);
void					f_loat1(t_data data, t_cnt *cnt, t_lol *lol);
void					f_loat3(const char *ar, t_data data, t_cnt *cnt,
		t_lol *lol);
void					f_loat4(const char *ar, t_data data, t_cnt *cnt,
		t_lol *lol);
void					f_loat5(t_data data, t_cnt *cnt, t_lol *lol);
void					f_loat6(const char *ar, t_data data, t_cnt *cnt,
		t_lol *lol);
void					f_loat3p(const char *vf, t_data data, t_cnt *cnt,
		t_lol *lol);
int						f_loat11(t_data data, t_cnt *cnt, t_lol *lol);
void					f_loat00(int a, t_lol *lol, t_cnt *cnt, char *vf);
void					float_p0(const char *ar, t_data data, t_cnt *cnt,
		t_lol *lol);
char					*powx0(char *w, int y, char *x, char *str);
void					f_lags0(t_data data, t_cnt *cnt, va_list vl);
void					f_lags1(t_data data, t_cnt *cnt, va_list vl);
void					print_typs(t_data data, const char *f, t_cnt *cnt,
		va_list vl);
int						trt(t_cnt *cnt, t_lol *lol, const char *f, va_list vl);
void					f_3bita(t_data data, t_cnt *cnt);
int						f_loatp(const char *ar, t_data data,
		t_cnt *cnt, t_lol *lol);
void					flgas(t_data data, t_cnt *cnt);
void					f_4bita(t_data data, t_cnt *cnt);

#endif
