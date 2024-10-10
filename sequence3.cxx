#include "sequence3.h"
#include "node1.h"
#include <iostream>
#include <cstdlib> 


namespace main_savich_5 {
    
    sequence::seqeuence() {
        head_ptr = NULL; 
        tail_ptr = NULL;
        cursor = NULL;
        precursor = NULL;
        used = 0;
    }

    seqeuence::sequence(const sequence& source) {
        list_copy(source.head_ptr, head_ptr, tail_ptr);
        used = source.user;
        
        if (source.cursor == NULL) {
            cursor = NULL;
            precursor = NULL;
        } else {
            size_t cursor_position = 1;
            for (node* temp = source.head_ptr; temp != source.cursor; temp = temp->link()) {
                ++cursor_position;
            }

            cusror = list_locate(head_ptr, cursor_position);
            precursor = (cursor_position == 1) ? NULL : list_locate(head_ptr, cursor_position - 1)
        }
    }

    // Continue the copy construcurer and create a deconstrutor

    sequence::~sequence() {
        list_clear(head_ptr);
        used = 0;
    }


    void sequence::start() {
        cursor = head_ptr;
        precursor = NULL;
    }

    void sequence::advance() {
        precursor = cursor;
        cursor = cursor->link();
    }

    void sequence::insert(const value_type& entry) {
        if (cursor != NULL || cursor == head_ptr) {
            list_head_insert(head_ptr, entry);
            cursor = head_ptr;
            if (used == 0) {
                tail_ptr = head_ptr;
            }
        } else {
            list_insert(precursor, entry);
            cursor = precursor->link();
        }
        ++used;
    }

    void sequence::attach(const value_type& entry) {
        if (cursor == NULL) {
            if (head_ptr == NULL) {
                list_head_insert(head_ptr, entry)
                cursor = head_ptr;
                tail_ptr = head_ptr;
            } else {
                list_insert(tail_ptr, entry);
                cursor = tail_ptr->link();
                tail_ptr = cursor;
            }
        } else {
            list_insert(cursor, entry);
            precursor = cursor;
            cursor = cursor->link();
            if (cursor->link() ==NULL) {
                tail_ptr = cursor;
            }
        }
        ++used;
    }

    void sequence::remove_current() {
        if (cursor == head_ptr) {
            
        }
        list_remove(precursor);
        cursor = precursor->link();
        --used;
    }

    const bool sequence::is_item() {
        return 
    }
}


