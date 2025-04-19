@class _NSFullScreenCreateTileDropTargetController;

@interface _NSFullScreenCreateTileDropTargetWindow : NSPanel {
    _NSFullScreenCreateTileDropTargetController *_controller;
    id /* block */ _additionalMoveBlock;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _dropRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _collapsedRect;
    BOOL _revealed;
}

- (BOOL)_allowsSnapping;
- (BOOL)_canMiniaturize;
- (BOOL)_allowsExteriorResizing;
- (BOOL)_canBeSnappingTarget;
- (BOOL)_ignoreForFullScreenTransition;
- (void)_setWindowTag;
- (void)animateHideWithAdditionalMoveBlock:(id /* block */)a0 completionBlock:(id /* block */)a1;
- (void)animateRevealWithAdditionalMoveBlock:(id /* block */)a0 completionBlock:(id /* block */)a1;
- (BOOL)canBecomeKeyWindow;
- (BOOL)canBecomeMainWindow;
- (id)initWithController:(id)a0;
- (BOOL)isAnimating;
- (BOOL)isMovable;
- (BOOL)isRevealed;
- (void)moveToSpace;
- (void)setDropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 collapsedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 display:(BOOL)a1;

@end
