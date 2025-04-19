@class NSString, OFNSView, OFNSViewController;
@protocol OFViewControllerInteractiveTransitioning, OFViewControllerAnimatedTransitioning;

@interface _OFViewControllerTransitionContext : NSObject <OFViewControllerTransitioningContext> {
    OFNSViewController *_fromViewController;
    OFNSViewController *_toViewController;
    OFNSView *_containerView;
    double _progress;
    double _progressSpeed;
    double _lastUpdateTimestamp;
    long long _state;
    struct { unsigned char interactorImplementsCompletionSpeed : 1; unsigned char interactorImplementsCompletionCurve : 1; unsigned int isCurrentlyInteractive; unsigned char transitionWasCancelled : 1; unsigned char transitionIsCompleting : 1; } _flags;
}

@property (nonatomic) BOOL isInFlight;
@property (copy, nonatomic) id /* block */ interactiveUpdateHandler;
@property (readonly) id<OFViewControllerAnimatedTransitioning> animator;
@property (readonly) id<OFViewControllerInteractiveTransitioning> interactor;
@property (copy, nonatomic) id /* block */ willCompleteHandler;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (double)progress;
- (id)containerView;
- (id)fromViewController;
- (id)toViewController;
- (BOOL)wasCancelled;
- (BOOL)isInteractive;
- (void)cancelInteractiveTransition;
- (void)completeTransition:(BOOL)a0;
- (void)finishInteractiveTransition;
- (BOOL)initiallyInteractive;
- (BOOL)isCompleting;
- (void)updateInteractiveTransition:(double)a0;
- (id)initWithContainerView:(id)a0 fromViewController:(id)a1 toViewController:(id)a2 animator:(id)a3 interactor:(id)a4;
- (double)progressSpeed;
- (void)setIsCompleting:(BOOL)a0;
- (void)updateNonInteractiveTransitionWithProgress:(double)a0;

@end
