@class NSString, CALayer;

@interface NSTouchBarControlStripGrabber : NSView <NSCollectionViewElement, NSGestureRecognizerDelegate> {
    CALayer *_backgroundLayer;
    CALayer *_upperChevronLayer;
    CALayer *_lowerChevronLayer;
    struct NSEdgeInsets { double top; double left; double bottom; double right; } _alignmentRectInsets;
    BOOL _enabled;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy) NSString *identifier;
@property (getter=isHighlighted) BOOL highlighted;
@property (weak) id target;
@property SEL action;
@property (getter=isEnabled) BOOL enabled;
@property long long state;
@property struct NSEdgeInsets { double x0; double x1; double x2; double x3; } alignmentRectInsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyPathsForValuesAffectingAlignmentRectInsets;
+ (id)keyPathsForValuesInvalidatingDisplay;
+ (id)keyPathsForValuesInvalidatingIntrinsicContentSize;
+ (id)keyPathsForValuesInvalidatingLayout;

- (void)dealloc;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)prepareForReuse;
- (void)layout;
- (void)_commonInit;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeNames;
- (id)accessibilityDescriptionAttribute;
- (id)accessibilityIdentifierAttribute;
- (BOOL)accessibilityIsIgnored;
- (void)accessibilityPerformAction:(id)a0;
- (id)accessibilityRoleAttribute;
- (id)actionForLayer:(id)a0 forKey:(id)a1;
- (void)applyLayoutAttributes:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)handlePress:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)isFlipped;
- (void)layoutLayers;
- (void)setLayer:(id)a0;
- (void)updateLayer;
- (BOOL)wantsLayer;
- (BOOL)wantsUpdateLayer;

@end
