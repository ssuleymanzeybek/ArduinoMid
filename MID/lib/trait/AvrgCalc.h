//
// Created by Angel Zaprianov on 16.9.2016 г..
//

#ifndef ARDUINOMID_AVRGCALC_H
#define ARDUINOMID_AVRGCALC_H

unsigned long averageAllVssValues = 0;
unsigned long averageAllRpmValues;
int maxReachedSpeed = 0;


int long averageDivider = 0;

void sensAvr(void) {
    averageAllVssValues += CUR_VSS;
    if (CUR_RPM > 0) {
        averageAllRpmValues += CUR_RPM;
    }
    averageDivider += 1;
    //
    //  Resolve maximum speed reached
    if (maxReachedSpeed < CUR_VSS)
        maxReachedSpeed = CUR_VSS;
}

/**
 * Gets Average Vss
 */
int getAverageVss() {
    return int(averageAllVssValues / averageDivider);
}

/**
 * Gets Average Rpm
 */
int getAverageRpm() {
    return int(averageAllRpmValues / averageDivider);
}

int getMaximumVss() {
    return maxReachedSpeed;
}


#endif //ARDUINOMID_AVRGCALC_H