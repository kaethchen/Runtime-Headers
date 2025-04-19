@class NSTextField, NSString, NSView, EKUISummaryTextButton;

@interface EKUIDateTimeSummaryGadget : EKUISingleViewGadget <EKUISummary>

@property (retain) NSView *container;
@property (retain) EKUISummaryTextButton *leftTextField;
@property (retain) NSTextField *rightTextField;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)interestedChangeKeys;

- (void).cxx_destruct;
- (id)control;
- (id)initWithViewController:(id)a0;
- (id)summaryString;
- (id)recurrenceDifferenceDescription;
- (id)attributedSummaryString;
- (id)originalSummaryString;
- (unsigned long long)recurrenceDifferenceCount;
- (id)recurrenceDifferenceTitle;
- (void)resetToOriginalItem;
- (void)setActiveKeyboardHover:(BOOL)a0;
- (BOOL)shouldDisplay;
- (void)updateWithChanges:(id)a0;

@end
