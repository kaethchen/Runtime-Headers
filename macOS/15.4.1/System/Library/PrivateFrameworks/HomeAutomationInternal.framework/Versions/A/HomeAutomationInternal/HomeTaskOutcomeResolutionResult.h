@interface HomeTaskOutcomeResolutionResult : INEnumResolutionResult

+ (id)confirmationRequiredWithHomeTaskOutcomeToConfirm:(long long)a0;
+ (id)successWithResolvedHomeTaskOutcome:(long long)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
