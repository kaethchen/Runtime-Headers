@class NSString;

@interface GKPlayerInternalOnboarding : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long lastWelcomeWhatsNewCopyVersionDisplayed;
@property (readonly, nonatomic) unsigned long long lastPrivacyNoticeVersionDisplayed;
@property (readonly, copy, nonatomic) NSString *lastPersonalizationVersionDisplayed;
@property (readonly, copy, nonatomic) NSString *lastProfilePrivacyVersionDisplayed;
@property (readonly, copy, nonatomic) NSString *lastFriendSuggestionsVersionDisplayed;
@property (readonly, copy, nonatomic) NSString *lastContactsIntegrationConsentVersionDisplayed;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)hasAcknowledgedLatestGDPR;
- (id)initWithLastWelcomeWhatsNewCopyVersionDisplayed:(unsigned long long)a0 lastPrivacyNoticeVersionDisplayed:(unsigned long long)a1 lastPersonalizationVersionDisplayed:(id)a2 lastProfilePrivacyVersionDisplayed:(id)a3 lastFriendSuggestionsVersionDisplayed:(id)a4 lastContactsIntegrationConsentVersionDisplayed:(id)a5;
- (BOOL)shouldShowAnyOnboardingScreenForBundleIdentifier:(id)a0 IsUsingDefaultNickname:(BOOL)a1 isUsingDefaultPrivacyVisibility:(BOOL)a2 isUsingDefaultContactsIntegrationConsent:(BOOL)a3;
- (BOOL)shouldShowContactsIntegrationConsentScreenIsUsingDefaultContactsIntegrationConsent:(BOOL)a0;
- (BOOL)shouldShowFriendSuggestionsScreen;
- (BOOL)shouldShowPersonalizationScreenIsUsingDefaultNickname:(BOOL)a0;

@end
