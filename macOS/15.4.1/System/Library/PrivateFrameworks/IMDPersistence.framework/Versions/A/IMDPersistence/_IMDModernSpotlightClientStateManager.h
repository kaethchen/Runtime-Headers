@interface _IMDModernSpotlightClientStateManager : IMDSpotlightClientStateManager

- (id)init;
- (void)_currentClientStateWithCompletion:(id /* block */)a0;
- (id)_missingSpotlightIndexError;
- (void)_saveClientState:(id)a0 withCompletion:(id /* block */)a1;

@end
