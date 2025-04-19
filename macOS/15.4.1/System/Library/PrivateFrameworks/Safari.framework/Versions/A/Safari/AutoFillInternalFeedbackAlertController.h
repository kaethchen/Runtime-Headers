@class NSButton, NSString, NSStackView, NSTextField, NSPopUpButton, NSAlert, NSWindow;

@interface AutoFillInternalFeedbackAlertController : WBSAutoFillInternalFeedbackController <NSTextFieldDelegate> {
    NSAlert *_alert;
    NSWindow *_sheetWindow;
    NSButton *_cancelButton;
    NSButton *_continueInTapToRadarButton;
    double _stackViewWidth;
    NSStackView *_accessoryStackView;
    NSPopUpButton *_feedbackCategoryPopupButton;
    NSStackView *_detailsStackView;
    NSButton *_regressionCheckBox;
    NSTextField *_knownWorkingBuildTextField;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)controlTextDidChange:(id)a0;
- (void)beginSheetModalForWindow:(id)a0;
- (void)_attachmentSetSelectionDidChange:(id)a0;
- (void)_feedbackCategorySelectionDidChange:(id)a0;
- (void)_generateAccessoryStackView;
- (void)_generateFeedbackCategoryPopUpButton;
- (void)_isRegressionSelectionDidChange:(id)a0;
- (void)_recomputeAccessoryStackViewSize;
- (void)_setUpAlert;
- (void)_updateContinueInTapToRadarButton;
- (void)_updateDetailQuestions;
- (void)_updateKnownWorkingBuildTextField;

@end
