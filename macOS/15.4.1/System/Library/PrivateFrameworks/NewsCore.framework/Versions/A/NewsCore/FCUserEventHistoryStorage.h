@class NSString, NFLazy, NSArray, NSHashTable, FCUserEventHistoryMetadata, NSDate, NSURL;
@protocol FCNewsAppConfigurationManager;

@interface FCUserEventHistoryStorage : NSObject <FCUserEventHistoryStorageType>

@property (retain, nonatomic) NFLazy *lazyRootDirectory;
@property (readonly, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) NSArray *prunedSessionIDs;
@property (nonatomic) unsigned long long prunedSessionSize;
@property (retain, nonatomic) FCUserEventHistoryMetadata *metadata;
@property (nonatomic) unsigned long long currentSize;
@property (retain, nonatomic) id<FCNewsAppConfigurationManager> configurationManager;
@property (readonly, nonatomic) NSArray *sessionIDs;
@property (readonly, nonatomic) NSArray *sessions;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) NSDate *earliestSessionDate;
@property (readonly, nonatomic) unsigned long long size;
@property (readonly, nonatomic) NSURL *baseDirectoryURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (id)rootDirectory;
- (void)clearHistory;
- (id)initWithRootDirectory:(id)a0;
- (void)_pruneSessions:(id)a0;
- (id)_deleteSessionsWithIdentifiers:(id)a0 pruned:(BOOL)a1;
- (id)_filePathForSessionID:(id)a0;
- (void)_pruneSessionsWithIdentifiers:(id)a0;
- (void)_pruneSessionsWithInvalidIdentifiers;
- (void)_pruneToMaxSessionAge:(unsigned long long)a0;
- (void)_pruneToMaxSessionCount:(unsigned long long)a0;
- (void)_pruneToMaxSize:(long long)a0;
- (long long)_sizeForSessionAtPath:(id)a0;
- (void)clearAllSessions;
- (void)clearSessionsWithIDs:(id)a0;
- (id)initWithRootDirectory:(id)a0 configurationManager:(id)a1;
- (id)pruneWithPolicies:(id)a0;
- (void)setMetadataWithAggregateStoreGenerationTime:(long long)a0 aggregateTotalCount:(long long)a1 meanCountOfEvents:(double)a2 standardDeviationOfEvents:(double)a3 totalEventsCount:(long long)a4 headlineEventCount:(long long)a5 headlinesWithValidTitleEmbeddingsEventCount:(long long)a6 headlinesWithInvalidTitleEmbeddingsEventCount:(long long)a7 headlinesWithValidBodyEmbeddingsEventCount:(long long)a8 headlinesWithInvalidBodyEmbeddingsEventCount:(long long)a9 eventCounts:(id)a10 aggregateStoreData:(id)a11;
- (id)sizeString;
- (void)storeSessionID:(id)a0 compressedSessionData:(id)a1 notify:(BOOL)a2;
- (void)storeSessionID:(id)a0 sessionData:(id)a1;
- (void)writeJSON:(id /* block */)a0;

@end
