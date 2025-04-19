@class NSDictionary, NSArray;

@interface CFRRatingProvider : NSObject

@property (retain, nonatomic) NSDictionary *ratingProviders;
@property (retain, nonatomic) NSDictionary *providerKeyForSetting;
@property (retain, nonatomic) NSDictionary *disallowStringForProviderKey;
@property (retain, nonatomic) NSDictionary *allowStringForProviderKey;
@property (readonly, nonatomic) NSArray *supportedCountryCodes;

- (id)init;
- (void).cxx_destruct;
- (id)maximumRatingForProviderKey:(id)a0;
- (id)minimumRatingForProviderKey:(id)a0;
- (id)ratingForRank:(long long)a0 country:(id)a1 contentSetting:(id)a2;
- (id)ratingForRank:(long long)a0 country:(id)a1 mediaFeature:(id)a2;
- (id)ratingsForCountryCode:(id)a0 contentSetting:(id)a1;
- (id)ratingsForCountryCode:(id)a0 mediaFeature:(id)a1;

@end
