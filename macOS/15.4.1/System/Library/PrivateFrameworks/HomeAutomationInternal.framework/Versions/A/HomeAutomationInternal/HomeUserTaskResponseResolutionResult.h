@interface HomeUserTaskResponseResolutionResult : INObjectResolutionResult

+ (id)confirmationRequiredWithObjectToConfirm:(id)a0;
+ (id)disambiguationWithObjectsToDisambiguate:(id)a0;
+ (id)successWithResolvedObject:(id)a0;
+ (id)confirmationRequiredWithHomeUserTaskResponseToConfirm:(id)a0;
+ (id)disambiguationWithHomeUserTaskResponsesToDisambiguate:(id)a0;
+ (id)successWithResolvedHomeUserTaskResponse:(id)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
