@class _PASLock, NSObject;
@protocol OS_dispatch_semaphore;

@interface PPDKStorage : NSObject {
    _PASLock *_entityLock;
    _PASLock *_topicLock;
    NSObject<OS_dispatch_semaphore> *_entityWriteSem;
    NSObject<OS_dispatch_semaphore> *_topicWriteSem;
}

@property (readonly, nonatomic) double topicStreamCooldownTimeRemaining;
@property (readonly, nonatomic) double entityStreamCooldownTimeRemaining;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (id)tombstoneStream;
- (BOOL)deleteAllEventsInEventStream:(id)a0 error:(id *)a1;
- (id)entityStream;
- (id)topicStream;
- (BOOL)saveEvents:(id)a0 stream:(id)a1 maxRetries:(long long)a2 retryInterval:(double)a3 shouldContinueBlock:(id /* block */)a4;
- (BOOL)deleteAllEventsInEventStream:(id)a0 matchingPredicate:(id)a1 error:(id *)a2;
- (BOOL)deleteEvents:(id)a0 error:(id *)a1;
- (id)eventForNamedEntityRecord:(id)a0 sourceDeviceID:(id)a1;
- (id)eventForTopicRecord:(id)a0 sourceDeviceID:(id)a1;
- (BOOL)iterEventBatchesMatchingPredicate:(id)a0 streams:(id)a1 sortDescriptors:(id)a2 batchSize:(unsigned long long)a3 error:(id *)a4 block:(id /* block */)a5;
- (BOOL)iterEventBatchesMatchingPredicate:(id)a0 streams:(id)a1 sortDescriptors:(id)a2 batchSize:(unsigned long long)a3 readMetaData:(BOOL)a4 remoteOnly:(BOOL)a5 error:(id *)a6 block:(id /* block */)a7;
- (id)namedEntityRecordFromEvent:(id)a0;
- (double)namedEntityWriteBatchInterval;
- (unsigned int)namedEntityWriteBatchSize;
- (unsigned int)readBatchSize;
- (id)registerForNamedEntitiesRemoteAdditionWithBlock:(id /* block */)a0;
- (id)registerForNamedEntitiesRemoteDeletionWithBlock:(id /* block */)a0;
- (id)registerForTopicsRemoteAdditionWithBlock:(id /* block */)a0;
- (id)registerForTopicsRemoteDeletionWithBlock:(id /* block */)a0;
- (id)topicRecordFromEvent:(id)a0;
- (double)topicWriteBatchInterval;
- (unsigned int)topicWriteBatchSize;

@end
