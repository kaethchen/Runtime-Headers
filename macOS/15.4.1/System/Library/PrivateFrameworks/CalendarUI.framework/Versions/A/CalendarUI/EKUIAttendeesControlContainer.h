@class NSString, EKUIAttendeesGadget;

@interface EKUIAttendeesControlContainer : NSView <NSAccessibilityButton>

@property (weak) EKUIAttendeesGadget *gadget;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)accessibilityIdentifier;
- (id)accessibilityLabel;
- (BOOL)accessibilityPerformPress;
- (BOOL)isAccessibilityElement;
- (void)keyUp:(id)a0;

@end
