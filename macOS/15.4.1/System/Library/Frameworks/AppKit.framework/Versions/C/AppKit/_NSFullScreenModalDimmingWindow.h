@class CALayer, _NSFullScreenModalStackController;
@protocol _NSFullScreenModalDimmingWindowDelegate;

@interface _NSFullScreenModalDimmingWindow : NSPanel {
    _NSFullScreenModalStackController *_stackController;
    CALayer *_rootLayer;
    CALayer *_dimLayer;
    CALayer *_windowSnapshotLayer;
    BOOL _isShowingDimmingLayer;
}

@property id<_NSFullScreenModalDimmingWindowDelegate> delegate;

- (void)dealloc;
- (BOOL)_allowsSnapping;
- (BOOL)_canMiniaturize;
- (BOOL)_allowsExteriorResizing;
- (BOOL)_canBeSnappingTarget;
- (void)_createDimLayerIfNeeded;
- (BOOL)_ignoreForFullScreenTransition;
- (void)_setWindowTag;
- (void)beginPresentationWithIncomingWindowSnapshot:(id)a0 targetFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 completionHandler:(id /* block */)a2;
- (BOOL)canBecomeKeyWindow;
- (BOOL)canBecomeMainWindow;
- (void)endPresentationWithIncomingWindowSnapshot:(id)a0 startingFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 forSendDocument:(BOOL)a2 completionHandler:(id /* block */)a3;
- (id)initWithStackController:(id)a0;
- (BOOL)isMovable;
- (void)moveToSpace;

@end
