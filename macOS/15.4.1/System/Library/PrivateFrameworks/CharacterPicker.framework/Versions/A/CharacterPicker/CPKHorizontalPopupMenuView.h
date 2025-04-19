@class NSArray, CPKHorizontalPopupMenu, NSButton;

@interface CPKHorizontalPopupMenuView : NSView

@property CPKHorizontalPopupMenu *parentMenu;
@property (retain) NSArray *buttons;
@property (readonly) struct CGSize { double width; double height; } cellSize;
@property (readonly) double cellGap;
@property (readonly) double dividerGap;
@property double menuOpenedTime;
@property BOOL selected;
@property BOOL trackingCanceled;
@property BOOL doubleClicked;
@property unsigned long long rowCount;
@property (readonly) NSButton *highlightedButton;
@property BOOL isRTLLayout;

- (void)dealloc;
- (BOOL)acceptsFirstMouse:(id)a0;
- (void)keyDown:(id)a0;
- (void)mouseDown:(id)a0;
- (BOOL)shouldDelayWindowOrderingForEvent:(id)a0;
- (id)_buttonAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)_findPreviousActiveButton:(BOOL)a0 startButton:(id)a1;
- (void)_highlightButton:(id)a0;
- (void)_moveHighlightToBackward:(BOOL)a0;
- (void)_moveHighlightToUp:(BOOL)a0;
- (void)_updateCombinedButton;
- (void)clearHighlightedButton;
- (void)highlightButtonAt:(struct CGPoint { double x0; double x1; })a0;
- (void)highlightButtonAtIndex:(long long)a0;
- (id)initForCharacter:(id)a0 fontSize:(double)a1 cellSize:(struct CGSize { double x0; double x1; })a2;
- (void)myHorizontalMenuSelected:(id)a0;

@end
