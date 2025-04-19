@class BookmarksUndoController, NSString;
@protocol BrowserWindowDelegate;

@interface BrowserWindow : Window {
    NSString *_title;
    BOOL _logAfterNextRedisplay;
    id _mouseUpEventMonitor;
    BOOL _hasMoved;
    BOOL _isClosing;
}

@property (retain, nonatomic) BookmarksUndoController *bookmarksUndoController;
@property (nonatomic, getter=isLayerBacked) BOOL layerBacked;
@property (weak) id<BrowserWindowDelegate> delegate;
@property (readonly, nonatomic) BOOL isSendingEvent;
@property (nonatomic) BOOL ignoresOrderFront;
@property (nonatomic) BOOL shouldDeferSettingFirstResponderDueToScrubbing;
@property (nonatomic) BOOL deferringLoadForSelectedTab;

+ (id)frontmostWindow;

- (void)dealloc;
- (void).cxx_destruct;
- (void)close;
- (id)delegate;
- (void)setDelegate:(id)a0;
- (void)setTitle:(id)a0;
- (id)title;
- (void)becomeKeyWindow;
- (void)displayIfNeeded;
- (void)__close;
- (void)display;
- (void)runToolbarCustomizationPalette:(id)a0;
- (void)_commonAwake;
- (id)accessibilityChildren;
- (id)accessibilityTitle;
- (long long)animationBehavior;
- (void)awakeFromNib;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })constrainFrameRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toScreen:(id)a1;
- (void)endEditingFor:(id)a0;
- (void)enterFullScreenMode:(id)a0;
- (void)exitFullScreenMode:(id)a0;
- (void)keyDown:(id)a0;
- (BOOL)makeFirstResponder:(id)a0;
- (void)makeKeyWindow;
- (void)orderFront:(id)a0;
- (void)orderWindow:(long long)a0 relativeTo:(long long)a1;
- (BOOL)performKeyEquivalent:(id)a0;
- (void)sendEvent:(id)a0;
- (void)setWindowController:(id)a0;
- (BOOL)validateUserInterfaceItem:(id)a0;
- (void)zoom:(id)a0;
- (void)updateTitle;
- (void)_startedMoving:(id)a0;
- (void)_handleLeftMouseUp:(id)a0;
- (void)_matchFrameWithOverrideRect;
- (id)currentTabViewItem;
- (void)insertInOrderedTabViewItems:(id)a0;
- (void)insertInOrderedTabViewItems:(id)a0 atIndex:(unsigned int)a1;
- (void)logFirstPageLoaded;
- (void)logFirstPageLoadedAfterNextRedisplay;
- (void)logFirstWindowDrawnAfterNextRedisplay;
- (id)orderedTabViewItems;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })overrideFrameToStaggerFrom;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })overrideWindowRect;
- (void)removeFromOrderedTabViewItemsAtIndex:(unsigned int)a0;
- (void)replaceInOrderedTabViewItems:(id)a0 atIndex:(unsigned int)a1;
- (void)setCurrentTabViewItem:(id)a0;
- (void)setUpBrowserWindow;
- (void)tryToCloseNowThatWindowControllerIsReady;
- (void)updateCGSWindowTitle;

@end
