//
// Created by Angel Zaprianov on 27.6.2016 г..
//

#ifndef ARDUINOMID_CONSUMPTION_H
#define ARDUINOMID_CONSUMPTION_H


const int ConsumptionCalibrationReadingsFuel = 10;
const int ConsumptionCalibrationReadingsDistance = 9;


//
// Common Air/Fuel Ratios:
//
//    Natural gas: 17.2
//    Gasoline: 14.7
//    Propane: 15.5
//    Ethanol: 9
//    Methanol: 6.4
//    Hydrogen: 34
//    Diesel: 14.6
//
//
// 56 litres ÷ 800km = 0.07.
// 0.07 x 100 = 7.0 litres (ℓ) per 100 km.
// Therefore, the fuel consumption for that driving period would be 7ℓ/100km

float TTL_TLH;
float CUR_LPH;
//
// Trip consumption
float CUR_TLH;

float consumptionBankCalculator = 0;
int long consumptionBankDividerHits = 0;

static int getVolumetricEfficiency(int rpm_var);


float getUsedFuel() {
    return 0;
}
// airValue // Naliagane  kPa // давление впускного коллектора // Intake air


/**
 *  Gets consumption short wave
 */
float currentShortWaveConsumptionContainer = 0;
int currentShortWaveDividerHandler = 0;

float getShortWaveConsumption(float currentLitersPerHour) {

    //
    // Add litters per hour in shot amplitude
    currentShortWaveConsumptionContainer = currentShortWaveConsumptionContainer + currentLitersPerHour;

    // At 24 * 1000
    // Check long time collection to remove older data
    if (currentShortWaveDividerHandler >= 24000) {
        currentShortWaveDividerHandler = 0;
        //
        // Lower collected data to be more precise
        consumptionBankDividerHits = consumptionBankDividerHits / 2;
        currentShortWaveConsumptionContainer = currentShortWaveConsumptionContainer / 2;
    }

    //
    // Calculate average consumption
    float averageWaveConsumption = currentShortWaveConsumptionContainer / consumptionBankDividerHits;

    //
    // At lower consumption be more precise
    if (averageWaveConsumption < 10 && CUR_RPM > 500) {
        currentShortWaveConsumptionContainer = averageWaveConsumption;
    }

    //
    // Increase thousand loop divider
    if (ampInt.isMax()) {
        currentShortWaveDividerHandler++;
    }

    //
    // Consumption
    consumptionBankDividerHits++;
    return currentShortWaveConsumptionContainer;
}

double short_term_val = 0.78125;

int ls_term_val;
byte fss_val = 0;
int airTemp = 90;

/**
 * gets Instant consumption
 */
void sensCon() {

    double airValue = (CUR_ECU * 16.38375 /* 32.7675*/);// there are two vendor data in single signal

    double IMAP, MAF, FuelFlowGramsPerSecond, FuelFlowLitersPerSecond, termvalue;

    double VolumetricEfficiency = getVolumetricEfficiency(CUR_RPM);



    termvalue = CUR_ECU * 0.78125;

    IMAP = double(CUR_RPM * airValue) / double(airTemp + 273.15);
    MAF = double(IMAP / 120.0) * double(double(VolumetricEfficiency * VEC_FUL_RT) / 100.0) * CON_ENG_CC * 28.9644 /
          8.314472;

    FuelFlowGramsPerSecond = double(MAF / AirFuelRatio) * double(100.0 + termvalue) / 100.0;

    // Переводим граммы бензина в литры
    FuelFlowLitersPerSecond = FuelFlowGramsPerSecond / FuelDensityGramsPerLiter;

    CUR_LPH = float(FuelFlowLitersPerSecond * 3600.0);
    //
/*    consumptionBankDividerHits++;
    // Ковертирование литров в час
    consumptionBankCalculator = consumptionBankCalculator + CUR_LPH;
    //
    // Trip consumption detection
    if (CUR_RPM > 500) {
        CUR_TLH = consumptionBankCalculator / consumptionBankDividerHits;
    }*/


    CUR_TLH = getShortWaveConsumption(CUR_LPH);
}


/**
 *
 */
float getInstCons() {
    return CUR_TLH;
}

float getTripCons() {


    float dist = getConsumptionDistance() / 10;
    float result = (float(dist / CUR_TLH) * 100) / 100;

    if (CUR_TLH <= 0) {
        return (float) 0;
    }

    return result;
}

float getTotalCons() {
    return TTL_TLH;
}

/**
 * @deprecated ECU signal gives this value
 * volumetric efficiency measured in percent
 */
static int getVolumetricEfficiency(int rpm_var) {
    int VE = 0;   // VE -  volumetric efficiency measured in percent, let's say 80%
    if (rpm_var < 800) {
        VE = 64;
    }
    else {
        if (rpm_var < 1001) {
            VE = 66;
        }
        else {
            if (rpm_var < 1251) {
                VE = 70;
            }
            else {

                if (rpm_var < 1501) {
                    VE = 70;
                }
                else {

                    if (rpm_var < 1751) {
                        VE = 74;
                    }
                    else {

                        if (rpm_var < 2001) {
                            VE = 74;
                        }
                        else {

                            if (rpm_var < 2126) {
                                VE = 76;
                            }
                            else {

                                if (rpm_var < 2251) {
                                    VE = 77;
                                }
                                else {

                                    if (rpm_var < 2376) {
                                        VE = 79;
                                    }
                                    else {

                                        if (rpm_var < 2501) {
                                            VE = 80;
                                        }
                                        else {

                                            if (rpm_var < 2626) {
                                                VE = 82;
                                            }
                                            else {

                                                if (rpm_var < 2751) {
                                                    VE = 82;
                                                }
                                                else {

                                                    if (rpm_var < 2876) {
                                                        VE = 83;
                                                    }
                                                    else {

                                                        if (rpm_var < 3001) {
                                                            VE = 84;
                                                        }
                                                        else {

                                                            if (rpm_var < 3501) {
                                                                VE = 85;
                                                            }
                                                            else {

                                                                if (rpm_var < 4001) {
                                                                    VE = 86;
                                                                }
                                                                else {

                                                                    if (rpm_var < 4501) {
                                                                        VE = 88;
                                                                    }
                                                                    else {

                                                                        if (rpm_var < 5001) {
                                                                            VE = 90;
                                                                        }
                                                                        else {

                                                                            if (rpm_var < 5501) {
                                                                                VE = 93;
                                                                            }
                                                                            else {

                                                                                if (rpm_var < 6001) {
                                                                                    VE = 95;
                                                                                }
                                                                                else {

                                                                                    if (rpm_var < 6501) {
                                                                                        VE = 91;
                                                                                    }
                                                                                    else {

                                                                                        if (rpm_var < 7000) {
                                                                                            VE = 85;
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return VE;
}

/*
 *
 *  *_term_val = 0.00/1.275
 *
   IMAP=double(rpm_var*dvk_var)/double(intake_air_temp_var+273.15);

   MAF=double(IMAP/120.0)*double(double(VE*VE_correct)/100.0)*ED*28.9644/8.314472;


   if (fss_val==2) {   // если замкнутая обратная связь  - Closed Loop
       ls_term_val=double(100.0+(long_term_val+short_term_val))/100.0; // коэффициент корректировки расхода по ShortTerm и LongTerm
     }
   else {
       ls_term_val=double(100.0+long_term_val)/100.0; // коэффициент корректировки расхода по LongTerm
     }

   FuelFlowGramsPerSecond = double(MAF/AirFuelRatio)*ls_term_val;   // Получаем расход грамм бензина в секунду в соотношении 14,7 воздуха/к 1 литра бензина, корректировка ls_term_val
   FuelFlowLitersPerSecond = FuelFlowGramsPerSecond / FuelDensityGramsPerLiter;  // Переводим граммы бензина в литры
   LPH = FuelFlowLitersPerSecond * 3600.0;       // Ковертирование литров в час

 */

#endif //ARDUINOMID_CONSUMPTION_H
