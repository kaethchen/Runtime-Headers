@interface SGEventGeocode : NSObject

+ (id)_serialQueue;
+ (id)addressStringFromPIRStructuredAddress:(id)a0;
+ (id)appendToAddress:(id)a0 addressComponentToAppend:(id)a1 withSeparator:(id)a2;
+ (id)dateForUTCDate:(id)a0 withTimeZone:(id)a1;
+ (void)geocodeAddress:(id)a0 withCallback:(id /* block */)a1;
+ (void)geocodeAddressUsingPIR:(id)a0 withCallback:(id /* block */)a1;
+ (void)geocodeAddressWithCanonicalSearch:(id)a0 withCallback:(id /* block */)a1;
+ (id)geocodeEvent:(id)a0;
+ (void)geocodeEvent:(id)a0 withCallback:(id /* block */)a1;
+ (void)geocodeLocation:(id)a0 usingMode:(unsigned long long)a1 withGeoFilters:(id)a2 withCallback:(id /* block */)a3;
+ (void)geocodePOIWithName:(id)a0 ofTypes:(id)a1 inRegion:(id)a2 withCallback:(id /* block */)a3;
+ (BOOL)isGeocodeCandidate:(id)a0;
+ (BOOL)isGeocodeCandidateLocation:(id)a0 forEvent:(id)a1;
+ (BOOL)locationIsAirport:(id)a0;
+ (BOOL)locationIsGeocoded:(id)a0;
+ (id)pirResultFromData:(id)a0 withDistance:(double)a1 fromCoordinates:(struct { double x0; double x1; })a2;
+ (id)pirResultWithHighestScoreFromData:(id)a0;
+ (id)poiCategoriesFromString:(id)a0;

@end
