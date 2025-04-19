@interface HomeAttributeRangeResolutionResult : INObjectResolutionResult

+ (id)confirmationRequiredWithObjectToConfirm:(id)a0;
+ (id)disambiguationWithObjectsToDisambiguate:(id)a0;
+ (id)successWithResolvedObject:(id)a0;
+ (id)confirmationRequiredWithHomeAttributeRangeToConfirm:(id)a0;
+ (id)disambiguationWithHomeAttributeRangesToDisambiguate:(id)a0;
+ (id)successWithResolvedHomeAttributeRange:(id)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
