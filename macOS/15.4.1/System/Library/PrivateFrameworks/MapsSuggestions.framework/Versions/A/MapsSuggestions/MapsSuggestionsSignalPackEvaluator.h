@class MapsSuggestionsSignalPack;

@interface MapsSuggestionsSignalPackEvaluator : NSObject {
    MapsSuggestionsSignalPack *_signalPack;
}

+ (id)evaluatorFromSignalPack:(id)a0;

- (void).cxx_destruct;
- (BOOL)hasCarPlayInfo;
- (BOOL)hasTouristInfo;
- (BOOL)isWalkable;
- (BOOL)isCarPlayConnected;
- (BOOL)hasDistanceFromHereToOriginInfo;
- (BOOL)hasDistanceFromHereToDestinationInfo;
- (BOOL)hasDistanceFromOriginToDestinationInfo;
- (BOOL)hasMapTypeInfo;
- (BOOL)hasRidesharingInfo;
- (BOOL)hasSignalForExpressPaymentCard;
- (BOOL)hasSignalForHasATransitCard;
- (BOOL)hasSignalForIsCurrentlyInATrip;
- (BOOL)hasSignalForPaymentCard;
- (BOOL)hasSignalForUpcomingTrip;
- (BOOL)hasTransitInfo;
- (BOOL)hasUserTransportTypePreferenceInfo;
- (BOOL)hasWeatherInfo;
- (BOOL)hasWeatherPrecipitationInfo;
- (BOOL)hasWeatherTemperatureInfo;
- (id)initWithSignalPack:(id)a0;
- (BOOL)isBadWeather;
- (BOOL)isColdWeather;
- (BOOL)isEasilyWalkable;
- (BOOL)isHighChanceOfRaining;
- (BOOL)isHighChanceOfSnowing;
- (BOOL)isHotWeather;
- (BOOL)isLowChanceOfRaining;
- (BOOL)isLowChanceOfSnowing;
- (BOOL)isMapTypeTransit;
- (BOOL)isMildWeather;
- (BOOL)isRideSharingAppsInstalled;
- (BOOL)isTouristHere;
- (BOOL)isTransitCurrentlyPossible;
- (double)isTransitUserConfidence;
- (double)isTransitUserHereConfidence;
- (BOOL)isUserPreferenceDriving;
- (BOOL)isUserPreferenceRidesharing;
- (BOOL)isUserPreferenceTransit;
- (BOOL)isUserPreferenceWalking;
- (BOOL)userHasAPaymentCard;
- (BOOL)userHasATransitCard;
- (BOOL)userHasAnExpressPaymentCard;
- (BOOL)userHasAnUpcomingTrip;
- (BOOL)userIsCurrentlyInATrip;

@end
