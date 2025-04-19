@class NSString;

@interface EKUISummaryGadget : EKUISingleTextFieldGadget <EKUISummary>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEditable;
- (id)initWithViewController:(id)a0;
- (id)summaryString;
- (id)attributedSummaryString;
- (void)setActiveKeyboardHover:(BOOL)a0;
- (void)updateWithChanges:(id)a0;

@end
