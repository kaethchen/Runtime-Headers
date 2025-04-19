@class NSDictionary;

@interface ATXModeGlobals : NSObject <ATXLocationParameters> {
    NSDictionary *_parameters;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (int)currentLocationUpdateInterval;
- (int)frequentLOIMinimumVisits;
- (int)homeLOISearchRadius;
- (id)initWithAssetClass:(Class)a0;
- (BOOL)isAutomationTriggerSuggestionsForFocusEnabled;
- (BOOL)isSetupSuggestionsForFocusEnabled;
- (int)locationOfInterestSearchRadius;
- (int)locationOfInterestUpdateInterval;
- (int)predictedExitTimesUpdateInterval;
- (int)predictedLocationsOfInterestUpdateInterval;
- (int)previousLOIExpirationTime;
- (int)workLOISearchRadius;

@end
