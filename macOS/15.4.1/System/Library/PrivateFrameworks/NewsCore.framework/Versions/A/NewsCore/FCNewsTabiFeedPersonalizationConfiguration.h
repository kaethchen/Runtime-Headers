@class NSDictionary, FCNewsTabiFeedPersonalizationOutputConfiguration;

@interface FCNewsTabiFeedPersonalizationConfiguration : NSObject

@property (retain, nonatomic) NSDictionary *dictionary;
@property (retain, nonatomic) FCNewsTabiFeedPersonalizationOutputConfiguration *bundleOutputConfiguration;
@property (nonatomic) long long fullBodyEmbeddingDimension;
@property (nonatomic) long long maxTopicIds;
@property (retain, nonatomic) FCNewsTabiFeedPersonalizationOutputConfiguration *nonBundleOutputConfiguration;
@property (nonatomic) long long titleEmbeddingDimension;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
