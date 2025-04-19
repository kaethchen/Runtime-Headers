@interface EKUIImportedEventNoticeGadget : EKUISingleTextFieldGadget

- (BOOL)isEditable;
- (id)initWithViewController:(id)a0;
- (id)placeholderText;
- (id)summaryString;
- (BOOL)shouldDisplay;
- (void)updateWithChanges:(id)a0;

@end
