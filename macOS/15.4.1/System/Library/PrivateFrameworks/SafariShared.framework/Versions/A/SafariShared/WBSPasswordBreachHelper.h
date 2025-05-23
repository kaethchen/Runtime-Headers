@interface WBSPasswordBreachHelper : NSObject <WBSPasswordBreachHelperProtocol>

- (void)addResultRecordDictionaries:(id)a0 completionHandler:(id /* block */)a1;
- (void)clearAllRecordsWithCompletionHandler:(id /* block */)a0;
- (void)clearRecentlyBreachedResultRecordsWithCompletionHandler:(id /* block */)a0;
- (void)getPasswordEvaluationsForPersistentIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (void)getResultRecordDictionariesForResultQueryDictionaries:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)recentlyBreachedResultRecordDictionariesWithCompletionHandler:(id /* block */)a0;
- (void)runLookupSessionIgnoringMinimumDelay:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)writePasswordEvaluationsToCache:(id)a0 completionHandler:(id /* block */)a1;

@end
