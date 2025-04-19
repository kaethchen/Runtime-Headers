@class NSMutableArray;

@interface NSAnimationManager : NSObject {
    NSMutableArray *_pendingStartAnimations;
}

@property (class, readonly) NSAnimationManager *currentAnimationManager;

+ (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
+ (void)performAnimations:(id)a0;

- (void)dealloc;
- (id)animationForObject:(id)a0 keyPath:(id)a1;
- (BOOL)hasAnimationForObject:(id)a0 keyPath:(id)a1;
- (void)interruptAnimationsForObject:(id)a0 keyPath:(id)a1;
- (void)removeAllAnimationsForObject:(id)a0;
- (void)removeAnimationsForObject:(id)a0 keyPath:(id)a1;
- (void)removeAnimationsForObject:(id)a0 keyPath:(id)a1 finished:(BOOL)a2;
- (void)setTargetValue:(id)a0 forObject:(id)a1 keyPath:(id)a2 animation:(id)a3;
- (void)setTargetValue:(id)a0 forObject:(id)a1 keyPath:(id)a2 animation:(id)a3 options:(long long)a4;
- (id)targetValueForObject:(id)a0 keyPath:(id)a1;

@end
