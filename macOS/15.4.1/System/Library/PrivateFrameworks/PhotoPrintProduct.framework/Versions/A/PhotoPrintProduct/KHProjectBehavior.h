@interface KHProjectBehavior : KHBehavior

+ (id)behaviorForKey:(long long)a0 fromDatabase:(id)a1;

- (id)attributes;
- (void)remove;
- (BOOL)isProjectModel;

@end
