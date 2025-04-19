@class CPKCharactersView;

@interface CPKCharactersTableView : NSTableView

@property CPKCharactersView *parentCharactersView;

- (BOOL)acceptsFirstMouse:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })adjustScroll:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (BOOL)mouseDownCanMoveWindow;
- (void)reloadData;
- (BOOL)validateProposedFirstResponder:(id)a0 forEvent:(id)a1;

@end
