@interface INInformationUseCaseParameterResolutionResult : INObjectResolutionResult

+ (id)confirmationRequiredWithObjectToConfirm:(id)a0;
+ (id)disambiguationWithObjectsToDisambiguate:(id)a0;
+ (id)successWithResolvedObject:(id)a0;
+ (id)confirmationRequiredWithINInformationUseCaseParameterToConfirm:(id)a0;
+ (id)disambiguationWithINInformationUseCaseParametersToDisambiguate:(id)a0;
+ (id)successWithResolvedINInformationUseCaseParameter:(id)a0;

@end
