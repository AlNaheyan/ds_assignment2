#include "sequence3.h"
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
    }

    // Continue the copy construcurer and create a deconstrutor

    sequence::~sequence() {
        // deconstrtor
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
        }
        ++usedl;
    }

    void sequence::attach(const value_type& entry) {
        if (cursor == NULL) {
            list_head_insert(head_ptr, entry)
            cursor = head_ptr;
            tail_ptr = head_ptr;
        } else {
            list_insert(tail_ptr, entry);
            precursor = tail_ptr;
            tail_ptr = tail_ptr->link();
        }
    }

    void sequence::remove_current() {
        list_remove(precursor);
        cursor = precursor->link();
        --used;
    }

    const bool sequence::is_item() {
        return 
    }
}


