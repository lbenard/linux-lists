/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <lbenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 14:43:39 by lbenard           #+#    #+#             */
/*   Updated: 2019/02/18 20:08:05 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBERTE
** EGALITE
** LIBFT
*/

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdint.h>
# ifdef __linux__
#  include <sys/types.h>
# endif

typedef uint8_t		t_u8;
typedef int8_t		t_i8;
typedef uint16_t	t_u16;
typedef int16_t		t_i16;
typedef uint32_t	t_u32;
typedef int32_t		t_i32;
typedef uint64_t	t_u64;
typedef int64_t		t_i64;

/*
** Memory
*/

void					*ft_memset(void *b, int c, size_t len);
void					ft_bzero(void *s, size_t n);
void					*ft_memcpy(void *dst, const void *src, size_t n);
void					*ft_memccpy(void *dst, const void *src, int c,
	size_t n);
void					*ft_memmove(void *dst, const void *src, size_t len);
void					*ft_memchr(const void *s, int c, size_t n);
int						ft_memcmp(const void *s1, const void *s2, size_t n);
void					*ft_memalloc(size_t size);
void					ft_memdel(void **ap);

/*
** Strings
*/

size_t					ft_strlen(const char *s);
size_t					ft_strnlen(const char *s, size_t maxlen);
char					*ft_strdup(const char *s1);
char					*ft_strndup(const char *s1, size_t n);
char					*ft_strcpy(char *dst, const char *src);
char					*ft_strncpy(char *dst, const char *src, size_t len);
char					*ft_strcat(char *s1, const char *s2);
char					*ft_strncat(char *s1, const char *s2, size_t n);
size_t					ft_strlcat(char *dst, const char *src, size_t size);
char					*ft_strchr(const char *s, int c);
char					*ft_strrchr(const char *s, int c);
char					*ft_strstr(const char *haystack, const char *needle);
char					*ft_strnstr(const char *haystack, const char *needle,
	size_t len);
int						ft_strcmp(const char *s1, const char *s2);
int						ft_strncmp(const char *s1, const char *s2, size_t n);
char					*ft_strnew(size_t size);
void					ft_strdel(char **as);
void					ft_strclr(char *s);
void					ft_striter(char *s, void (*f)(char*));
void					ft_striteri(char *s, void (*f)(unsigned int, char*));
char					*ft_strmap(const char *s, char (*f)(char));
char					*ft_strmapi(const char *s,
	char (*f)(unsigned int, char));
int						ft_strequ(const char *s1, const char *s2);
int						ft_strnequ(const char *s1, const char *s2, size_t n);
char					*ft_strsub(const char *s, unsigned int start,
	size_t len);
char					*ft_strjoin(const char *s1, const char *s2);
char					*ft_strtrim(const char *s);
char					**ft_strsplit(const char *s, char c);
size_t					ft_strcount(const char *s, char c);
const char				*ft_getline(const char *file, size_t line);
const char				*ft_skipchr(const char *str, char skip);

/*
** is*
*/

int						ft_isalpha(int c);
int						ft_isdigit(int c);
int						ft_isalnum(int c);
int						ft_isascii(int c);
int						ft_isprint(int c);
int						ft_isspace(int c);
int						ft_isupper(int c);
int						ft_islower(int c);

/*
** to*
*/

int						ft_toupper(int c);
int						ft_tolower(int c);

/*
** Conversion & comparisons
*/

int						ft_atoi(const char *str);
double					ft_atof(const char *str);
char					*ft_itoa(int n);
int						ft_abs(int i);
int						ft_min(int a, int b);
int						ft_max(int a, int b);
size_t					ft_nblen(int n);

/*
** IO
*/

void					ft_putchar(char c);
void					ft_putstr(const char *s);
void					ft_putendl(const char *s);
void					ft_putnbr(int n);
void					ft_putchar_fd(char c, int fd);
void					ft_putstr_fd(const char *s, int fd);
void					ft_putendl_fd(const char *s, int fd);
void					ft_putnbr_fd(int n, int fd);

/*
** List struct
*/

typedef struct			s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}						t_list;

t_list					*ft_lstnew(void *content, size_t content_size);
t_list					*ft_lstnewcpy(const void *content, size_t content_size);
void					ft_lstdelone(t_list **alst, void (*del)(void*, size_t));
void					ft_lstdel(t_list **alst, void (*del)(void*, size_t));
void					ft_lstadd(t_list **alst, t_list *new);
void					ft_lstiter(t_list *lst, void (*f)(t_list*));
t_list					*ft_lstmap(t_list *lst, t_list *(*f)(t_list*));
char					*ft_lststrjoin(const t_list *lst,
	const char *separator);
t_list					*ft_lstfind(const t_list *lst, const void *to_find,
	int (*cmp)(const void*, const void*));
t_list					*ft_lstcontentfind(const t_list *lst,
	const void *to_find, size_t to_find_size);
t_list					*ft_lstpushback(t_list **list, t_list *new);
t_list					*ft_lstlast(const t_list *list);
void					ft_lstfree(t_list **list);
void					ft_lstremove(t_list **list, t_list *to_remove);

/*
** Linux-like doubly linked lists
*/

typedef struct			s_list_head
{
	struct s_list_head	*prev;
	struct s_list_head	*next;
}						t_list_head;

void					ft_list_init_head(t_list_head *list);
void					ft_list_add(t_list_head *new, t_list_head *prev,
	t_list_head *next);
void					ft_list_add_entry(t_list_head *new, t_list_head *head);
void					ft_list_add_tail(t_list_head *new, t_list_head *head);
void					ft_list_del(t_list_head *prev, t_list_head *next);
void					ft_list_del_entry(t_list_head *entry);
void					ft_list_move(t_list_head *list, t_list_head *head);
void					ft_list_move_tail(t_list_head *list, t_list_head *head);
int						ft_list_is_last(const t_list_head *list,
	const t_list_head *head);
int						ft_list_is_empty(const t_list_head *head);
void					ft_list_foreach(t_list_head *list, void (*fn)());

/*
** C++-like vector
*/

typedef struct			s_vector
{
	size_t	capacity;
	size_t	size;
	void	*data;
}						t_vector;

t_vector				ft_vector(void);
t_vector				ft_vector_data(const void *data, size_t size);
void					ft_vector_reserve(t_vector *vector,
	size_t capacity);
void					ft_vector_push_back(t_vector *vector, const void *data,
	size_t size);
void					ft_vector_free(t_vector *vector);

/*
** GNL
*/

# define BUFF_SIZE 4096
# define READ_ERROR -1
# define READ_FINISH 0
# define LINE_READ 1

typedef struct			s_fd
{
	int		fd;
	char	buffer[BUFF_SIZE + 1];
}						t_fd;

int						get_next_line(int fd, char **line);

/*
** CG
*/

# define PI 3.14159265359
# define LOG2 0.693147

typedef struct			s_usize
{
	size_t	x;
	size_t	y;
}						t_usize;

t_usize					ft_usize(size_t x, size_t y);

typedef struct			s_isize
{
	ssize_t	x;
	ssize_t	y;
}						t_isize;

t_isize					ft_isize(ssize_t x, ssize_t y);

typedef struct			s_vec2i
{
	int	x;
	int	y;
}						t_vec2i;

t_vec2i					ft_vec2i(int x, int y);

typedef struct			s_vec3i
{
	int	x;
	int	y;
	int	z;
}						t_vec3i;

t_vec3i					ft_vec3i(int x, int y, int z);

typedef struct			s_vec4i
{
	int	x;
	int	y;
	int	z;
	int	w;
}						t_vec4i;

t_vec4i					ft_vec4i(int x, int y, int z, int w);

typedef struct			s_vec2f
{
	float	x;
	float	y;
}						t_vec2f;

t_vec2f					ft_vec2f(float x, float y);
float					ft_vec2f_dot(t_vec2f a, t_vec2f b);
t_vec2f					ft_vec2f_scalar(t_vec2f src, float a);

typedef struct			s_vec3f
{
	float	x;
	float	y;
	float	z;
}						t_vec3f;

t_vec3f					ft_vec3f(float x, float y, float z);
float					ft_vec3f_dot(t_vec3f a, t_vec3f b);
t_vec3f					ft_vec3f_scalar(t_vec3f src, float a);
t_vec2f					ft_vec3f_to_vec2f(t_vec3f src);

typedef struct			s_vec4f
{
	float	x;
	float	y;
	float	z;
	float	w;
}						t_vec4f;

t_vec4f					ft_vec4f(float x, float y, float z, float w);
float					ft_vec4f_dot(t_vec4f a, t_vec4f b);
t_vec4f					ft_vec4f_scalar(t_vec4f src, float a);
t_vec3f					ft_vec4f_to_vec3f(t_vec4f src);
t_vec4f					ft_vec3f_to_vec4f(t_vec3f src);

typedef struct			s_vec2d
{
	double	x;
	double	y;
}						t_vec2d;

t_vec2d					ft_vec2d(double x, double y);
double					ft_vec2d_dot(t_vec2d a, t_vec2d b);
t_vec2d					ft_vec2d_scalar(t_vec2d src, double a);

typedef struct			s_vec3d
{
	double	x;
	double	y;
	double	z;
}						t_vec3d;

t_vec3d					ft_vec3d(double x, double y, double z);
double					ft_vec3d_dot(t_vec3d a, t_vec3d b);
t_vec3d					ft_vec3d_scalar(t_vec3d src, double a);
t_vec2d					ft_vec3d_to_vec2d(t_vec3d src);

typedef struct			s_vec4d
{
	double	x;
	double	y;
	double	z;
	double	w;
}						t_vec4d;

t_vec4d					ft_vec4d(double x, double y, double z, double w);
double					ft_vec4d_dot(t_vec4d a, t_vec4d b);
t_vec4d					ft_vec4d_scalar(t_vec4d src, double a);
t_vec3d					ft_vec4d_to_vec3d(t_vec4d src);
t_vec4d					ft_vec3d_to_vec4d(t_vec3d src);

typedef struct			s_vec2ld
{
	long double	x;
	long double	y;
}						t_vec2ld;

t_vec2ld				ft_vec2ld(long double x, long double y);
long double				ft_vec2ld_dot(t_vec2ld a, t_vec2ld b);
t_vec2ld				ft_vec2ld_scalar(t_vec2ld src, long double a);

typedef struct			s_vec3ld
{
	long double	x;
	long double	y;
	long double	z;
}						t_vec3ld;

t_vec3ld				ft_vec3ld(long double x, long double y, long double z);
long double				ft_vec3ld_dot(t_vec3ld a, t_vec3ld b);
t_vec3ld				ft_vec3ld_scalar(t_vec3ld src, long double a);
t_vec2ld				ft_vec3ld_to_vec2ld(t_vec3ld src);

typedef struct			s_vec4ld
{
	long double	x;
	long double	y;
	long double	z;
	long double	w;
}						t_vec4ld;

t_vec4ld				ft_vec4ld(long double x, long double y,
	long double z, long double w);
long double				ft_vec4ld_dot(t_vec4ld a, t_vec4ld b);
t_vec4ld				ft_vec4ld_scalar(t_vec4ld src, long double a);
t_vec3ld				ft_vec4ld_to_vec3ld(t_vec4ld src);
t_vec4ld				ft_vec3ld_to_vec4ld(t_vec3ld src);

typedef union			u_mat3
{
	struct				s_mat3_data
	{
		float	m00;
		float	m01;
		float	m02;
		float	m10;
		float	m11;
		float	m12;
		float	m20;
		float	m21;
		float	m22;
	}					d;
	float				m[3][3];
}						t_mat3;

t_mat3					ft_mat3(void);
t_mat3					ft_mat3_identity(void);
void					ft_print_mat3(t_mat3 *mat);

t_mat3					ft_mat3_x_mat3(t_mat3 a, t_mat3 b);
t_vec3f					ft_mat3_x_vec3(t_mat3 a, t_vec3f b);

typedef union			u_mat4
{
	struct				s_mat4_data
	{
		float	m00;
		float	m01;
		float	m02;
		float	m03;
		float	m10;
		float	m11;
		float	m12;
		float	m13;
		float	m20;
		float	m21;
		float	m22;
		float	m23;
		float	m30;
		float	m31;
		float	m32;
		float	m33;
	}					d;
	float				m[4][4];
}						t_mat4;

t_mat4					ft_mat4(void);
t_mat4					ft_mat4_identity(void);
void					ft_print_mat4(t_mat4 *mat);

t_mat4					ft_mat4_x_mat4(t_mat4 a, t_mat4 b);
t_vec4f					ft_mat4_x_vec4(t_mat4 a, t_vec4f b);
t_mat4					ft_mat4_translation(t_vec3f translation);
t_mat4					ft_mat4_scaling(t_vec3f scaling);
t_mat4					ft_mat4_rotation(t_vec3f rotation);

t_mat4					ft_mat4_orthographic_projection(void);
t_mat4					ft_mat4_perspective_projection(void);

typedef struct			s_rgb
{
	t_u8	r;
	t_u8	g;
	t_u8	b;
}						t_rgb;

t_rgb					ft_rgb(t_u8 r, t_u8 g, t_u8 b);
t_u32					ft_rgb_to_int(t_rgb color);
t_rgb					ft_int_to_rgb(t_u32 color);

typedef struct			s_hsv
{
	float	h;
	float	s;
	float	v;
}						t_hsv;

t_hsv					ft_hsv(float h, float s, float v);
t_rgb					ft_hsv_to_rgb(t_hsv color);

#endif
