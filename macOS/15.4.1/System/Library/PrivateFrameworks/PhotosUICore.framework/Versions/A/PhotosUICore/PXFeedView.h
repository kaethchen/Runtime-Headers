@class PXGView, NSString, PXFeedViewModel, PXGViewCoordinator, PXGSplitLayout, PXFeedTitleLayout, PXFeedContentLayout;
@protocol NSObject, PXGAXResponder, NSCopying;

@interface PXFeedView : UXView <PXGAXResponder, PXTapToRadarDiagnosticProvider>

@property (readonly, nonatomic) PXGSplitLayout *splitLayout;
@property (readonly, nonatomic) PXFeedTitleLayout *titleLayout;
@property (readonly, nonatomic) PXFeedContentLayout *feedContentLayout;
@property (copy, nonatomic) id /* block */ currentTouchCompletion;
@property (copy, nonatomic) id /* block */ currentHoverCompletion;
@property (retain, nonatomic) id<NSObject, NSCopying> hoveredItemObjectID;
@property (readonly, nonatomic) PXFeedViewModel *viewModel;
@property (readonly, nonatomic) PXGView *tungstenView;
@property (readonly, nonatomic) PXGViewCoordinator *tungstenViewCoordinator;
@property (nonatomic) BOOL isActive;
@property (weak, nonatomic) id<PXGAXResponder> axNextResponder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseExited:(id)a0;
- (void)mouseMoved:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 configuration:(id)a1;
- (void)_handleChangeToModifySelectionWithUserInfo:(id)a0;
- (void)_handleHoverEventAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_installGestureRecognizers;
- (void)_startTrackingMouse;
- (id)axContainingScrollViewForAXGroup:(id)a0;
- (void)axGroup:(id)a0 didChange:(unsigned long long)a1 userInfo:(id)a2;
- (BOOL)axGroup:(id)a0 didRequestToPerformAction:(long long)a1 userInfo:(id)a2;
- (void)beginTouchingAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)collectTapToRadarDiagnosticsIntoContainer:(id)a0;
- (void)endTouching;
- (BOOL)handlePrimaryInteractionAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })indexPathClosestToIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0 inDirection:(unsigned long long)a1;
- (id)itemPlacementControllerForItemReference:(id)a0;
- (id)regionOfInterestForObjectReference:(id)a0;
- (void)scrollObjectReference:(id)a0 toScrollPosition:(unsigned long long)a1;

@end
