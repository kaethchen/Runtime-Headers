@class WBSTranslationContext, NSString, WBSTranslationConsentAlertLearnMoreWindowControllerMac, WBSTranslationConsentAlertHelper;

@interface WebpageTranslationFeedbackController : FeedbackAlertController <WBSTranslationConsentAlertHelperDelegate> {
    WBSTranslationConsentAlertHelper *_consentHelper;
    WBSTranslationConsentAlertLearnMoreWindowControllerMac *_learnMoreController;
}

@property (readonly, nonatomic) WBSTranslationContext *translationContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_handleLearnMoreLinkClick;
- (id)_helpAnchor;
- (id)_informativeTextString;
- (id)_issueStrings;
- (id)_menuTitle;
- (id)_messageText;
- (void)_reportFeedback:(long long)a0;
- (id)initWithTranslationContext:(id)a0;
- (void)translationConsentAlertDidClickHelpButton;

@end
