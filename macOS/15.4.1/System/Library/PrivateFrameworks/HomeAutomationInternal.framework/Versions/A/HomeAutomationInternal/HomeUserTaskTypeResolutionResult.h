@interface HomeUserTaskTypeResolutionResult : INEnumResolutionResult

+ (id)confirmationRequiredWithHomeUserTaskTypeToConfirm:(long long)a0;
+ (id)successWithResolvedHomeUserTaskType:(long long)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
