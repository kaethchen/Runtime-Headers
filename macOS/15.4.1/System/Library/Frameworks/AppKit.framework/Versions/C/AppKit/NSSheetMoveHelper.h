@class NSArray, NSWindow, NSPointerArray;

@interface NSSheetMoveHelper : NSMoveHelper {
    NSWindow *_sheet;
    NSWindow *_sheetParent;
    NSWindow *_ultimateParent;
    NSWindow *_effectiveParent;
    BOOL _isHidden;
    BOOL _detached;
    BOOL _waitingToAttach;
    long long _flavor;
    long long _animationStyle;
    NSArray *_cgsWindows;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _startFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _frameDelta;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _sheetStartFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _sheetDelta;
    BOOL _windowHadKeyAppearance;
    double _totalTime;
    double _currentProgress;
    NSPointerArray *_dimmedWindows;
}

@property (readonly, weak) NSWindow *sheetWindow;
@property (readonly, weak) NSWindow *sheetParent;
@property (readonly, weak) NSWindow *sheetParentForOrdering;
@property (readonly, getter=isHidden) BOOL hidden;
@property (readonly, getter=isWaitingToAttach) BOOL waitingToAttach;
@property (readonly, getter=isOpening) BOOL opening;
@property (readonly, getter=isClosing) BOOL closing;

+ (id)_dimmingViewForWindow:(id)a0;
+ (id)moveHelperWithSheet:(id)a0;
+ (id)moveHelpersDimmingWindow:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_positionWindow;
- (BOOL)_updateDimmingEffect:(double)a0 forWindow:(id)a1;
- (void)_closeSheetLogicallyDetachSheet;
- (void)_animatePanel;
- (void)_animateSheet;
- (void)_configureFinalState;
- (id)_findSheetParent;
- (void)_gatherMovementChildren;
- (void)_logicallyAttachSheet;
- (void)_openSheet;
- (struct CGSize { double x0; double x1; })_parentFrameDeltaForCurrentProgress;
- (id)_topmostSheetFromWindow:(id)a0;
- (void)_updateDimmingEffect:(double)a0 forWindowAndDescendants:(id)a1 stoppingAt:(id)a2 unvisitedChildren:(id)a3;
- (void)animateResizeToFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)animateStep:(double)a0;
- (double)animationDuration;
- (void)cleanUpAnimation;
- (void)clearDimmingMaterial;
- (void)closeSheet;
- (void)hideSheet:(BOOL)a0;
- (id)initWithSheet:(id)a0;
- (void)openSheet;
- (void)prepareSheetParent:(id)a0;
- (id)screen;
- (void)setUpAnimation;
- (struct CGSize { double x0; double x1; })sheetSizeToFitScreenFromSize:(struct CGSize { double x0; double x1; })a0 inPositioningRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 parent:(id)a2;
- (BOOL)shouldSkipAnimation;
- (void)unhideSheet;
- (void)updateDimmingMaterial;

@end
