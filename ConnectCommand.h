//
// Created by eti on 12/19/18.
//

#ifndef UNTITLED6_CONNECTCOMMAND_H
#define UNTITLED6_CONNECTCOMMAND_H

#include "Command.h"

class ConnectCommand : public Command {
public:
    ConnectCommand();
    virtual int execute();
    virtual void doCommand(string command);
};
#endif //UNTITLED6_CONNECTCOMMAND_H
