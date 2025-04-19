@class NSColor;

@interface AXVSpeechMenuButton : NSButton

@property (copy, nonatomic) NSColor *_enterColor;
@property (copy, nonatomic) NSColor *_exitColor;

+ (id)buttonWithImage:(id)a0 target:(id)a1 action:(SEL)a2;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)trackMouseWithBound:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 enterBorderColor:(id)a1 exitBorderColor:(id)a2;

@end
