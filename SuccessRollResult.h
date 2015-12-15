/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   SuccessRollResult.h
 * Author: ltaveira
 *
 * Created on December 10, 2015, 6:48 PM
 */

#ifndef SUCCESSROLLRESULT_H
#define SUCCESSROLLRESULT_H

class SuccessRollResult {
private:
    bool _success;
    bool _critical;
    int _margin;
public:

    SuccessRollResult(bool success, bool critical, int margin) : _success(success), _critical(critical),
            _margin(margin) { }

    bool success() const;
    bool critical() const;
    int margin() const;
    bool operator==(const SuccessRollResult& result) const;
};

#endif /* SUCCESSROLLRESULT_H */

