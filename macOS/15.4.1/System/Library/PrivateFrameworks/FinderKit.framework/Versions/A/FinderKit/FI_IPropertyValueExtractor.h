@interface FI_IPropertyValueExtractor : NSObject

@property BOOL shouldPrefetchValue;
@property (nonatomic) BOOL forPreview;

+ (id)extractor;

- (id)defaultValue;
- (void)flush;
- (id)extractValueFromNodes:(const void *)a0;
- (BOOL)isApplicableToNodes:(const void *)a0;
- (BOOL)needsUpdateForProperty:(unsigned int)a0;
- (void)prefetchValueOnSecondaryThread:(const void *)a0 cancelled:(const void *)a1;

@end
