@interface _NSUIAnimator : NSObject

+ (void)animateWithDuration:(double)a0 animations:(id /* block */)a1;
+ (void)animateWithDuration:(double)a0 animations:(id /* block */)a1 completion:(id /* block */)a2;
+ (void)animateWithDuration:(double)a0 delay:(double)a1 options:(unsigned long long)a2 animations:(id /* block */)a3 completion:(id /* block */)a4;
+ (BOOL)areAnimationsEnabled;
+ (void)performWithAnimation:(id /* block */)a0;
+ (void)performWithoutAnimation:(id /* block */)a0;

@end
