#ifndef BSTNODE_H
#define BSTNODE_H

//using namespace std;

//Plantilla que define que el nodo del árbol necesita asociar una llave a un valor de E type. Como si fuera un Map.
template <typename Key, typename E>

//Clase nodo para el árbol de búsqueda binaria
class BSTNode
{
public:
    //Constructor
    BSTNode(BSTNode<Key, E>* pLeft = 0, BSTNode<Key, E>* pRight = 0) {
        left = pLeft;
        right = pRight;
    }

    //Constructor
    BSTNode(Key pKey, E pElement, BSTNode<Key, E>* pLeft = 0, BSTNode<Key, E>* pRight = 0) {
        key = pKey;
        element = pElement;
        left = pLeft;
        right = pRight;
    }

    //Destructor
    ~BSTNode(){}


    //Devuelve el elemento de este nodo
    E getElement(){
        return element;
    }

    //Pone un elemento a este nodo
    void setElement(E pElement) {
        element = pElement;
    }

    //Devuelve la llave de este nodo
    Key getKey() {
        return key;
    }

    //Pone una llave a este nodo
    void setKey(Key pKey) {
        key = pKey;
    }

    //Devuelve el hijo izquierdo de este nodo
    BSTNode<Key, E>* getLeft() {
        return left;
    }

    //Pone un nodo izquierdo a este nodo
    void setLeft(BSTNode<Key, E>* pLeft) {
        left = pLeft;
    }

    //Obtiene el nodo derecho de este nodo
    BSTNode<Key, E>* getRight() {
       return right;
   }

   //Pone un nodo derecho a este nodo
   void setRight(BSTNode<Key, E>* pRight) {
       right = pRight;
   }

   //Devuelve true si el nodo es hoja (no tiene hijo izquierdo ni hijo derecho)
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
