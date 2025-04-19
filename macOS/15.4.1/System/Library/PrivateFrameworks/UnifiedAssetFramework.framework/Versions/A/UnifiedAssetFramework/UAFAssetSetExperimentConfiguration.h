@class NSDictionary;

@interface UAFAssetSetExperimentConfiguration : NSObject

@property (retain, nonatomic) NSDictionary *assetSpecifiers;

+ (BOOL)isValid:(id)a0 error:(id *)a1;
+ (id)fromContentsOfURL:(id)a0 error:(id *)a1;
+ (id)supportedFileVersions;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
