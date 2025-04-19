@class ACAccount;

@interface AMSDeviceOfferRegistrationPrivacyValidator : NSObject

@property (readonly) ACAccount *account;

+ (id)_identifiersForValidationOptions:(unsigned long long)a0;
+ (BOOL)_isPrivacyAcknowledgementForIdentifier:(id)a0 satisfiedOnAccount:(id)a1;
+ (BOOL)_isPrivacyAcknowledgementForIdentifiers:(id)a0 satisfiedOnAccount:(id)a1;
+ (id)_masterEligibilityPrivacyOptionsIdentifiers;
+ (id)_minimumAcknowledgementVersionForIdentifier:(id)a0;
+ (id)_privacyVersionMap;

- (void).cxx_destruct;
- (id)initWithAccount:(id)a0;
- (BOOL)canMasterDevicePerformRegistration;
- (BOOL)isPrivacyRequirementMetForOptions:(unsigned long long)a0;

@end
