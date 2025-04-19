@interface HomeAttributeTargetMapResolutionResult : INObjectResolutionResult

+ (id)confirmationRequiredWithObjectToConfirm:(id)a0;
+ (id)disambiguationWithObjectsToDisambiguate:(id)a0;
+ (id)successWithResolvedObject:(id)a0;
+ (id)confirmationRequiredWithHomeAttributeTargetMapToConfirm:(id)a0;
+ (id)disambiguationWithHomeAttributeTargetMapsToDisambiguate:(id)a0;
+ (id)successWithResolvedHomeAttributeTargetMap:(id)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
