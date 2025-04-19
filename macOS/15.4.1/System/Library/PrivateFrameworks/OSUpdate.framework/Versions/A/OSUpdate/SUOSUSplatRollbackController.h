@interface SUOSUSplatRollbackController : NSObject

+ (BOOL)splatRollbackDisabled;
+ (id)currentBaseOSProductWithError:(id *)a0;
+ (id)currentSplatProductWithError:(id *)a0;
+ (BOOL)quitAllRunningApplicationsForce:(BOOL)a0;
+ (void)rollbackSplatWithOptions:(id)a0 withCompletion:(id /* block */)a1;
+ (BOOL)securityResponseRollbackSuggested:(id)a0;
+ (BOOL)splatRollbackAvailable;

@end
