@class EKUIGadget;

@interface EKUIGadgetScrollView : NSScrollView

@property (weak) EKUIGadget *gadget;

- (void).cxx_destruct;
- (BOOL)isAccessibilityElement;
- (void)scrollWheel:(id)a0;

@end
