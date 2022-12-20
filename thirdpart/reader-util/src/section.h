//
// Created by hwf on 2022/12/20.
//

#ifndef PE_READER_SECTION_H
#define PE_READER_SECTION_H

#include "./content.h"

namespace reader_util {
    /**
     * For now, don't support resize or dynamic change fields.
     */
    class Section: public Content {
    public:
        Section(int size);
        void read(std::istream in);

    };
}


#endif //PE_READER_SECTION_H
