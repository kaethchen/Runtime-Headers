@class QLPreviewWindowButton, NSString, NSView, QLPreviewTitleBarView, NSTextField, QLPreviewBackgroundView, NSMutableArray, QLControlsController;

@interface QLPreviewWindowController : NSWindowController {
    QLControlsController *_leftControlsController;
    QLControlsController *_rightControlsController;
    BOOL _controlsAtBottom;
    BOOL _tightControls;
    double _tightControlsDelta;
    BOOL _packing;
    BOOL _isBeingMoved;
    NSView *_rootView;
    NSView *_leftControlsView;
    NSView *_rightControlsView;
    QLPreviewTitleBarView *_titleBarView;
    NSView *_contentView;
    NSTextField *_titleField;
    int _visibleButtonTypes;
}

@property (retain) QLPreviewWindowButton *closeButton;
@property (retain) QLPreviewWindowButton *fullscreenButton;
@property (retain) NSMutableArray *titlebarConstraintsInRootView;
@property (retain) NSMutableArray *contentConstraintsInRootView;
@property (readonly) QLPreviewBackgroundView *backgroundView;
@property (readonly) NSView *contentView;
@property (retain) NSString *title;
@property long long titleAlignment;
@property int titleBarVisibility;
@property int visibleButtonTypes;
@property BOOL controlsAtBottom;
@property (readonly) BOOL hasLeftControls;
@property (readonly) BOOL hasRightControls;
@property (readonly) BOOL hasTightControls;
@property (readonly) struct NSEdgeInsets { double x0; double x1; double x2; double x3; } visualMargins;
@property (readonly) QLControlsController *leftControlsController;
@property (readonly) QLControlsController *rightControlsController;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithWindow:(id)a0;
- (id)accessibilityTitleUIElement;
- (id)standardWindowButton:(unsigned long long)a0;
- (void)updateControls;
- (double)_contentInset;
- (void)_setupTitleField;
- (id)_titleField;
- (void)_rightControlsViewFrameChanged:(id)a0;
- (double)titleBarEdgeToWindowEdgePadding;
- (double)_additionalContentInset;
- (double)_buttonToContentPadding;
- (double)_buttonToWindowPadding;
- (void)_deactivateContentViewAndTitleBarConstraints;
- (double)_intrinsicMargin;
- (BOOL)_shouldMakeRoomForTitleBar;
- (BOOL)_shouldShowTitleBar;
- (void)_titleFieldFrameChanged:(id)a0;
- (double)_topBarTotalHeightIncludingPadding;
- (void)_updateContentViewConstraintsInRootView;
- (void)_updateInternalFrames;
- (void)_updatePacking;
- (void)_updateTitleBarConstraintsInRootView;
- (void)_updateWindowButtons;
- (double)closeButtonToWindowEdgePadding;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentFrameForWindowSize:(struct CGSize { double x0; double x1; })a0;
- (void)controlsDidUpateLayout:(id)a0;
- (BOOL)hasControls;
- (id)popoverCornerMask;
- (struct CGSize { double x0; double x1; })windowSizeFromContentSize:(struct CGSize { double x0; double x1; })a0;

@end
