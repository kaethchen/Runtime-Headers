@class NSArray;

@interface NSToolbarClippedItemsIndicator : NSPopUpButton {
    NSArray *_clippedItems;
    BOOL _cachedMenuIsValid;
    BOOL _returnFocusToWindowAfterClick;
}

@property (copy) NSArray *clippedItems;
@property (readonly) BOOL hasItemsToDisplayInPopUp;

+ (void)initialize;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_simpleOverflowMenuItemClicked:(id)a0;
- (void)becomeKeyWindow;
- (void)resignKeyWindow;
- (id)_clipViewAncestor;
- (void)_computeMenuForClippedItems;
- (void)_computeMenuForClippedItemsIfNeeded;
- (BOOL)_shouldDrawSelectionIndicatorForItem:(id)a0;
- (void)_updateMenuForClippedItems;
- (void)_willPopUpNotification:(id)a0;
- (BOOL)acceptsFirstResponder;
- (BOOL)becomeFirstResponder;
- (id)clipIndicatorImage;
- (void)didSendActionNotification:(id)a0;
- (void)mouseDown:(id)a0;
- (void)moveLeft:(id)a0;
- (void)moveRight:(id)a0;
- (BOOL)needsPanelToBecomeKey;
- (void)performClick:(id)a0;
- (BOOL)resignFirstResponder;
- (BOOL)validateMenuItem:(id)a0;

@end
