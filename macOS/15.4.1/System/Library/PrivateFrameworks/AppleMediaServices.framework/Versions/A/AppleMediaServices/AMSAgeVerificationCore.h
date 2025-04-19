@interface AMSAgeVerificationCore : NSObject

+ (id)_ageVerificationPresentationResultFromVerificationResult:(id)a0;
+ (id)_appendClientFields:(id)a0 asQueryParametersToURL:(id)a1;
+ (BOOL)_isAgeVerificationNeededForExpiration:(id)a0 at:(id)a1;
+ (BOOL)_isTimestamp:(id)a0 validAsOf:(id)a1;
+ (id)_momentOfExpiryFrom:(id)a0;
+ (id)_resultForAccountVerificationExpirationTimestamp:(id)a0 withBagControlledAgeVerificationRequired:(id)a1 bagWarningThresholdDays:(id)a2 at:(id)a3;
+ (id)_timestampForWarningThresholdDays:(id)a0 addedTo:(id)a1;

@end
