@class NSStackView, _NSCustomizationSheetBackgroundView, NSBox, _NSFunctionRowCustomizationDragTarget, NSLayoutConstraint, NSString, _NSOverlayBackgroundView, NSTouchBarCustomizationPaletteLabelPopoverView, NSViewController, NSTouchBarCustomizationPaletteCheckbox, NSView, NSTextField, NSTouchBarCustomizationPalettePushButton;

@interface NSTouchBarCustomizationPaletteOverlayWindow : NSWindow {
    _NSOverlayBackgroundView *_backgroundView;
    _NSCustomizationSheetBackgroundView *_sheetBackground;
    NSView *_sheetContainer;
    NSStackView *_verticalStack;
    NSStackView *_horizontalHeaderStack;
    NSTextField *_headerLabel;
    NSBox *_headerSeparator;
    NSTouchBarCustomizationPaletteCheckbox *_quicktypeCheckbox;
    NSTouchBarCustomizationPalettePushButton *_doneButton;
    NSTouchBarCustomizationPaletteLabelPopoverView *_labelView;
    struct CGPoint { double x; double y; } _dragLocation;
    NSString *_dragLabel;
    NSLayoutConstraint *_doneButtonWidthConstraint;
    NSLayoutConstraint *_headerLabelInsetConstraint;
    NSLayoutConstraint *_leadingPaletteViewConstraint;
    NSLayoutConstraint *_trailingPaletteViewConstraint;
}

@property BOOL showQuickType;
@property (retain) NSViewController *paletteContentViewController;
@property double paletteScaleFactor;
@property (readonly, retain) _NSFunctionRowCustomizationDragTarget *screenBottomDragTarget;
@property BOOL debugMode;
@property struct CGPoint { double x0; double x1; } dragLocation;
@property struct CGSize { double width; double height; } dragSize;
@property (copy) NSString *dragLabel;

- (void)dealloc;
- (void)_appDidDeactivate:(id)a0;
- (BOOL)_blocksActionWhenModal:(SEL)a0;
- (BOOL)_blocksKeyAndMainWindowTouchBarsWhenModal;
- (void)_dismissModalForTerminate;
- (double)_doneButtonWidth;
- (void)_handleIntrusion;
- (id)_headerLabelAttributedString;
- (id)_headerLabelFont;
- (double)_headerLabelInset;
- (double)_horizontalHeaderLabelSpacing;
- (double)_horizontalHeaderStackSpacing;
- (BOOL)_isNonactivatingPanel;
- (double)_paletteHorizontalInsets;
- (double)_postHeaderSpacing;
- (void)_quickTypeDidChange:(id)a0;
- (void)_setModalWindowLevel;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })_verticalStackInsets;
- (double)_verticalStackSpacing;
- (BOOL)_wantsSnapshotProxyWindowForOrderOutAnimation;
- (void)_windowDidBecomeKey:(id)a0;
- (void)animateIn;
- (void)animateOut;
- (BOOL)canBecomeKeyWindow;
- (BOOL)canBecomeMainWindow;
- (void)done:(id)a0;
- (id)initWithScreen:(id)a0 displayID:(int)a1 paletteContent:(id)a2;
- (void)orderOut:(id)a0;
- (BOOL)performKeyEquivalent:(id)a0;
- (void)toggleQuicktype:(id)a0;

@end
