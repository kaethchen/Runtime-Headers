@interface EKUIReminderEndRepeatGadget : EKUIEndRepeatGadget

+ (BOOL)shouldShowAfter;

- (id)labelString;
- (double)pixelsBetweenLabelAndControl;
- (BOOL)shouldDisplay;

@end
