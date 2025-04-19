@class NSNumber, NSString, NSSet;

@interface GEOCountry : GeoKitPlace

@property (retain) NSNumber *area;
@property (retain) NSString *code;
@property (retain) NSString *languages;
@property (retain) NSSet *cities;

+ (id)countriesWhoseNameStartsWith:(id)a0 managedObjectContext:(id)a1 fetchLimit:(unsigned long long)a2 resultType:(unsigned long long)a3;
+ (id)countryWithCode:(id)a0 managedObjectContext:(id)a1 fetchLimit:(unsigned long long)a2 resultType:(unsigned long long)a3;

- (id)capitalCity;

@end
