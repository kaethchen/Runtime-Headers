@class EKUIAlarmGadget;

@interface EKUIAlarmButton : NSButton

@property (weak) EKUIAlarmGadget *gadget;

- (void).cxx_destruct;
- (BOOL)becomeFirstResponder;
- (BOOL)canBecomeKeyView;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)resignFirstResponder;

@end
