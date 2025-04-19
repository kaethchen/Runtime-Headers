@class NSString;

@interface FCArticleLengthFeature : FCPersonalizationFeature

@property (retain, nonatomic) NSString *lengthID;

+ (id)longLengthFeature;
+ (id)mediumLengthFeature;
+ (id)shortLengthFeature;

- (id)init;
- (void).cxx_destruct;
- (double)featureWeightWithConfigurableValues:(id)a0 publisherID:(id)a1;
- (id)initWithLengthIdentifier:(id)a0;
- (id)initWithPersonalizationIdentifier:(id)a0;

@end
