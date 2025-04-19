@interface CNPostalAddressStreetEquivalance : NSObject

+ (id)_normalizationMap;
+ (BOOL)isStreetAddress:(id)a0 equivalentToStreetAddress:(id)a1;
+ (id)normalizationMap;
+ (id)normalizeAddress:(id)a0;
+ (id)normalizeComponent:(id)a0;
+ (id)prepareStringForNormalization:(id)a0;

@end
