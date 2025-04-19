@class NSString;

@interface CPKHorizontalPopupMenu : NSPanel

@property id /* block */ drawingBlock;
@property (copy) NSString *selectedCharacter;
@property (readonly) BOOL doubleClicked;

+ (id)menuForCharacter:(id)a0 fontSize:(double)a1 cellSize:(struct CGSize { double x0; double x1; })a2 drawingBlock:(id /* block */)a3;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)_cornerMask;
- (void)closeMenu;
- (id)_menuView;
- (id)_popoverFrameView;
- (BOOL)_withinDoubleClickTimeSinceOpened;
- (BOOL)popUpMenuPositioningAtRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1 byMouse:(BOOL)a2 pinRectInWindow:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;

@end
