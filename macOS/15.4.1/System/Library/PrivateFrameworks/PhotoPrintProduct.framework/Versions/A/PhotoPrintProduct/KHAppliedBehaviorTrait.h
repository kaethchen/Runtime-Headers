@class KHFrame, NSString, KHBehavior, KHTrait;

@interface KHAppliedBehaviorTrait : KHModel {
    long long _behaviorId;
    long long _entityId;
    NSString *_entityClass;
    long long _traitId;
    KHBehavior *_behavior;
    KHFrame *_frame;
    KHTrait *_trait;
}

- (void)dealloc;
- (id)behavior;
- (id)frame;
- (long long)entityId;
- (void)setEntityId:(long long)a0;
- (void)setEntityClass:(id)a0;
- (id)entityClass;
- (long long)frameId;
- (long long)traitId;
- (long long)behaviorId;
- (void)cacheBehaviorId:(long long)a0;
- (void)cacheEntityClass:(id)a0;
- (void)cacheEntityId:(long long)a0;
- (void)cacheTraitId:(long long)a0;
- (id)initWithEntityId:(long long)a0 entityClass:(id)a1 behaviorId:(long long)a2 traitId:(long long)a3;
- (void)setBehaviorId:(long long)a0;
- (void)setTraitId:(long long)a0;
- (id)trait;

@end
