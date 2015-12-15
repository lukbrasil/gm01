/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   ContestRollResult.h
 * Author: ltaveira
 *
 * Created on December 15, 2015, 2:48 PM
 */

#ifndef CONTESTROLLRESULT_H
#define CONTESTROLLRESULT_H

class ContestRollResult {
private:
    int result;
    int margin;
public:
    ContestRollResult(int result, int margin);

    bool operator==(const ContestRollResult& contestResult) const;
};

#endif /* CONTESTROLLRESULT_H */

