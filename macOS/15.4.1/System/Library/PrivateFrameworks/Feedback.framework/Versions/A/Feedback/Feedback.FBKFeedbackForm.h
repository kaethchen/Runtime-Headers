@interface Feedback.FBKFeedbackForm : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ answers;
    void /* unknown type, empty encoding */ authenticationMethod;
    void /* unknown type, empty encoding */ attachments;
    void /* unknown type, empty encoding */ attachmentDescriptors;
    void /* unknown type, empty encoding */ _hideAttachmentButton;
    void /* unknown type, empty encoding */ _disableAccountSwitching;
    void /* unknown type, empty encoding */ _showInlineUserInfo;
    void /* unknown type, empty encoding */ _showUserSwitcherLast;
    void /* unknown type, empty encoding */ _alternateImagePreviewEnabled;
    void /* unknown type, empty encoding */ _useInlineChoices;
    void /* unknown type, empty encoding */ _maxInlineChoices;
    void /* unknown type, empty encoding */ _onBoardingKitIdentifier;
    void /* unknown type, empty encoding */ formResponses;
    void /* unknown type, empty encoding */ autoGathersDiagnosticExtensions;
    void /* unknown type, empty encoding */ allowsAttachmentDragAndDrop;
    void /* unknown type, empty encoding */ localizedAttachmentLegalText;
    void /* unknown type, empty encoding */ localizedAttributedLegalString;
    void /* unknown type, empty encoding */ _enableTwoColumnCheckboxes;
    void /* unknown type, empty encoding */ _largeTitleIcon;
    void /* unknown type, empty encoding */ alwaysDeletesDrafts;
    void /* unknown type, empty encoding */ launchedInBatchMode;
    void /* unknown type, empty encoding */ _displayTitle;
    void /* unknown type, empty encoding */ sandboxExtensionAttachments;
    void /* unknown type, empty encoding */ formId;
    void /* unknown type, empty encoding */ plugFormIds;
    void /* unknown type, empty encoding */ environment;
    void /* unknown type, empty encoding */ host;
    void /* unknown type, empty encoding */ appToken;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
