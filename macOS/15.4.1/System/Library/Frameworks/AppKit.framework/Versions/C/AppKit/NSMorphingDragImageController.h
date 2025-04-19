@class NSView, NSString, NSTimer, NSAnimation, NSMorphingDragImageView, NSImage, NSTabBarItem, NSWindow, NSTearOffTabWindow;
@protocol NSMorphingDragImageControllerDragSource, NSTabDraggingDestination;

@interface NSMorphingDragImageController : NSObject <NSTearOffTabWindowDelegate> {
    NSImage *_tabDragImage;
    NSImage *_windowDragImage;
    struct CGSize { double width; double height; } _maxImageSize;
    struct CGSize { double width; double height; } _originalViewOffset;
    NSTabBarItem *_dragItem;
    id<NSMorphingDragImageControllerDragSource> _dragSource;
    NSView *_sourceView;
    NSMorphingDragImageView *_dragImageView;
    NSAnimation *_slideBackAnimation;
    struct CGPoint { double x; double y; } _slideBackStartTranslation;
    struct CGPoint { double x; double y; } _slideBackEndTranslation;
    BOOL _dragDone;
    NSWindow *_windowUnderMouse;
    id<NSTabDraggingDestination> _targetUnderMouse;
    NSTimer *_springTargetWindowToFrontTimer;
    NSTimer *_periodicEventTimer;
    BOOL _targetAcceptsDrag;
    BOOL _mouseOverSystemWindow;
    NSImage *_pinnedTabDragImage;
}

@property (readonly, nonatomic) NSTearOffTabWindow *dragWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)dragTabWithDraggingItem:(id)a0 tabButtonImage:(id)a1 pinnedTabButtonImage:(id)a2 windowImage:(id)a3 fromView:(id)a4 at:(struct CGPoint { double x0; double x1; })a5 source:(id)a6;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_animateSlideBack;
- (void)_applicationDidResignActive;
- (void)_beginSlideBackAnimation;
- (BOOL)_canPerformTabDrag;
- (BOOL)_didAcceptDrop;
- (void)_dragComplete;
- (id)_dragInfoForNoTargetUnderMouse;
- (id)_dragInfoForTargetUnderMouse;
- (id)_dragInfoForTargetUnderMouseInWindow:(id)a0;
- (void)_dragTabWithDraggingItem:(id)a0 tabButtonImage:(id)a1 pinnedTabButtonImage:(id)a2 windowImage:(id)a3 fromView:(id)a4 at:(struct CGPoint { double x0; double x1; })a5 source:(id)a6;
- (void)_draggingDidEnterTargetWindow;
- (void)_draggingDidExitTargetWindow;
- (BOOL)_dropOpensNewWindow;
- (BOOL)_dropTabOnScreenIfPossible;
- (void)_findWindowUnderMouse:(id *)a0 level:(int *)a1 viewUnderMouse:(id *)a2;
- (void)_firePeriodicEvent:(id)a0;
- (void)_handleEvent:(id)a0;
- (void)_handleFlagsChanged;
- (void)_handleMouseDragged;
- (void)_handleMouseUp;
- (void)_morphToDragImage:(id)a0;
- (void)_performSprintToFront:(id)a0;
- (void)_prepareForDragWithImage:(id)a0;
- (void)_runDrag;
- (void)_sendMovedToPointOnScreenToDragSource;
- (void)_setTargetUnderMouse:(id)a0;
- (void)_setWindowUnderMouse:(id)a0;
- (void)_startPeriodicEventTimerIfNeeded;
- (void)_stopPeriodicEventTimer;
- (void)_updateDragImageForCurrentDragState;
- (id)detachWindowForTearOffTabWindow:(id)a0;

@end
