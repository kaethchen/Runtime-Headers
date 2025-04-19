@class NSString, NSWindow, NSTextField;

@interface QLControlTooltip : NSWindow {
    NSTextField *_textField;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _anchorRect;
}

@property (weak) NSWindow *parentWindow;
@property (copy) NSString *string;
@property struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } anchorRect;
@property BOOL verticallyPositioned;

+ (id)tooltipWindow;

- (void).cxx_destruct;
- (BOOL)accessibilityIsIgnored;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1 backing:(unsigned long long)a2 defer:(BOOL)a3;
- (void)_updateWindowFrame;

@end
