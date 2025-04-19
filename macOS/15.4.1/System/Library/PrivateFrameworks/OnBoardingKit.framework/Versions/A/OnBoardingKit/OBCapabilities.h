@class NSNumber, NSString;

@interface OBCapabilities : NSObject

@property (retain, nonatomic) NSNumber *overrideEligibleForChlorine;
@property (retain, nonatomic) NSNumber *overrideEligibilityForGreymatterHasCountryPolicyChina;
@property (retain, nonatomic) NSString *overrideAdditionalDisplayLanguage;
@property (nonatomic) BOOL preventURLDataDetection;
@property (nonatomic) BOOL preventOpeningSafari;

+ (id)sharedCapabilities;

- (void).cxx_destruct;
- (BOOL)isWAPI;
- (BOOL)_eligibilityContextHasCountryPolicyChina:(id)a0;
- (BOOL)_eligibilityCountryPolicyStringIsChina:(const char *)a0;
- (id)_potentialAdditionalDisplayLanguage;
- (id)additionalDisplayLanguageForDisplayLanguage:(id)a0;
- (BOOL)deviceSupportsGenerativeModels;
- (BOOL)eligibilityForGreymatterHasCountryPolicyChina;
- (BOOL)eligibleForChlorine;

@end
