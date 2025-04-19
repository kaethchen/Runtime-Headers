@class NSOrderedSet;

@interface CRMultiLocaleRecognizerConfiguration : CRRecognizerConfiguration

@property (readonly) NSOrderedSet *languages;

+ (id)cachedConfigurationWithImageReaderOptions:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (id)initV3DefaultConfigWithOptions:(id)a0;
- (id)createTextFeatureFilter;
- (id)initWithImageReaderOptions:(id)a0 error:(id *)a1;

@end
