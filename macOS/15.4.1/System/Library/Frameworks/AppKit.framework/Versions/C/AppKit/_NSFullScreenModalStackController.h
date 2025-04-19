@class _NSFullScreenModalCollapsedTabWindow, NSString, NSTimer, NSWindow, _NSFullScreenModalDimmingWindow, _NSFullScreenSpace, NSWindowStackController;

@interface _NSFullScreenModalStackController : NSObject <_NSFullScreenModalDimmingWindowDelegate> {
    _NSFullScreenModalDimmingWindow *_dimmingWindow;
    BOOL _isFrontWindowOrderedIn;
    NSTimer *_deferredDragStartTimer;
    id _showDragEffectEventMonitor;
    BOOL _isFrontWindowDragging;
    BOOL _dragShouldSnapBackForDropTarget;
    BOOL _dragShouldSnapBackForMinimize;
    BOOL _hasDragProhibitChangePoint;
    struct CGPoint { double x; double y; } _dragSnapBackForMinimizeProhibitChangePosition;
    BOOL _dragShouldSnapBack;
    NSWindow *_frontWindow;
    BOOL _isRegisteredForNotifications;
    BOOL _invalid;
    NSString *_beforeStackedSavedWindowFrameString;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _windowDragStartFrame;
}

@property (nonatomic) _NSFullScreenSpace *space;
@property (readonly, nonatomic) NSWindowStackController *windowStackController;
@property (readonly, nonatomic) _NSFullScreenModalCollapsedTabWindow *collapsedTabWindow;
@property (readonly, nonatomic) BOOL isPresentedModally;
@property (readonly, nonatomic) BOOL isDragActive;
@property (nonatomic) BOOL disableBeginPresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void)reshapeContents;
- (void)windowDidBecomeKeyNotification:(id)a0;
- (void)didDoTabbedOrderAboveForWindow:(id)a0;
- (void)tearDownAnyModalStateAnimating:(BOOL)a0;
- (id)_activeWindow;
- (void)_actuallyBeginDraggingFrontWindow;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_adjustedSnapshotWindowFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 basedOnImage:(struct CGImage { } *)a1;
- (void)_dragMoved;
- (void)_setFrontWindow:(id)a0;
- (void)_showModalWindowDragEffect;
- (void)applyWindowStateForModalStackGroupToWindow:(id)a0;
- (id)backgroundWindowIDs;
- (id)beforeStackedSavedWindowFrameString;
- (void)beginModalPresentationWithCompletionHandler:(id /* block */)a0 forCloseSpace:(BOOL)a1;
- (void)beginModalPresentationWithCompletionHandler:(id /* block */)a0 forCloseSpace:(BOOL)a1 waitUntilDone:(BOOL)a2;
- (void)clearWindowStateForModalStackGroupToWindow:(id)a0;
- (BOOL)createModalStackForWindow:(id)a0;
- (void)didDoTabbedOrderOutForWindow:(id)a0;
- (void)displayChanged;
- (BOOL)dragShouldSnapBackForMinimize;
- (void)draggedWindowMovedToSpace:(unsigned long long)a0 repositionUnderMouseIfDetached:(BOOL)a1;
- (void)endModalPresentationWithCompletionHandler:(id /* block */)a0;
- (void)endTilePresentation;
- (double)modalWindowWidth;
- (void)nonAnimatedBeginModalPresentationForTileJoin;
- (void)registerForNotifications:(BOOL)a0;
- (void)reshapeFrontWindow;
- (id)selectedWindow;
- (void)tabBarWillSelectTab;
- (void)tearDownAnyModalState;
- (void)updateDraggingDimWindow;
- (void)windowDidEndDraggingNotification:(id)a0;
- (void)windowStackTabGroupDidChangeForWindow:(id)a0;
- (void)windowWillStartDraggingNotification:(id)a0;

@end
