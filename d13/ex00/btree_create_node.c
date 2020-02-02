/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schapuis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/08/29 18:38:39 by schapuis          #+#    #+#             */
/*   Updated: 2013/08/29 18:52:43 by schapuis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "ft_btree.h"

t_btree	*btree_create_node(void *item)
{
	t_btree	*btree;

	btree = NULL;
	btree = (t_btree*)malloc(sizeof(t_btree));
	if (btree)
	{
		btree->left = 0;
		btree->right = 0;
		btree->item = item;
	}
	return (btree);
}



/* ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */

t_btree		*btree_create_node(void *item)
{
	t_btree		*tree;

	tree = (t_btree*)malloc(sizeof(t_btree));
	if (tree)
	{
		tree->left = 0;
		tree->right = 0;
		tree->item = item;
	}
	return (tree);
}

/* ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */


t_btree		*btree_create_node(void *item)
{
	t_btree	*btree;

	btree = (t_btree *)malloc(sizeof(t_btree));
	if (btree)
	{
		btree->left = NULL;
		btree->right = NULL;
		btree->item = item;
	}
	return (btree);
}

/* ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */
