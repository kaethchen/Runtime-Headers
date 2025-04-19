@class NSString, NSMutableDictionary;

@interface HKFeatureAvailabilityLocalRequirementEvaluationContext : HKFeatureAvailabilityRequirementEvaluationDataSource {
    NSString *_currentCountryCode;
}

@property (nonatomic) long long _unitTest_cacheHits;
@property (retain, nonatomic) NSMutableDictionary *eligibilityByFeatureIdentifier;
@property (retain, nonatomic) NSMutableDictionary *eligibilityByCountryCodeByFeatureIdentifier;
@property (retain, nonatomic) NSMutableDictionary *onboardingRecordByFeatureIdentifier;
@property (retain, nonatomic) NSMutableDictionary *regionAvailabilityByFeatureIdentifier;
@property (retain, nonatomic) NSMutableDictionary *watchAppInstallationStateByBundleIdentifier;
@property (retain, nonatomic) NSMutableDictionary *featureStatusByIdentifierAndContext;

- (void).cxx_destruct;
- (id)currentCountryCode;
- (id)featureStatusForFeatureWithIdentifier:(id)a0 context:(id)a1 error:(id *)a2;
- (id)isWatchAppInstalledWithBundleIdentifier:(id)a0 error:(id *)a1;
- (id)onboardingEligibilityForFeatureWithIdentifier:(id)a0 countryCode:(id)a1 error:(id *)a2;
- (id)onboardingEligibilityForFeatureWithIdentifier:(id)a0 error:(id *)a1;
- (id)onboardingRecordForFeatureWithIdentifier:(id)a0 error:(id *)a1;
- (id)regionAvailabilityForFeatureWithIdentifier:(id)a0 error:(id *)a1;

@end
