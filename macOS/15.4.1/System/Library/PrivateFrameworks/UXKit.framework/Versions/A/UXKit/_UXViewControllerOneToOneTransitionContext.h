@class UXViewController, UXView;

@interface _UXViewControllerOneToOneTransitionContext : _UXViewControllerTransitionContext {
    id /* block */ arbitraryTransitionCompletionHandler;
}

@property (retain, nonatomic) UXViewController *fromViewController;
@property (retain, nonatomic) UXViewController *toViewController;
@property (readonly, nonatomic) UXView *toView;
@property (readonly, nonatomic) UXView *fromView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } fromStartFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } fromEndFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } toEndFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } toStartFrame;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })finalFrameForViewController:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })initialFrameForViewController:(id)a0;
- (id)viewControllerForKey:(id)a0;
- (id /* block */)arbitraryTransitionCompletionHandler;
- (void)setArbitraryTransitionCompletionHandler:(id /* block */)a0;

@end
