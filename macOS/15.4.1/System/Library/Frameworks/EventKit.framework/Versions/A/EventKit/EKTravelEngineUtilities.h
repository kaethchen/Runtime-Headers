@interface EKTravelEngineUtilities : NSObject

+ (id)authorizationStatusAsString:(int)a0;
+ (id)cadRouteHypothesisForEKTravelEngineHypothesis:(id)a0;
+ (BOOL)date:(id)a0 representsApproachingDepartureDateForHypothesis:(id)a1;
+ (BOOL)date:(id)a0 representsImmediateDepartureForHypothesis:(id)a1;
+ (BOOL)date:(id)a0 representsLatenessForHypothesis:(id)a1;
+ (id)formattedLocationCoordinates:(id)a0;
+ (long long)geoRouteHypothesisTravelStateForString:(id)a0;
+ (id)geoTrafficDensityAsString:(unsigned long long)a0;
+ (unsigned long long)geoTrafficDensityForString:(id)a0;
+ (id)geoTransportTypeAsString:(int)a0;
+ (int)geoTransportTypeForCalLocationRoutingMode:(long long)a0;
+ (int)geoTransportTypeForString:(id)a0;
+ (double)maximumAllowableTravelTime;
+ (double)minimumAllowableTravelTime;
+ (BOOL)travelStateIndicatesTravelingTowardDestination:(long long)a0;

@end
