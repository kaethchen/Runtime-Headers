@interface INInformationUseCaseUtteranceResolutionResult : INObjectResolutionResult

+ (id)confirmationRequiredWithObjectToConfirm:(id)a0;
+ (id)disambiguationWithObjectsToDisambiguate:(id)a0;
+ (id)successWithResolvedObject:(id)a0;
+ (id)disambiguationWithINInformationUseCaseUtterancesToDisambiguate:(id)a0;
+ (id)confirmationRequiredWithINInformationUseCaseUtteranceToConfirm:(id)a0;
+ (id)successWithResolvedINInformationUseCaseUtterance:(id)a0;

@end
