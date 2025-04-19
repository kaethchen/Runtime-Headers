@interface CNSeedCardProvider : NSObject

+ (id)dataForEveryCountry;
+ (id)nearestAvailableDataForCountryCode:(id)a0;
+ (id)bundleWithSeedCards;
+ (id)dataForCountryCode:(id)a0;

@end
