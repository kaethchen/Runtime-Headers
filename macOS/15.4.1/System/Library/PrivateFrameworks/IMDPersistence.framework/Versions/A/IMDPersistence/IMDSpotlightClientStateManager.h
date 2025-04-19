@interface IMDSpotlightClientStateManager : NSObject

+ (id)sharedManager;

- (id)description;
- (void)_migrateClientStateFromManager:(id)a0;
- (void)saveClientState:(id)a0 withCompletion:(id /* block */)a1;
- (void)_currentClientStateWithCompletion:(id /* block */)a0;
- (void)_saveClientState:(id)a0 withCompletion:(id /* block */)a1;
- (id)_timeoutError;
- (void)currentClientStateWithCompletion:(id /* block */)a0;
- (id)currentClientStateWithError:(id *)a0;
- (void)saveClientState:(id)a0;
- (void)saveClientState:(id)a0 withError:(id *)a1;

@end
