#ifndef BSTNODE_H
#define BSTNODE_H

//using namespace std;

template <typename Key, typename E>

class BSTNode
{
public:
    BSTNode(BSTNode<Key, E>* pLeft = 0, BSTNode<Key, E>* pRight = 0) {
        left = pLeft;
        right = pRight;
    }

    BSTNode(Key pKey, E pElement, BSTNode<Key, E>* pLeft = 0, BSTNode<Key, E>* pRight = 0) {
        key = pKey;
        element = pElement;
        left = pLeft;
        right = pRight;
    }

    ~BSTNode(){}

    E getElement(){
        return element;
    }

    void setElement(E pElement) {
        element = pElement;
    }

    Key getKey() {
        return key;
    }

    void setKey(Key pKey) {
        key = pKey;
    }

    BSTNode<Key, E>* getLeft() {
        return left;
    }

    void setLeft(BSTNode<Key, E>* pLeft) {
        left = pLeft;
    }

    BSTNode<Key, E>* getRight() {
       return right;
   }

   void setRight(BSTNode<Key, E>* pRight) {
       right = pRight;
   }

   bool isLeaf() {
       return (left == 0) && (right == 0);
   }


private:
    Key key;
    E element;
    BSTNode<Key, E>* left;
    BSTNode<Key, E>* right;

};

#endif // BSTNODE_H
