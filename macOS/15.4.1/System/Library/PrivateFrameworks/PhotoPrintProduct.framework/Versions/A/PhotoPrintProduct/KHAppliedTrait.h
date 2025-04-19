@class NSString;

@interface KHAppliedTrait : KHModel {
    long long _traitId;
    long long _entityId;
    NSString *_entityClass;
}

- (void)dealloc;
- (long long)entityId;
- (void)setEntityId:(long long)a0;
- (void)setEntityClass:(id)a0;
- (id)entityClass;
- (long long)traitId;
- (void)cacheEntityClass:(id)a0;
- (void)cacheEntityId:(long long)a0;
- (void)cacheTraitId:(long long)a0;
- (void)setTraitId:(long long)a0;

@end
