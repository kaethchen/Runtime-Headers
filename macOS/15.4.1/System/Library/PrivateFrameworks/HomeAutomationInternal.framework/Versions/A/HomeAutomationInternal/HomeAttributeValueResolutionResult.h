@interface HomeAttributeValueResolutionResult : INObjectResolutionResult

+ (id)confirmationRequiredWithObjectToConfirm:(id)a0;
+ (id)disambiguationWithObjectsToDisambiguate:(id)a0;
+ (id)successWithResolvedObject:(id)a0;
+ (id)confirmationRequiredWithHomeAttributeValueToConfirm:(id)a0;
+ (id)disambiguationWithHomeAttributeValuesToDisambiguate:(id)a0;
+ (id)successWithResolvedHomeAttributeValue:(id)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
