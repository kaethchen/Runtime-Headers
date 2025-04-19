@class SSApplicationResultBuilder;

@interface SSTopHitAppWithEntitiesSectionBuilder : SSSectionBuilder

@property (retain, nonatomic) SSApplicationResultBuilder *appResultBuilder;

+ (BOOL)supportsAppTopHitWithoutIndexFor:(id)a0;
+ (BOOL)supportsBonusSPI:(id)a0;
+ (BOOL)supportsFileProviderFor:(id)a0;
+ (BOOL)supportsSection:(id)a0;

- (void).cxx_destruct;
- (long long)maxCardSections;
- (id)buildBridgedResult;
- (id)buildCardSections;
- (id)buildCollectionStyle;

@end
