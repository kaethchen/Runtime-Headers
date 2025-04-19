@interface CKPrivacyController : NSObject

+ (void)_acknowledgePrivacyConsentForIdentifiers:(id)a0 account:(id)a1;
+ (BOOL)_mergeLocalPrivacyConsentWithAccount:(id)a0;
+ (BOOL)_shouldDisableGDPR;
+ (void)acknowledgePrivacyLinkForIdentifier:(id)a0 storeClient:(id)a1;
+ (BOOL)shouldDisplayPrivacyLinkForIdentifier:(id)a0 storeClient:(id)a1;

@end
