@class NSString, KHBehavior;

@interface KHAppliedBehavior : KHModel {
    long long _behaviorId;
    long long _entityId;
    NSString *_entityClass;
    KHBehavior *_behavior;
    id _entityObject;
}

- (void)dealloc;
- (void)remove;
- (id)behavior;
- (long long)entityId;
- (void)setEntityId:(long long)a0;
- (void)setEntityClass:(id)a0;
- (id)entityClass;
- (long long)behaviorId;
- (void)cacheBehaviorId:(long long)a0;
- (void)cacheEntityClass:(id)a0;
- (void)cacheEntityId:(long long)a0;
- (id)entityObject;
- (void)setBehaviorId:(long long)a0;

@end
