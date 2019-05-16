/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   environment.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 21:10:35 by alan              #+#    #+#             */
/*   Updated: 2019/05/15 16:33:50 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENVIRONMENT_H
# define ENVIRONMENT_H

const char	**g_environ;

const char	*make_env(const char *env_name, const char *env_value);

int			add_env(const char *env);

/*
** Setters
*/

int			set_env_int(const char *env_name, int env_value);
int			set_envn_int(const char *env, int env_namelen, int env_value);
int			set_envi_int(int env_index, int env_value);

int			set_env_str(const char *env_name, const char *env_value);
int			set_envn_str(const char *env, int env_namelen, const char *env_value);
int			set_envi_str(int env_index, const char *env_value);

/*
** Getters
*/

int			get_envi_int(int env_index);

const char	*get_env_value(const char *env_name);
const char	*get_envn_value(const char *env_name, int env_namelen);
const char	*get_envi_value(int env_index);

int			get_env_index(const char *env_name);
int			get_envn_index(const char *env, int env_namelen);


int			get_valid_env_len(const char *env);
int			get_valid_envn_len(const char *env, int env_len);

int			validate_env_name(const char *command);
int			validate_envn_name(const char *env, int env_namelen);
int			validate_env(const char *command);

#endif
