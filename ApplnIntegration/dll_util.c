#include "dll.h"
#include <stdlib.h>
#include <memory.h>

/*More functions*/
int  /*return 0 on success and -1 on failure*/
remove_data_from_dll_by_data_ptr (dll_t *dll, void *data){
    if (!dll || !data)
        return -1;
    dll_node_t* node = dll->head;
    while(node) {
        if (node->data == data) {
            if (!node->left) {
                dll->head = node->right;
            }
            else {
                node->left->right = node->right;
            }
            free(node);
            return 0;
        }
    }
    return -1;
}

/*return 0 if empty, -1 if not empty*/
int
is_dll_empty (dll_t *dll){
    return (dll->head)? -1: 0;
    // return 0;
}

/* delete all nodes from a dll, but do not free appln data*/
void
drain_dll (dll_t *dll){
    dll->head = NULL;

}

