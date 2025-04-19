@interface EKUIRepeatGadget : EKUILabeledGadget

+ (id)interestedChangeKeys;

- (double)pixelsBetweenLabelAndControl;
- (BOOL)shouldDisplay;
- (BOOL)shouldDisplayWhenNotEditable;
- (void)showCustomRecurrencePicker;
- (void)updateItemWithRecurrenceRule:(id)a0;

@end
