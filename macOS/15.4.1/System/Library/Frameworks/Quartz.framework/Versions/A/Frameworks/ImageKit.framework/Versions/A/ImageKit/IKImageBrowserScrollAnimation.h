@interface IKImageBrowserScrollAnimation : IKAnimationGroup

@property (nonatomic) struct CGPoint { double x; double y; } offset_i;
@property (nonatomic) struct CGPoint { double x; double y; } offset_f;

- (BOOL)animationManager:(id)a0 processStep:(id)a1;
- (BOOL)handleChannel:(id)a0;

@end
