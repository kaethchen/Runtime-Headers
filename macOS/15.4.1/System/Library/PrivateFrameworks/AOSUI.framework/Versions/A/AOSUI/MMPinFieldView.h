@class NSArray, NSImage, NSString, NSButton;
@protocol MMPinFieldViewDelegate;

@interface MMPinFieldView : NSView {
    NSImage *_digitField;
    NSImage *_digitFieldHightlight;
    NSArray *_pinFieldBoxArray;
    struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *_digitRects;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _progressRect;
    NSString *_localizedString;
    NSString *_pinString;
    int _position;
    double _maxFontHeight;
    BOOL _enabled;
    long long _pinLength;
    struct { unsigned char pinFieldViewTextDidChange : 1; unsigned char pinFieldViewTextDidComplete : 1; unsigned char padding : 6; } _delegateFlags;
}

@property (weak, nonatomic) id<MMPinFieldViewDelegate> delegate;
@property (nonatomic) BOOL echosBullets;
@property (retain) NSButton *nextButtonResponder;

+ (struct CGSize { double x0; double x1; })digitViewSizeWithLength:(long long)a0;
+ (struct CGSize { double x0; double x1; })viewSizeWithLength:(long long)a0;

- (void).cxx_destruct;
- (void)setEnabled:(BOOL)a0;
- (BOOL)acceptsFirstResponder;
- (id)accessibilityAttributeValue:(id)a0;
- (id)accessibilityFocusedUIElement;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)accessibilityIsIgnored;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)keyDown:(id)a0;
- (struct CGSize { double x0; double x1; })viewSize;
- (BOOL)PINCompleted;
- (id)PINString;
- (long long)PINLength;
- (void)_appendNewCharacterWithEvent:(id)a0;
- (id)_axBoxChildren;
- (id)_axChildren;
- (void)_delayedPostAccessibilityFocusChange;
- (id)_digitFontAttributes;
- (void)_handleBackspaceEvent;
- (void)_setupDigitMaxHeight;
- (void)_setupDigitRectsWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (int)activeInputIndex;
- (void)clearPIN;
- (struct CGSize { double x0; double x1; })digitViewSize;
- (void)drawFocusRingOnRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)handleTextChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 pinLength:(long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForIndex:(int)a0;

@end
