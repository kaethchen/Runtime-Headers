@class NSButton, NSString, NSPopUpButton, NSAlert, NSWindow;

@interface FeedbackAlertController : NSObject <NSTextFieldDelegate> {
    NSWindow *_sheetWindow;
    NSAlert *_alert;
    NSButton *_cancelButton;
    NSButton *_reportButton;
    double _stackViewWidth;
    NSPopUpButton *_issuePopupButton;
    NSPopUpButton *_subCategoryPopupButton;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)textField:(id)a0 textView:(id)a1 clickedOnLink:(id)a2 atIndex:(unsigned long long)a3;
- (void)beginSheetModalForWindow:(id)a0;
- (id)_alertAccessoryStackView;
- (id)_attributedInformativeText;
- (id)_clickableTextFieldWithAttributedInformativeText:(id)a0;
- (id)_createPopUpButtonWithTitle:(id)a0 optionStrings:(id)a1;
- (void)_createReportButton;
- (void)_handleLearnMoreLinkClick;
- (id)_helpAnchor;
- (id)_informativeTextString;
- (void)_issueSelectionDidChange:(id)a0;
- (id)_issueStrings;
- (id)_menuTitle;
- (id)_messageText;
- (void)_presentLearnMoreView:(id)a0;
- (void)_report:(id)a0;
- (void)_reportFeedback:(long long)a0;
- (void)_setUpAlert;

@end
