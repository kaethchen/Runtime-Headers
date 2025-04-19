@interface SSWorldClockUtilities : NSObject

+ (void)getWorldClockResultsForQuery:(id)a0 completionHandler:(id /* block */)a1;
+ (id)additionalTimeZonesStringForFormattedData:(id)a0;
+ (id)capitalCityInMultiTimeZoneCountryWithCountryCode:(id)a0;
+ (id)clockColor;
+ (id)clockImageForDate:(id)a0 timeZone:(id)a1 latitude:(double)a2 longitude:(double)a3;
+ (id)commandForFormattedData:(id)a0;
+ (id)compactCardSectionForFormattedData:(id)a0 primaryCityFormattedData:(id)a1;
+ (id)countryCodeForUnlocalizedCountryName:(id)a0;
+ (id)formattedLocationForCity:(id)a0 country:(id)a1;
+ (id)formattedTimeForDate:(id)a0 timeZone:(id)a1;
+ (void)getFormattedWorldClockResultsFromTimeZoneLocations:(id)a0 shouldEmphasizeTimeZone:(BOOL)a1 completionHandler:(id /* block */)a2;
+ (void)getLocationAndTimeZoneForQuery:(id)a0 completionHandler:(id /* block */)a1;
+ (id)inlineCardSectionForFormattedData:(id)a0 primaryCityFormattedData:(id)a1;
+ (id)onDeviceResultsForLocationQuery:(id)a0;
+ (void)parseQueryForWorldClock:(id)a0 completionHandler:(id /* block */)a1;
+ (void)parseQueryForWorldClock:(id)a0 forceLoad:(BOOL)a1 completionHandler:(id /* block */)a2;
+ (void)sendResultsForQuery:(id)a0 detectedLocations:(id)a1 shouldEmphasizeTimeZone:(BOOL)a2 completionHandler:(id /* block */)a3;
+ (void)timeZoneMatchesForLocation:(id)a0 completionHandler:(id /* block */)a1;
+ (id)timeZoneOffsetDescriptionForDate:(id)a0 timeZone:(id)a1;

@end
