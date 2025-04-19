@class NSMutableOrderedSet, NSMutableDictionary, SDConnectionConfiguration;

@interface CSSearchClientConnection : NSObject {
    _Atomic unsigned int _outBatchCount;
}

@property (readonly, nonatomic) unsigned int outBatchCount;
@property (retain, nonatomic) NSMutableDictionary *queryTasks;
@property (retain, nonatomic) SDConnectionConfiguration *configuration;
@property (retain, nonatomic) NSMutableOrderedSet *pausedTasks;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)initWithConnection:(id)a0;
- (id)bundleID;
- (id)protectionClass;
- (id)initWithConnectionConfiguration:(id)a0;
- (void)_didReceiveResultsBatchCompletion;
- (void)_willSendResultsBatch:(id)a0 qid:(long long)a1;
- (id)allowedBundleIDs;
- (void)cancelQueryTask:(long long)a0;
- (void)cancelQueryTask:(long long)a0 wasCanceledByClient:(BOOL)a1;
- (void)cancelQueryTasks;
- (void)overrideMailHitCounts:(id)a0;
- (void)pollResultsForQueryTask:(long long)a0;
- (id)queryTask:(long long)a0;
- (BOOL)searchInternal;
- (void)setQueryTask:(id)a0 forQueryID:(long long)a1;

@end
