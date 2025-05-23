@interface HomeUserTaskResolutionResult : INObjectResolutionResult

+ (id)confirmationRequiredWithHomeUserTaskToConfirm:(id)a0;
+ (id)confirmationRequiredWithObjectToConfirm:(id)a0;
+ (id)disambiguationWithHomeUserTasksToDisambiguate:(id)a0;
+ (id)disambiguationWithObjectsToDisambiguate:(id)a0;
+ (id)successWithResolvedHomeUserTask:(id)a0;
+ (id)successWithResolvedObject:(id)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
