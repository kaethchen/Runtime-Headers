@class NSArray, STExecutableIdentityResolver, STReferenceCountedCache;

@interface STAttributedEntityResolver : NSObject <STAttributedEntityResolving> {
    STExecutableIdentityResolver *_identityResolver;
    STReferenceCountedCache *_cache;
}

@property (readonly, copy, nonatomic) NSArray *preferredLocalizations;
@property (copy, nonatomic) NSArray *dynamicAttributions;

- (id)init;
- (void).cxx_destruct;
- (id)initWithPreferredLocalizations:(id)a0;
- (id)beginBatchResolutionSession;
- (id)resolveEntity:(id)a0;

@end
