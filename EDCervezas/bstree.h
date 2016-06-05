#ifndef BSTREE_H
#define BSTREE_H

#include "bstnode.h"
#include "stdexcept"

using namespace std;

template <typename Key, typename E>

class BSTree{
public:
    E find(Key pKey) {
        return findAux(root, pKey);
    }

    void insert(Key pKey, E pElement) {
        root = insertAux(root, pKey, pElement);
    }

    E remove(Key pKey) {
        E result = find(pKey);
        root = removeAux(root, pKey);
        return result;
    }


private:
    BSTNode<Key, E>* root;

    E findAux(BSTNode<Key, E>* pRoot, Key pKey) throw (runtime_error) {
        if (pRoot == 0) {
            throw runtime_error("Key not found.");
        }
        if (pKey == pRoot->getKey()) {
            return pRoot->getElement();
        }
        if (pKey < pRoot->getKey()) {
            return findAux(pRoot->getLeft(), pKey);
        } else {
            return findAux(pRoot->getRight(), pKey);
        }
    }

    BSTNode<Key, E>* insertAux(BSTNode<Key, E>* pRoot, Key pKey, E pElement) {
        if (pRoot == NULL) {
            return new BSTNode<Key, E>(pKey, pElement);
        }
        if (pKey < pRoot->getKey()) {
            pRoot->setLeft(insertAux(pRoot->getLeft(), pKey, pElement));
            return pRoot;
        } else {
            pRoot->setRight(insertAux(pRoot->getRight(), pKey, pElement));
            return pRoot;
        }
    }

    BSTNode<Key, E>* removeAux(BSTNode<Key, E>* pRoot, Key pKey) throw (runtime_error) {
        if (pRoot == NULL) {
            throw runtime_error("Key not found.");
        }
        if (pKey < pRoot->getKey()) {
            pRoot->setLeft(removeAux(pRoot->getLeft(), pKey));
            return pRoot;
        }
        if (pKey > pRoot->getKey()) {
            pRoot->setRight(removeAux(pRoot->getRight(), pKey));
            return pRoot;
        } else {
            if (pRoot->isLeaf()) {
                delete pRoot;
                return NULL;
            }
            if (pRoot->childrenCount() == 1) {
                BSTNode<Key, E>* temp = pRoot->getUniqueChild();
                delete pRoot;
                return temp;
            } else {
                BSTNode<Key, E>* successor = pRoot->getSuccessor();
                swap(pRoot, successor);
                if (pRoot->getRight() == successor) {
                    pRoot->setRight(removeAux(successor, pKey));
                } else {
                    BSTNode<Key, E>* succesorParent = pRoot->getRight();
                    while (succesorParent->getLeft() != successor) {
                        succesorParent = succesorParent->getLeft();
                    }
                    succesorParent->setLeft(removeAux(successor, pKey));
                }
                return pRoot;
            }
        }
    }
};


#endif // BSTREE_H
