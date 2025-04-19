@class NSString;
@protocol QLAccessibilityUIElementDelegate;

@interface QLAccessibilityUIElement : NSAccessibilityElement {
    NSString *identifier;
}

@property (weak) id<QLAccessibilityUIElementDelegate> delegate;

+ (id)elementWithIdentifier:(id)a0 delegate:(id)a1;

- (void).cxx_destruct;
- (id)accessibilityActionDescription:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrameInParentSpace;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (id)accessibilityFocusedUIElement;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)accessibilityIdentifier;
- (BOOL)accessibilityIsAttributeSettable:(id)a0;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityLabel;
- (void)accessibilityPerformAction:(id)a0;
- (void)accessibilitySetValue:(id)a0 forAttribute:(id)a1;
- (id)accessibilityValue;

@end
