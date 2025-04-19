@class NSString, NSImage, NSProgressIndicator, NSButton, NSObject;

@interface LUIPinFieldView : NSView {
    NSProgressIndicator *_progressView;
    NSButton *_tryButton;
    NSImage *_digitField;
    NSImage *_digitFieldHightlight;
    struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *_digitRects;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _progressRect;
    NSString *_localizedString;
    NSString *_pinString;
    int _position;
    double _maxFontHeight;
    BOOL _enabled;
    NSObject *_target;
    SEL _action;
}

+ (struct CGSize { double x0; double x1; })viewSize;
+ (int)PINLength;
+ (struct CGSize { double x0; double x1; })digitViewSize;
+ (void)setPINLength:(int)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)setEnabled:(BOOL)a0;
- (void)setTarget:(id)a0;
- (void)setAction:(SEL)a0;
- (BOOL)acceptsFirstResponder;
- (id)accessibilityAttributeValue:(id)a0;
- (id)accessibilityFocusedUIElement;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)accessibilityIsIgnored;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)keyDown:(id)a0;
- (void)keyUp:(id)a0;
- (id)PINString;
- (id)_axBoxChildren;
- (id)_axChildren;
- (void)_delayedPostAccessibilityFocusChange;
- (id)_digitFontAttributes;
- (void)_setupDigitRectsWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (int)activeInputIndex;
- (void)clearPIN;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForIndex:(int)a0;
- (void)_sendAction:(id)a0;

@end
