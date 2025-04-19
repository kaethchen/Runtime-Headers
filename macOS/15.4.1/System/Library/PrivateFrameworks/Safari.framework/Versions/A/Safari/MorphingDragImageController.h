@class NSView, NSString, NSArray, NSTimer, DetachedTabDraggingImageToWindowTransitionController, NSAnimation, MorphingDragImageView, NSImage, NSWindow, _TearOffTabWindow, NSImageView, MutableDraggingInfo;
@protocol TabDraggingDestination, MorphingDragImageControllerDragSource;

@interface MorphingDragImageController : NSObject <NSTearOffTabWindowDelegate> {
    NSImage *_tabDragImage;
    NSImage *_windowDragImage;
    struct CGSize { double width; double height; } _maxImageSize;
    struct CGSize { double width; double height; } _originalViewOffset;
    double _miniWindowWidth;
    NSArray *_dragItems;
    MutableDraggingInfo *_draggingInfoTemplate;
    id<MorphingDragImageControllerDragSource> _dragSource;
    NSView *_sourceView;
    MorphingDragImageView *_dragImageView;
    NSImageView *_countBadgeImageView;
    NSAnimation *_slideBackAnimation;
    struct CGPoint { double x; double y; } _slideBackStartTranslation;
    struct CGPoint { double x; double y; } _slideBackEndTranslation;
    BOOL _dragDone;
    NSWindow *_windowUnderMouse;
    id<TabDraggingDestination> _targetUnderMouse;
    NSTimer *_springTargetWindowToFrontTimer;
    NSTimer *_periodicEventTimer;
    BOOL _targetAcceptsDrag;
    BOOL _mouseOverSystemWindow;
    BOOL _canDetachTab;
    BOOL _sourceRespondsToShouldDetachDraggedTab;
    BOOL _isTabDetachedFromSource;
    NSImage *_pinnedTabDragImage;
    NSArray *_bookmarks;
    NSImage *_bookmarkImage;
    NSWindow *_detachedWindow;
    DetachedTabDraggingImageToWindowTransitionController *_detachedWindowTransitionController;
}

@property (readonly, nonatomic) _TearOffTabWindow *dragWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)dragTabsWithDraggingItems:(id)a0 tabButtonImage:(id)a1 pinnedTabButtonImage:(id)a2 tabBookmarkImage:(id)a3 bookmarks:(id)a4 windowImage:(id)a5 fromView:(id)a6 at:(struct CGPoint { double x0; double x1; })a7 source:(id)a8;
+ (void)dragTabsWithDraggingItems:(id)a0 tabButtonImage:(id)a1 pinnedTabButtonImage:(id)a2 windowImage:(id)a3 fromView:(id)a4 at:(struct CGPoint { double x0; double x1; })a5 source:(id)a6;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_applicationDidResignActive;
- (void)_beginSlideBackAnimation;
- (BOOL)_canPerformTabDrag;
- (BOOL)_didAcceptDrop;
- (void)_dragComplete;
- (id)_dragInfoForNoTargetUnderMouse;
- (id)_dragInfoForTargetUnderMouse;
- (id)_dragInfoForTargetUnderMouseInWindow:(id)a0;
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
- (void)_setTargetUnderMouse:(id)a0;
- (void)_setWindowUnderMouse:(id)a0;
- (void)_startPeriodicEventTimerIfNeeded;
- (void)_stopPeriodicEventTimer;
- (void)_updateDragImageForCurrentDragState;
- (id)detachWindowForTearOffTabWindow:(id)a0;
- (void)tearOffTabWindow:(id)a0 didFinishAnimationForDetachedWindow:(id)a1;
- (void)tearOffTabWindow:(id)a0 positionDetachedWindow:(id)a1;
- (void)_checkDetachTabFromSource;
- (void)_dragTabsWithDraggingItems:(id)a0 tabButtonImage:(id)a1 pinnedTabButtonImage:(id)a2 tabBookmarkImage:(id)a3 bookmarks:(id)a4 windowImage:(id)a5 fromView:(id)a6 at:(struct CGPoint { double x0; double x1; })a7 source:(id)a8;
- (void)_setUpTemplateDraggingInfo;
- (void)animateSlideBack;

@end
