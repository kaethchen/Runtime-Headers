@interface MOContextHistoryReader : NSObject

- (id)_enumeratePublishersForStream:(id)a0 usingBlock:(id /* block */)a1;
- (id)_getFrameworkClientIdentity;
- (unsigned long long)_getLatestFetchIdForClient:(id)a0 usingPublisher:(id)a1;
- (BOOL)_isFetchDetail:(id)a0 matchingBundleId:(id)a1 orAlternateId:(id)a2;
- (void)loadPersonalizedContextWithOptions:(id)a0 withReply:(id /* block */)a1;

@end
