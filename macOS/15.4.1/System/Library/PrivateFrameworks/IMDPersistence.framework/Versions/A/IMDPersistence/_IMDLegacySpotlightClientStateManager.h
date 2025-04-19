@interface _IMDLegacySpotlightClientStateManager : IMDSpotlightClientStateManager

- (id)init;
- (void)_currentClientStateWithCompletion:(id /* block */)a0;
- (void)_saveClientState:(id)a0 withCompletion:(id /* block */)a1;

@end
