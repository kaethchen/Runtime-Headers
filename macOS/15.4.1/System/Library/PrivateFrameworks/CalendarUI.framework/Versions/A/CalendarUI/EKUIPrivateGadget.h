@interface EKUIPrivateGadget : EKUILabeledCheckboxGadget

+ (id)interestedChangeKeys;

- (id)accessibilityIdentifier;
- (BOOL)isChecked;
- (BOOL)isEditable;
- (id)labelString;
- (BOOL)canBeChecked;
- (BOOL)shouldDisplay;
- (BOOL)shouldDisplayWhenNotEditable;
- (void)updateEvent;

@end
