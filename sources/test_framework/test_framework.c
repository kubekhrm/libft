/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_framework.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfeijoo <cfeijoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 15:22:01 by cfeijoo           #+#    #+#             */
/*   Updated: 2015/02/28 21:48:49 by cfeijoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_test_framework.h>
#include <stdio.h>

static void		close_it()
{
	if (!testing_state.it)
		return;
	if (testing_state.current_it_errors_count)
		printf("  %sIt %s%s%s X %s\n", TST_SLT, TST_NRM, TST_RED, testing_state.it, TST_NRM);
	else
	{	
		printf("  %sIt %s%s", TST_SLT, TST_NRM, testing_state.it);
		printf("%s  ✓%s\n", TST_GRN, TST_NRM);
	}
	testing_state.it = NULL;
	testing_state.current_it_errors_count = 0;
}

static void		close_describe()
{
	close_it();
	testing_state.describe = NULL;
	testing_state.current_describe_errors_count = 0;
}

void			ft_test_describe(const char *name, void (f)())
{
	printf("\n%sDescribe %s%s\n", TST_SLT, TST_NRM, name);
	f();
	close_describe();
}

void			ft_test_it(const char *name)
{
	close_it();
	testing_state.it = name;
}

void			ft_test_assertion_fail() {
	testing_state.current_describe_errors_count++;
	testing_state.current_it_errors_count++;
}