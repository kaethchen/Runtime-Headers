@class AVDetachedFullscreenTransitionInfo;

@interface AVDetachedFullscreenTransitionContext : NSObject

@property (nonatomic, getter=isTransitioning, setter=_setTransitioning:) BOOL transitioning;
@property (nonatomic, setter=_setTransitionTypeUsed:) unsigned long long transitionTypeUsed;
@property (readonly, nonatomic) AVDetachedFullscreenTransitionInfo *transitionInfo;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } initialFrameForWindow;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } destinationFrameForWindow;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } initialFrameForContentView;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } destinationFrameForContentView;
@property (retain, nonatomic) id userInfo;

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_originalViewFrameUnobscuredByTheTitlebarForTransitionWithInfo:(id)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_calculateDestinationContentViewFrameForTransitionWithInfo:(id)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_calculateDestinationWindowFrameForTransitionWithInfo:(id)a0 fullscreenWindow:(id)a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_calculateInitialContentViewFrameForTransitionWithInfo:(id)a0 fullscreenWindow:(id)a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_calculateInitialWindowFrameForTransitionWithInfo:(id)a0 fullscreenWindow:(id)a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_contentViewFrameForTransitionWithInfo:(id)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_fullscreenFrameForWindow:(id)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_fullscreenFrameInWindowCoordinatesForWindow:(id)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_visibleContentViewFrameInScreenCoordinatesForTransitionWithInfo:(id)a0;
+ (id)contextWithTransitionInfo:(id)a0 fullscreenWindow:(id)a1;

- (void).cxx_destruct;

@end
