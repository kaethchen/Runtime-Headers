@interface HomeEntityResponseResolutionResult : INObjectResolutionResult

+ (id)confirmationRequiredWithObjectToConfirm:(id)a0;
+ (id)disambiguationWithObjectsToDisambiguate:(id)a0;
+ (id)successWithResolvedObject:(id)a0;
+ (id)confirmationRequiredWithHomeEntityResponseToConfirm:(id)a0;
+ (id)disambiguationWithHomeEntityResponsesToDisambiguate:(id)a0;
+ (id)successWithResolvedHomeEntityResponse:(id)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
