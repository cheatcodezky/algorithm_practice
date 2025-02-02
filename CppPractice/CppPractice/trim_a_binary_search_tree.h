#pragma once
#include<stdio.h>
using namespace std;

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
	
};
class Solution {
public:
	TreeNode* trimBST(TreeNode* root, int L, int R) {
		if (root == NULL)
			return NULL;

		if (root->val > R || root->val < L) {
			TreeNode* tmpRoot = trimBST(root->left, L, R);
			if (tmpRoot == NULL)
				tmpRoot = trimBST(root->right, L, R);
			root = tmpRoot;
		}
		else {
			root->left = trimBST(root->left, L, R);
			root->right = trimBST(root->right, L, R);
		}

		return root;


	}
};