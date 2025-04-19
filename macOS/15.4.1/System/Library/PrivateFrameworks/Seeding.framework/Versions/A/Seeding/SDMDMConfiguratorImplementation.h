@interface SDMDMConfiguratorImplementation : NSObject

+ (long long)applyMDMConfiguration:(id)a0;
+ (long long)conditionallyUnenrollIfNotMatchingOfferedTokensWithConfig:(id)a0 userIdentifier:(id)a1;
+ (void)configureWithOfferProgramTokens:(id)a0 requireProgramToken:(id)a1 enrollmentPolicy:(long long)a2 userIdentifier:(id)a3 completion:(id /* block */)a4;
+ (long long)enrollWithRequireProgramToken:(id)a0 userIdentifier:(id)a1;
+ (BOOL)isBetaEnrollmentDisabled;
+ (BOOL)shouldReturnBecauseOfInvalidTokens:(id)a0 andReportErrorWith:(id /* block */)a1;

@end
