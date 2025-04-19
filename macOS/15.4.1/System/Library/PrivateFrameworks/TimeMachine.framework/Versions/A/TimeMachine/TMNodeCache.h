@class NSURL, TMMessageSerializer;

@interface TMNodeCache : TMMonoStructure {
    struct vector<NodeCacheEntry, std::allocator<NodeCacheEntry>> { struct NodeCacheEntry *__begin_; struct NodeCacheEntry *__end_; struct __compressed_pair<NodeCacheEntry *, std::allocator<NodeCacheEntry>> { struct NodeCacheEntry *__value_; } __end_cap_; } _uncommittedEntries;
}

@property (retain) NSURL *updatingStableCacheURL;
@property (retain) NSURL *updatingCloneCacheURL;
@property (readonly) TMMessageSerializer *serializer;

+ (id)structureType;
+ (id)URLForBuildUnderURL:(id)a0 error:(id *)a1;
+ (BOOL)_appendEntries:(struct vector<NodeCacheEntry, std::allocator<NodeCacheEntry>> { struct NodeCacheEntry *x0; struct NodeCacheEntry *x1; struct __compressed_pair<NodeCacheEntry *, std::allocator<NodeCacheEntry>> { struct NodeCacheEntry *x0; } x2; })a0 toURL:(id)a1 error:(id *)a2;
+ (id)annotatedStateAtURL:(id)a0;
+ (id)cacheFileURLForSourceUUID:(id)a0 backupStartDate:(id)a1 underURL:(id)a2;
+ (id)immemorialFileURLUnderURL:(id)a0;
+ (BOOL)isTemporaryCacheFileAtURL:(id)a0;
+ (id)nearestFutureDateForDate:(id)a0 inDates:(id)a1;
+ (id)tempCacheFileURLForSourceUUID:(id)a0 backupStartDate:(id)a1 underURL:(id)a2;

- (id)description;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)_allSourceUUIDs;
- (BOOL)WIP_storeBackupCompletionDate:(id)a0 forBackupStartDate:(id)a1 error:(id *)a2;
- (void)_addEntry:(struct NodeCacheEntry { unsigned long x0 : 60; unsigned long x1 : 60; unsigned short x2 : 16; })a0;
- (BOOL)_enumerateAllFilesStartedBetweenDate:(id)a0 endDate:(id)a1 sourceUUID:(id)a2 error:(id *)a3 enumerator:(id /* block */)a4;
- (BOOL)_enumerateEntriesForBackupStartDate:(id)a0 sourceUUID:(id)a1 error:(id *)a2 enumerator:(id /* block */)a3;
- (BOOL)_enumerateEntriesInFile:(id)a0 error:(id *)a1 enumerator:(id /* block */)a2;
- (BOOL)_enumerateEntriesStartedBetweenDate:(id)a0 endDate:(id)a1 sourceUUID:(id)a2 error:(id *)a3 enumerator:(id /* block */)a4;
- (BOOL)_enumerateFilesForBackupStartDate:(id)a0 sourceUUID:(id)a1 backupCompletionDate:(id)a2 error:(id *)a3 enumerator:(id /* block */)a4;
- (id)_mergeCacheFilesBetweenStartDate:(id)a0 endDate:(id)a1 sourceUUID:(id)a2 intoDate:(id)a3 error:(id *)a4;
- (id)_mostRecentCompletionDate;
- (BOOL)buildAtURL:(id)a0 parentURL:(id)a1 error:(id *)a2;
- (BOOL)cleanCache:(id *)a0;
- (BOOL)collectFileIDsToBeDeletedUnderURL:(id)a0 sourceUUID:(id)a1 backupStartDate:(id)a2 error:(id *)a3;
- (id)destinationDeletedFileIDsSetForBackupStartDate:(id)a0 error:(id *)a1;
- (id)destinationFileIDsDeletedForBackupStartDate:(id)a0 error:(id *)a1;
- (BOOL)finishUpdatingCurrentCache:(id *)a0;
- (BOOL)flushCache:(id *)a0;
- (id)immemorialCacheURL;
- (id)initWithUUID:(id)a0 url:(id)a1;
- (BOOL)purgeEntriesForAllBackupCompletionDatesExcept:(id)a0 error:(id *)a1;
- (void)recordBackupAction:(unsigned long long)a0 sourceFileID:(unsigned long long)a1 destinationFileID:(unsigned long long)a2;
- (void)recordUnlinkOfFile:(unsigned long long)a0 wasLastUnlink:(BOOL)a1;
- (BOOL)startUpdatingCacheForSourceUUID:(id)a0 backupStartDate:(id)a1 error:(id *)a2;
- (BOOL)storeBackupCompletionDate:(id)a0 forBackupStartDate:(id)a1 error:(id *)a2;

@end
