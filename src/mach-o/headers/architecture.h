//
//  src/mach-o/headers/architecture.h
//  tbd
//
//  Created by inoahdev on 7/18/17.
//  Copyright © 2017 inoahdev. All rights reserved.
//

#pragma once
#include "cputype.h"

namespace macho {
    typedef struct architecture {
        cputype cputype;
        int32_t cpusubtype;

        uint32_t offset;
        uint32_t size;
        uint32_t align;
    } architecture;

    typedef struct architecture_64 {
        cputype cputype;
        int32_t cpusubtype;

        uint64_t offset;
        uint64_t size;
        uint32_t align;
    } architecture_64;
}
