@class NSTextField, NSDocumentAutosaveButton, NSThemeDocumentButton, NSStackView, NSLayoutConstraint, NSButton, NSWindow;

@interface NSToolbarPrimaryTitleContainerView : NSView {
    NSStackView *_primaryTitleStack;
    NSLayoutConstraint *_leadingTitleConstraint;
    NSLayoutConstraint *_leadingDocumentConstraint;
    NSLayoutConstraint *_trailingTitleConstraint;
    struct { unsigned char isShowingDocumentMenu : 1; unsigned char alwaysShowDocumentProxy : 1; unsigned char expanded : 1; } _flags;
}

@property (weak) NSWindow *representedWindow;
@property (readonly) NSTextField *titleTextField;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } titleRect;
@property (readonly) double expandedWidth;
@property (readonly) BOOL showsDocumentProxy;
@property (readonly) BOOL isShowingAutosavePopup;
@property (readonly) BOOL isShowingDocumentMenu;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } mouseHoverSensitiveRect;
@property (readonly) NSButton *fileButton;
@property (readonly) NSDocumentAutosaveButton *autosaveButton;
@property (readonly) NSThemeDocumentButton *documentProxyButton;

+ (id)keyPathsForValuesAffectingIsShowingAutosavePopup;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_alwaysShowDocumentProxyChanged;
- (void)rightMouseDown:(id)a0;
- (void)setFrameOrigin:(struct CGPoint { double x0; double x1; })a0;
- (void)_configureForShowingAutosave:(BOOL)a0 editingState:(long long)a1 autosavingError:(id)a2 nonModalError:(id)a3;
- (void)_configureWithRepresentedURL:(id)a0;
- (void)_endEditingOfToolbarSubviewIfNecessary;
- (BOOL)_performMouseDownWithEvent:(id)a0;
- (BOOL)_shouldToolbarStealEvent:(id)a0;
- (void)_showAutosavePopover;
- (void)_showDocumentPopover;
- (BOOL)acceptsFirstMouse:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })autosaveButtonRect;
- (void)collapse;
- (void)expand;
- (void)expandCollapseAnimationDidFinish;
- (id)firstBaselineAnchor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })maxTitleRect;
- (void)mouseDown:(id)a0;
- (BOOL)mouseDownCanMoveWindow;
- (id)newAutosaveButton;
- (id)newDocumentProxyButton;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleAndProxyRect;
- (void)updateTextPropertiesWithFont:(id)a0;
- (void)updateTitleProperties:(id)a0;

@end
