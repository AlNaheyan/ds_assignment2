#include "sequence3.h"
#include <iostream>
#include <cstdlib> 


namespace main_savich_5 {
    
    sequence::seqeuence() {
        head_ptr = nullptr; 
        tail_ptr = nullptr;
        cursor = nullptr;
        precursor = nullptr;
        used = 0;
    }

    seqeuence::sequence(const sequence& source) {
        list_copy(source.head_ptr, head_ptr, tail_ptr);
    }



    void sequence::start() {
        cursor = head_ptr;
        precursor = nullptr;
    }

    void sequence::advance() {
        precursor = cursor;
        cursor = cursor->link();
    }

    void sequence::insert(const value_type& entry) {
        if (cursor != nullptr || cursor = head_ptr) {
            list_head_insert(head_ptr, entry);
            cursor = head_ptr;
        }
    }

    void sequence::attach(const value_type& entry) {
        
    }
}


