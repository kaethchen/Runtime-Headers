@class NSError, NSString, NSPopover;

@interface NSThemeAutosaveButton : NSButton <NSPopoverDelegate> {
    long long _editState;
    NSError *_autosavingError;
    id _animationCompletionBlock;
    id _showHideDelay;
    id _eventMonitor;
    id _flagsChangedEventMonitor;
    NSPopover *_documentPopover;
    NSError *_nonModalError;
    NSPopover *_alertPopover;
    BOOL _needsShowAlertPopover;
    BOOL _userIsIdleForAlertPopover;
}

@property (readonly) NSPopover *displayedPopover;
@property (copy) NSError *documentAutosavingError;
@property (copy) NSError *nonModalDocumentError;
@property (readonly) BOOL _shouldShowSeparatorField;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_textColorForDisplayingAlertPopover;
+ (Class)cellClass;

- (void)dealloc;
- (void)_cancelAnimationCompletionBlock;
- (id)_documentWindow;
- (BOOL)_shouldColorTextForAlertPopover;
- (void)rightMouseDown:(id)a0;
- (void)setFrameOrigin:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)_arrowShouldBeHidden;
- (id)_buttonTitle;
- (void)_cancelFadeAnimationDelay;
- (id)_containingThemeFrame;
- (void)_delayedHideAlertPopover;
- (void)_hidePopover;
- (BOOL)_performMouseDownWithEvent:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_popoverPositioningRectInSuperview;
- (void)_repositionPopover;
- (void)_setAnimationCompletionBlock:(id /* block */)a0 withDuration:(double)a1;
- (void)_setTitleAndRedisplay:(id)a0;
- (void)_setTitleCellHighlighted:(BOOL)a0;
- (void)_setupAlertPopoverAutohideIgnoringRecentEvents:(BOOL)a0;
- (BOOL)_shouldShowDocumentPopoverWithMouseDownEvent:(id)a0;
- (void)_showAlertPopoverIgnoringRecentEvents:(BOOL)a0;
- (void)_showDocumentPopoverThenContinue:(id /* block */)a0;
- (void)_showOrHideArrowAnimate:(BOOL)a0 completionBlock:(id /* block */)a1;
- (void)_updateSeparatorFieldStringValue;
- (void)_userBecameIdleForAlertPopover;
- (void)_windowDidOrderOnScreen:(id)a0;
- (long long)documentEditingState;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseDown:(id)a0;
- (BOOL)mouseDownEvent:(id)a0 wouldReactivatePopover:(id)a1;
- (void)popoverDidClose:(id)a0;
- (void)setDocumentEditingState:(long long)a0 animate:(BOOL)a1;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)updateRolloverState;
- (void)viewDidMoveToWindow;

@end
