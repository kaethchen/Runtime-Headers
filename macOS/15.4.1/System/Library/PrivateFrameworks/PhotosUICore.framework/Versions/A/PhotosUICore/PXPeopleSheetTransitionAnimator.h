@class NSString;

@interface PXPeopleSheetTransitionAnimator : NSObject <NSViewControllerPresentationAnimator>

@property (readonly, nonatomic) double animationDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)animateDismissalOfViewController:(id)a0 fromViewController:(id)a1;
- (void)animatePresentationOfViewController:(id)a0 fromViewController:(id)a1;
- (id)initWithAnimationDuration:(double)a0;

@end
