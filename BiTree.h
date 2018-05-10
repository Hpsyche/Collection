#ifndef BiTree
#define BiTree_H
const int QueueSize = 10;
struct BiNode
{
	char data;
	BiNode*lchild, *rchild;
};
class BiTree
{
public:
	BiTree() { root = Creat(root); }
	~BiTree() { Release(root); }
	void PreOrder() { PreOrder(root); }
	void InOrder() { InOrder(root); }
	void PostOrder() { PostOrder(root); }
	void LevelOrder();
private:
	BiNode* Q[QueueSize];
	int front, rear;
	BiNode*root;
	BiNode*Creat(BiNode*bt);
	void Release(BiNode*bt);
	void PreOrder(BiNode*bt);
	void InOrder(BiNode*bt);
	void PostOrder(BiNode*bt);
};
#endif