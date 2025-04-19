@class NSString, CAFilter;

@interface ASAuthorizationAppleIDButton : NSControl <NSAccessibilityButton> {
    long long _type;
    long long _style;
    CAFilter *_highlightFilter;
}

@property (class, readonly) double defaultCornerRadius;

@property (nonatomic) double cornerRadius;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)accessibilityIsSingleCelled;
+ (Class)layerClass;
+ (id)buttonWithType:(long long)a0 style:(long long)a1;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)layout;
- (void)setHighlighted:(BOOL)a0;
- (id)accessibilityLabel;
- (BOOL)accessibilityPerformPress;
- (id)accessibilityRole;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)mouseDown:(id)a0;
- (void)mouseDragged:(id)a0;
- (void)mouseUp:(id)a0;
- (BOOL)accessibilityElement;
- (void)_createHighlightFilterIfNecessary;
- (void)_drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (BOOL)_isInsideButtonEvent:(id)a0;
- (void)_performAnimationToSetHighlighted:(BOOL)a0;
- (id)initWithAuthorizationButtonType:(long long)a0 authorizationButtonStyle:(long long)a1;
- (long long)_ak_buttonStyle;
- (long long)_ak_buttonType;

@end
