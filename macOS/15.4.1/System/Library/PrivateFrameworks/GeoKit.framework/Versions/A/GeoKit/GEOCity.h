@class NSString, NSNumber, GEOCountry;

@interface GEOCity : GeoKitPlace

@property (retain) NSString *regionalCode;
@property (retain) NSString *timeZoneName;
@property (retain) NSNumber *elevation;
@property (retain) NSNumber *isCapital;
@property (retain) GEOCountry *country;

+ (id)citiesWithTimeZoneName:(id)a0 managedObjectContext:(id)a1 sortDescriptors:(id)a2 fetchLimit:(unsigned long long)a3 resultType:(unsigned long long)a4;
+ (id)_citiesWhoseNameStartsWith:(id)a0 regionalCode:(id)a1 countryCode:(id)a2 managedObjectContext:(id)a3;
+ (id)_citiesWithCountryCode:(id)a0 managedObjectContext:(id)a1;
+ (id)_citiesWithRegionalCode:(id)a0 countryCode:(id)a1 managedObjectContext:(id)a2;
+ (id)_predicateForPlaceSearchWithLongitude:(double)a0 latitude:(double)a1 longituteSpan:(double)a2 latitudeSpan:(double)a3 longitudeKeyPath:(id)a4 latitudeKeyPath:(id)a5;
+ (id)_predicateForTimeZoneSearch:(id)a0 timeZoneNameKeyPath:(id)a1;
+ (id)_reverseGeocodingWithLongitude:(double)a0 latitude:(double)a1 longitudeSpan:(double)a2 latitudeSpan:(double)a3 managedObjectContext:(id)a4;
+ (id)_sharedLegacyCountryNameConversionDictionary;
+ (id)_timeZonePrefBundle;
+ (id)allCitiesInManagedObjectContext:(id)a0 sortDescriptors:(id)a1 fetchLimit:(unsigned long long)a2 resultType:(unsigned long long)a3;
+ (id)citiesAtLongitude:(double)a0 latitude:(double)a1 longitudeSpan:(double)a2 latitudeSpan:(double)a3 timeZoneNamesScope:(id)a4 managedObjectContext:(id)a5 sortDescriptors:(id)a6 fetchLimit:(unsigned long long)a7 resultType:(unsigned long long)a8;
+ (id)citiesWhoseNameStartsWith:(id)a0 managedObjectContext:(id)a1 fetchLimit:(unsigned long long)a2 resultType:(unsigned long long)a3;
+ (id)citiesWhoseNameStartsWith:(id)a0 regionalCode:(id)a1 countryCode:(id)a2 adaptive:(BOOL)a3 managedObjectContext:(id)a4;
+ (id)citiesWithPredicate:(id)a0 managedObjectContext:(id)a1 sortDescriptors:(id)a2 fetchLimit:(unsigned long long)a3 resultType:(unsigned long long)a4;
+ (id)cityWithDumpDictionary:(id)a0;
+ (id)cityWithGeonameID:(unsigned long long)a0 inContext:(id)a1;
+ (id)cityWithLegacyDumpArray:(id)a0;
+ (id)cupertinoFromContext:(id)a0;
+ (id)displayStringForCity:(id)a0 regionalCode:(id)a1 country:(id)a2;
+ (id)reverseGeocodingWithLongitude:(double)a0 latitude:(double)a1 managedObjectContext:(id)a2;
+ (id)systemCity;

- (id)timeZone;
- (id)legacyDumpArray;
- (id)bestNearbyCitiesMaxCount:(unsigned long long)a0;
- (id)displayNameAndCountry;
- (id)displayShortTimeZoneString;
- (id)displayTimeZoneString;
- (id)dumpDictionary;
- (id)nearbyCitiesWithinLongitudeSpan:(double)a0 latitudeSpan:(double)a1 sortDescriptors:(id)a2 fecthLimit:(unsigned long long)a3;

@end
