@interface SidecarPopoverButtonHighlight : NSView

- (BOOL)allowsVibrancy;
- (void)updateLayer;
- (BOOL)wantsLayer;
- (BOOL)wantsUpdateLayer;

@end
