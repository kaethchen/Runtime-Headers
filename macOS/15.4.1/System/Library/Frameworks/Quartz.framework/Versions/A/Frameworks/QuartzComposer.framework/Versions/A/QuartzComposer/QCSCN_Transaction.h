@interface QCSCN_Transaction : NSObject

+ (void)lock;
+ (void)setValue:(id)a0 forKey:(id)a1;
+ (void)unlock;
+ (id)valueForKey:(id)a0;
+ (void)commit;
+ (id /* block */)completionBlock;
+ (unsigned int)currentState;
+ (void)setCompletionBlock:(id /* block */)a0;
+ (void)begin;
+ (double)animationDuration;
+ (id)animationTimingFunction;
+ (BOOL)disableActions;
+ (void)flush;
+ (void)setAnimationDuration:(double)a0;
+ (void)setAnimationTimingFunction:(id)a0;
+ (void)setDisableActions:(BOOL)a0;
+ (id)propertyKeys;
+ (BOOL)isKeyExcludedFromWebScript:(const char *)a0;
+ (BOOL)isSelectorExcludedFromWebScript:(SEL)a0;
+ (int)_baseTypeForProperty:(id)a0;
+ (void)enableImmediateMode:(BOOL)a0;
+ (id)jsInstance;
+ (void)postCommandWithContext:(void *)a0 object:(id)a1 commandID:(unsigned long long)a2 arguments:(void *)a3 keyPath:(id)a4 canCollapse:(BOOL)a5 applyFunction:(void /* function */ *)a6;
+ (Class)typeForProperty:(id)a0;

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
- (id)propertyKeys;

@end
