@interface EKUIProposedTimeDateTimeGadget : EKUIDateTimeGadget

@property BOOL shouldSuppressMiniCal;

+ (id)interestedChangeKeys;

- (BOOL)isExpanded;
- (id)labelString;
- (id)control;
- (id)initWithViewController:(id)a0;
- (void)_updateDatePickerDate;
- (void)datePickerChangedToDate:(id)a0;
- (void)updateWithChanges:(id)a0;

@end
