@class NSString, NSViewController;

@interface NSViewControllerPresentationAnimatorObject : NSObject <NSViewControllerPresentationAnimator>

@property (retain) NSViewController *fromViewController;
@property (retain) NSViewController *toViewController;
@property (copy) id /* block */ completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)animateDismissalOfViewController:(id)a0 fromViewController:(id)a1;
- (void)animatePresentationOfViewController:(id)a0 fromViewController:(id)a1;

@end
