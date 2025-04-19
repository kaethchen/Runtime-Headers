@interface WebControlWindow : NSWindow

@property (class) BOOL hasKeyAppearance;

- (BOOL)_needsToResetDragMargins;
- (void)_setNeedsToResetDragMargins:(BOOL)a0;
- (BOOL)hasKeyAppearance;
- (BOOL)isKeyWindow;

@end
