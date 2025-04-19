@class NSString, EKUIGadget;

@interface EKUIShareeControlContainer : NSView <NSAccessibilityButton>

@property (weak) EKUIGadget *gadget;
@property BOOL shouldDrawSeparator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)accessibilityLabel;
- (BOOL)accessibilityPerformPress;
- (BOOL)isAccessibilityElement;
- (void)keyUp:(id)a0;

@end
