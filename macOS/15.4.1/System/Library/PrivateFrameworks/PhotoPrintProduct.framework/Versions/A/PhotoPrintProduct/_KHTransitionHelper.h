@class CALayer, UXViewController, UXView;
@protocol UXViewControllerContextTransitioning, KHGridPageTransitionViewControllerProtocol;

@interface _KHTransitionHelper : NSObject

@property (readonly, nonatomic) id<UXViewControllerContextTransitioning> transitioningContext;
@property (readonly, nonatomic) UXViewController<KHGridPageTransitionViewControllerProtocol> *fromViewController;
@property (readonly, nonatomic) UXViewController<KHGridPageTransitionViewControllerProtocol> *toViewController;
@property (readonly, nonatomic) UXView *fromView;
@property (readonly, nonatomic) UXView *toView;
@property (readonly, nonatomic) UXView *transitionView;
@property (readonly, nonatomic) CALayer *transitioningLayer;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } initialTransitioningRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } finalTransitioningRect;

+ (id)transitionHelperWithContext:(id)a0 isInteractive:(BOOL)a1;

- (void).cxx_destruct;
- (void)completeTransition:(BOOL)a0;

@end
