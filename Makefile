NAME = libftprintf.a
CORE = ft_c_exe.c ft_d_i_exe.c ft_types.c digit_d_i/ft_num_len.c digit_d_i/ft_putnbr.c ft_flags_exe.c ft_p_exe.c\
		ft_printf.c ft_putstr.c ft_u_exe.c ft_s_exe.c ft_putnbr16.c ft_percent.c ft_strlen.c ft_struct_initialization.c\
		 ft_x_exe.c ft_xX_exe.c digit_d_i/ft_width_calculation.c digit_d_i/ft_accuracy_calculation.c\
		  digit_d_i/ft_with_dot.c digit_d_i/ft_small_len.c digit_d_i/ft_big_len.c digit_d_i/ft_without_dot.c\
		  digit_d_i/ft_print_minus_zero_num.c digit_d_i/ft_print_num_space.c digit_d_i/ft_print_space_num.c\
		  digit_d_i/ft_print_spase.c digit_d_i/ft_negative_num.c digit_d_i/ft_print_zero.c digit_u/ft_with_dot_u.c\
		  digit_u/ft_small_len_u.c digit_u/ft_big_len_u.c digit_u/ft_without_dot_u.c\
		  digit_u/ft_print_minus_zero_num_u.c digit_u/ft_print_num_space_u.c digit_u/ft_print_space_num_u.c\
		  digit_u/ft_num_len_u.c digit_u/ft_putnbr_u.c letter_c/ft_print_minus_zero_num_c.c\
		  letter_c/ft_print_num_space_c.c letter_c/ft_print_space_num_c.c letter_c/ft_without_dot_c.c\
		  letter_c/ft_with_dot_c.c letter_c/ft_big_len_c.c letter_c/ft_small_len_c.c str_s/ft_big_len_s.c\
		  str_s/ft_print_minus_zero_num_s.c str_s/ft_print_num_space_s.c str_s/ft_print_space_num_s.c\
		  str_s/ft_small_len_s.c str_s/ft_with_dot_s.c str_s/ft_without_dot_s.c str_s/ft_putstr_s.c\
		  str_s/ft_print_minus_zero_num_s_accur.c str_s/ft_print_num_space_s_accur.c\
		  str_s/ft_print_space_num_s_accur.c digit_x_X/ft_print_num_space_xX.c digit_x_X/ft_print_space_num_x.c\
		  digit_x_X/ft_print_space_num_xX.c digit_x_X/ft_print_minus_zero_num_x.c\
		  digit_x_X/ft_print_minus_zero_num_xX.c digit_x_X/ft_print_num_space_xX.c\
		  digit_x_X/ft_print_num_space_x.c digit_x_X/ft_big_len_x.c digit_x_X/ft_small_len_x.c\
		  digit_x_X/ft_with_dot_x.c digit_x_X/ft_without_dot_x.c digit_x_X/ft_putnbr16_len.c\
		  digit_x_X/ft_with_dot_xX.c digit_x_X/ft_without_dot_xX.c digit_x_X/ft_big_len_xX.c\
		  digit_x_X/ft_small_len_xX.c pointer/ft_big_len_p.c pointer/ft_print_minus_zero_num_p.c\
		  pointer/ft_print_space_num_p.c pointer/ft_small_len_p.c pointer/ft_with_dot_p.c pointer/ft_without_dot_p.c\
		  pointer/ft_print_num_space_p.c pointer/ft_putnbr16_p.c pointer/ft_putnbr16_len_p.c pointer/ft_num_len_p.c

OBJ = $(patsubst %.c,%.o,$(CORE))

D_FILES = $(patsubst %.c,%.d,$(CORE))

FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $?

%.o : %.c
	gcc $(FLAGS) -c $< -o $@ -MD

include $(wildcard $(D_FILES))

clean:
	rm -f $(OBJ) $(D_FILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
