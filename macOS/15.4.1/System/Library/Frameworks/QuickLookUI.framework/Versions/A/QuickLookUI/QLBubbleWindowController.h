@class QLBubble;

@interface QLBubbleWindowController : QLPreviewWindowController

@property (weak) QLBubble *bubble;

- (void).cxx_destruct;
- (void)updateControls;
- (double)_additionalContentInset;
- (double)_intrinsicMargin;

@end
