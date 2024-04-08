struct QueNode {
    struct TreeNode* p;
    struct QueNode* next;
};

void init(struct QueNode** p, struct TreeNode* t) {
    (*p) = (struct QueNode*)malloc(sizeof(struct QueNode));
    (*p)->p = t;
    (*p)->next = NULL;
}

int maxDepth(struct TreeNode* root) {
    if (root == NULL) return 0;
    struct QueNode* left, * right;
    init(&left, root);
    right = left;
    int ans = 0, sz = 1, tmp = 0;
    while (left != NULL) {
        tmp = 0;
        while (sz > 0) {
            if (left->p->left != NULL) {
                init(&right->next, left->p->left);
                right = right->next;
                tmp++;
            }
            if (left->p->right != NULL) {
                init(&right->next, left->p->right);
                right = right->next;
                tmp++;
            }
            left = left->next;
            sz--;
        }
        sz += tmp;
        ans++;
    }
    return ans;
}

