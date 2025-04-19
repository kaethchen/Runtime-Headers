@interface HomeAttributeLimitResolutionResult : INEnumResolutionResult

+ (id)confirmationRequiredWithHomeAttributeLimitToConfirm:(long long)a0;
+ (id)successWithResolvedHomeAttributeLimit:(long long)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
