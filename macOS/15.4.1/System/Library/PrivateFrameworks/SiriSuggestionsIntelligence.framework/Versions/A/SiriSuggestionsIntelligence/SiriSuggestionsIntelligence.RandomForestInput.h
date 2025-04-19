@class NSSet;

@interface SiriSuggestionsIntelligence.RandomForestInput : _TtCs12_SwiftObject <MLFeatureProvider> {
    void /* unknown type, empty encoding */ batteryIsCharging;
    void /* unknown type, empty encoding */ focusMode;
    void /* unknown type, empty encoding */ connectedToDevice;
    void /* unknown type, empty encoding */ timeOfDay;
    void /* unknown type, empty encoding */ timePeriod;
    void /* unknown type, empty encoding */ isAirplaneMode;
    void /* unknown type, empty encoding */ supportsSMSMEssaging;
    void /* unknown type, empty encoding */ isInCarPlay;
    void /* unknown type, empty encoding */ hasAPasscode;
    void /* unknown type, empty encoding */ currentBuildVersion;
    void /* unknown type, empty encoding */ targetOwner;
    void /* unknown type, empty encoding */ activeWithin7Days2To3Turns;
    void /* unknown type, empty encoding */ screenBrightness;
    void /* unknown type, empty encoding */ dayOfWeek;
    void /* unknown type, empty encoding */ activeWithin7days1Turn;
    void /* unknown type, empty encoding */ hasInternetConnection;
    void /* unknown type, empty encoding */ isConnectedToWifi;
    void /* unknown type, empty encoding */ active6MonthsOrMoreAgo;
    void /* unknown type, empty encoding */ active7To14DaysAgo;
    void /* unknown type, empty encoding */ siriWasDictationOnly;
    void /* unknown type, empty encoding */ activeWithin7Days4PlusTurns;
    void /* unknown type, empty encoding */ distanceFromLatestBuild;
    void /* unknown type, empty encoding */ is2x3;
}

@property (nonatomic, readonly) NSSet *featureNames;

- (id)featureValueForName:(id)a0;

@end
