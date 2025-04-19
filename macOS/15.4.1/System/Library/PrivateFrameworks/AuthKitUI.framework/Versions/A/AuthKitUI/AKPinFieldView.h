@class NSArray, NSImage, NSString, NSButton;
@protocol AKPinFieldViewDelegate;

@interface AKPinFieldView : NSView {
    NSImage *_digitField;
    NSArray *_pinFieldBoxArray;
    struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *_digitRects;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _progressRect;
    NSString *_localizedString;
    NSString *_pinString;
    int _position;
    double _maxFontHeight;
    BOOL _enabled;
    int _pinLength;
    struct { unsigned char pinFieldViewTextDidChange : 1; unsigned char pinFieldViewTextDidComplete : 1; unsigned char padding : 6; } _delegateFlags;
}

@property (nonatomic) BOOL supportsRTL;
@property (nonatomic) unsigned long long chunkingStyle;
@property (weak, nonatomic) id<AKPinFieldViewDelegate> delegate;
@property (nonatomic) BOOL echosBullets;
@property (retain, nonatomic) NSButton *nextButtonResponder;

+ (struct CGSize { double x0; double x1; })digitViewSizeWithLength:(int)a0;
+ (struct CGSize { double x0; double x1; })viewSizeWithLength:(int)a0 chunkingStyle:(unsigned long long)a1;

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
- (int)PINLength;
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
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 pinLength:(int)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 pinLength:(int)a1 supportsRTL:(BOOL)a2 chunkingStyle:(unsigned long long)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForIndex:(int)a0;
- (BOOL)shouldChunkIntoPairs;

@end
