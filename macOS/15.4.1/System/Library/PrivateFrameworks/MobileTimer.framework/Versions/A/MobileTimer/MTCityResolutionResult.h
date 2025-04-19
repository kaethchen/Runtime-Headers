@interface MTCityResolutionResult : INObjectResolutionResult

+ (BOOL)supportsSecureCoding;
+ (id)confirmationRequiredWithMTCityToConfirm:(id)a0;
+ (id)disambiguationWithMTCitysToDisambiguate:(id)a0;
+ (id)successWithResolvedMTCity:(id)a0;

@end
