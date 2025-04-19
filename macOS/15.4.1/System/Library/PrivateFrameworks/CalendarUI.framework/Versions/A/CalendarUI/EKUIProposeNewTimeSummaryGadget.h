@interface EKUIProposeNewTimeSummaryGadget : EKUISummaryGadget

+ (id)interestedChangeKeys;

- (BOOL)isEditable;
- (id)initWithViewController:(id)a0;
- (id)summaryString;
- (BOOL)shouldDisplay;
- (void)updateWithChanges:(id)a0;

@end
