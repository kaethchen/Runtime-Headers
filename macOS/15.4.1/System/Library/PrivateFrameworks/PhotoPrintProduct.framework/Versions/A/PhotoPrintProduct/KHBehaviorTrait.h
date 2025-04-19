@interface KHBehaviorTrait : KHModel {
    long long _behaviorId;
    long long _traitId;
}

+ (id)traitsForBehaviorId:(long long)a0 fromDatabase:(id)a1;

- (void)dealloc;
- (long long)traitId;
- (long long)behaviorId;
- (void)cacheBehaviorId:(long long)a0;
- (void)cacheTraitId:(long long)a0;
- (void)setBehaviorId:(long long)a0;
- (void)setTraitId:(long long)a0;

@end
