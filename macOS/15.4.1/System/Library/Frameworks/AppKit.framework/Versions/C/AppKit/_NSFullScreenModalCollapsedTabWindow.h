@class NSBox, _NSFullScreenModalStackController, NSTimer, NSTabBar;

@interface _NSFullScreenModalCollapsedTabWindow : NSPanel {
    _NSFullScreenModalStackController *_stackController;
    id /* block */ _additionalMoveBlock;
    NSTabBar *_borrowedTabBar;
    NSBox *_tabCenteringBox;
    NSBox *_windowTopBorderBox;
    BOOL _revealed;
    NSTimer *_beginModalPollTimer;
}

- (void)dealloc;
- (BOOL)_allowsSnapping;
- (BOOL)_canMiniaturize;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_targetTabFrame;
- (void)reshapeContents;
- (id)tabBarSnapshot:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0;
- (BOOL)_allowsExteriorResizing;
- (BOOL)_canBeSnappingTarget;
- (BOOL)_ignoreForFullScreenTransition;
- (void)_monitorModalPollDrags;
- (void)_setWindowTag;
- (void)animateHideWithAdditionalMoveBlock:(id /* block */)a0;
- (void)animateRevealWithAdditionalMoveBlock:(id /* block */)a0;
- (BOOL)canBecomeKeyWindow;
- (BOOL)canBecomeMainWindow;
- (void)forgetTabBar;
- (BOOL)hasTabBar;
- (id)initWithStackController:(id)a0;
- (BOOL)isAnimating;
- (BOOL)isMovable;
- (void)moveToSpace;
- (void)revealWithoutAnimating;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 display:(BOOL)a1;
- (void)takeTabBar:(id)a0;

@end
