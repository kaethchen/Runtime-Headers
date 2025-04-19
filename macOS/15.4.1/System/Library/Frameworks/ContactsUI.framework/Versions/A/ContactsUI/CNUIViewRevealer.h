@interface CNUIViewRevealer : NSObject

@property (nonatomic) BOOL shouldAnimate;

+ (id)defaultRevealer;
+ (id)animatingRevealer;
+ (id)revealer;

- (void)hideView:(id)a0;
- (id)initWithShouldAnimte:(BOOL)a0;
- (void)showView:(id)a0;

@end
