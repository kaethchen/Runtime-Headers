@interface HomeAttributeCleaningJobResolutionResult : INObjectResolutionResult

+ (id)confirmationRequiredWithObjectToConfirm:(id)a0;
+ (id)disambiguationWithObjectsToDisambiguate:(id)a0;
+ (id)successWithResolvedObject:(id)a0;
+ (id)confirmationRequiredWithHomeAttributeCleaningJobToConfirm:(id)a0;
+ (id)disambiguationWithHomeAttributeCleaningJobsToDisambiguate:(id)a0;
+ (id)successWithResolvedHomeAttributeCleaningJob:(id)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
