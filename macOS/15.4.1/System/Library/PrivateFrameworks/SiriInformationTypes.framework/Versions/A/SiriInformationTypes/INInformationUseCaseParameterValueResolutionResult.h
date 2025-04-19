@interface INInformationUseCaseParameterValueResolutionResult : INObjectResolutionResult

+ (id)confirmationRequiredWithObjectToConfirm:(id)a0;
+ (id)disambiguationWithObjectsToDisambiguate:(id)a0;
+ (id)successWithResolvedObject:(id)a0;
+ (id)confirmationRequiredWithINInformationUseCaseParameterValueToConfirm:(id)a0;
+ (id)disambiguationWithINInformationUseCaseParameterValuesToDisambiguate:(id)a0;
+ (id)successWithResolvedINInformationUseCaseParameterValue:(id)a0;

@end
