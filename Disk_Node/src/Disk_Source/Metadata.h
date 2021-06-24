//
// Created by mau on 6/22/21.
//

#ifndef DISK_NODE_METADATA_H
#define DISK_NODE_METADATA_H
#include <iostream>
#include "../../../lib/DataStructures/SimplyList.h"

using namespace std;

class MetaData
{
private:
    string name;
public:
    const string &getName() const {
        return name;
    }

    void setName(const string &newname) {
        MetaData::name = newname;
    }

};
#endif //DISK_NODE_METADATA_H