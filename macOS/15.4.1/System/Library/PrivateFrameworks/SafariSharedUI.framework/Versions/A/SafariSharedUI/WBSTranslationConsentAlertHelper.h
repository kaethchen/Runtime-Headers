@protocol WBSTranslationConsentAlertHelperDelegate;

@interface WBSTranslationConsentAlertHelper : NSObject

@property (weak, nonatomic) id<WBSTranslationConsentAlertHelperDelegate> delegate;

- (void).cxx_destruct;
- (id)consentAlertForType:(unsigned long long)a0;
- (id)consentLearnMoreWindowControllerForType:(unsigned long long)a0;

@end
