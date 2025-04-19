@class NSColor, NSString;

@interface KHFilterCell : NSButton <NSAccessibilityRadioButton>

@property (retain, nonatomic) NSColor *buttonBackgroundColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setState:(long long)a0;
- (void)setTitle:(id)a0;
- (BOOL)accessibilityPerformPress;
- (id)accessibilityValue;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (void)createTrackingArea;
- (id)initWithTitle:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
