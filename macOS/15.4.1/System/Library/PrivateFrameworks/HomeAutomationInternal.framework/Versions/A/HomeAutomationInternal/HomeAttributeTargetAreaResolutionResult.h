@interface HomeAttributeTargetAreaResolutionResult : INObjectResolutionResult

+ (id)confirmationRequiredWithObjectToConfirm:(id)a0;
+ (id)disambiguationWithObjectsToDisambiguate:(id)a0;
+ (id)successWithResolvedObject:(id)a0;
+ (id)confirmationRequiredWithHomeAttributeTargetAreaToConfirm:(id)a0;
+ (id)disambiguationWithHomeAttributeTargetAreasToDisambiguate:(id)a0;
+ (id)successWithResolvedHomeAttributeTargetArea:(id)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
