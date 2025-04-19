@class NSPopoverAnimationController;

@interface DDMenuItem : NSMenuItem {
    NSPopoverAnimationController *_popoverAnimationController;
}

@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } popoverPositioningRect;
@property unsigned long long expectedPopoverAnchorEdge;
@property struct CGSize { double width; double height; } expectedPopoverSize;

- (void).cxx_destruct;
- (void)recognizerDidCompleteAnimation:(id)a0;
- (void)recognizerDidCancelAnimation:(id)a0;
- (void)recognizerDidDismissAnimation:(id)a0;
- (void)recognizerDidUpdateAnimation:(id)a0;
- (void)recognizerWillBeginAnimation:(id)a0;
- (id)dd_action;
- (id)dd_context;

@end
