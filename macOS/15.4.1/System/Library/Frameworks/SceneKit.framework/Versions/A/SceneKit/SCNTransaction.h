@class CAMediaTimingFunction;

@interface SCNTransaction : NSObject

@property (class, nonatomic) double animationDuration;
@property (class, copy, nonatomic) CAMediaTimingFunction *animationTimingFunction;
@property (class, nonatomic) BOOL disableActions;
@property (class, copy, nonatomic) id /* block */ completionBlock;

+ (void)lock;
+ (void)setValue:(id)a0 forKey:(id)a1;
+ (void)unlock;
+ (id)valueForKey:(id)a0;
+ (void)commit;
+ (unsigned int)currentState;
+ (void)begin;
+ (void)flush;
+ (void)commitImmediate;
+ (void)checkUncommittedTransactions;
+ (void)enqueueCommandForObject:(id)a0 immediateTransactionBlock:(id /* block */)a1;
+ (BOOL)immediateMode;
+ (struct __C3DScene { } *)immediateModeRestrictedContext;
+ (void)performPresentationInstanceQueriesInScene:(id)a0 usingBlock:(id /* block */)a1;
+ (void)postCommandWithContext:(struct __C3DScene { } *)a0 object:(id)a1 applyBlock:(id /* block */)a2;
+ (void)postCommandWithContext:(struct __C3DScene { } *)a0 object:(id)a1 key:(id)a2 applyBlock:(id /* block */)a3;
+ (void)postCommandWithContext:(struct __C3DScene { } *)a0 object:(id)a1 key:(id)a2 subscriptIndex:(unsigned long long)a3 derivedKeyPath:(id)a4 applyBlock:(id /* block */)a5;
+ (void)postCommandWithContext:(struct __C3DScene { } *)a0 object:(id)a1 key:(id)a2 subscriptKey:(id)a3 derivedKeyPath:(id)a4 applyBlock:(id /* block */)a5;
+ (void)postCommandWithContext:(struct __C3DScene { } *)a0 object:(id)a1 keyPath:(id)a2 applyBlock:(id /* block */)a3;
+ (void)setImmediateMode:(BOOL)a0;
+ (void)setImmediateModeRestrictedContext:(struct __C3DScene { } *)a0;

- (void)lock;
- (void)unlock;
- (void)commit;
- (void)begin;
- (double)animationDuration;
- (id)animationTimingFunction;
- (BOOL)disableActions;
- (void)flush;
- (void)setAnimationDuration:(double)a0;
- (void)setAnimationTimingFunction:(id)a0;
- (void)setDisableActions:(BOOL)a0;

@end
