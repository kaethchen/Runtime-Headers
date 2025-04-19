@interface SSCachedViewResultBuilder : SSResultBuilder

+ (BOOL)isCoreSpotlightResult;
+ (BOOL)supportsResult:(id)a0;

- (id)buildInlineCardSections;
- (BOOL)supportsClearingBackendData;

@end
