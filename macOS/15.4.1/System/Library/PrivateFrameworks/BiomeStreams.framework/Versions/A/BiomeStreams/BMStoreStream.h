@class BMAccessClient, BMStoreSource, NSString, BMStreamDatastorePruner, BMStorePublisherManager, BMStoreConfig, BMFileManager, BMStoreValidator;
@protocol BMStreamDatastorePruningDelegate;

@interface BMStoreStream : NSObject <BMSourceStream, BMTimeBasedPublisherStream, BMSyncableStream> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BMStorePublisherManager *_publisherManager;
    NSString *_streamIdentifier;
    BMStoreSource *_source;
    BMStoreValidator *_validator;
    BMStreamDatastorePruner *_pruner;
    BMStreamDatastorePruner *_tombstonePruner;
    unsigned long long _streamType;
    BMAccessClient *_accessClient;
    BMFileManager *_fileManager;
    Class _eventDataClass;
    id<BMStreamDatastorePruningDelegate> _pruningDelegate;
}

@property (readonly, nonatomic) BMStoreConfig *storeConfig;
@property (readonly, nonatomic) NSString *useCase;
@property (readonly, nonatomic) NSString *identifier;

+ (id)new;
+ (id)_libraryStreamWithIdentifier:(id)a0 eventDataClass:(Class)a1;

- (id)init;
- (void).cxx_destruct;
- (id)source;
- (id)initWithPrivateStreamIdentifier:(id)a0 storeConfig:(id)a1 eventDataClass:(Class)a2;
- (BOOL)pruneEventsWithError:(id *)a0 predicateBlock:(id /* block */)a1;
- (void)pruneWithPredicateBlock:(id /* block */)a0;
- (id)publisher;
- (id)publisherFromStartTime:(double)a0;
- (id)publisherWithStartTime:(id)a0 endTime:(id)a1 maxEvents:(id)a2 lastN:(id)a3 reversed:(BOOL)a4;
- (id)publisherWithStartTime:(id)a0 endTime:(id)a1 maxEvents:(id)a2 reversed:(BOOL)a3;
- (id)validator;
- (id)publisherWithOptions:(id)a0;
- (id)pruner;
- (id)remoteDevices;
- (id)initWithPrivateStreamIdentifier:(id)a0 storeConfig:(id)a1;
- (void)pruneExpiredEventsWithBlock:(id /* block */)a0;
- (id)publishersForRemoteDevices:(id)a0 startTime:(double)a1 includeLocal:(BOOL)a2 pipeline:(id /* block */)a3;
- (id)_initWithRestrictedStreamIdentifier:(id)a0 storeConfig:(id)a1 eventDataClass:(Class)a2;
- (id)tombstoneConfig;
- (id)publisherForDevice:(id)a0 withUseCase:(id)a1;
- (id)tombstonePruner;
- (id)_computeSource;
- (void)_pruneWithStoreConfig:(id)a0 expirationAge:(double)a1 block:(id /* block */)a2;
- (id)_prunerForRemote:(id)a0;
- (id)_publisherForDevice:(id)a0 options:(id)a1;
- (id)_publisherWithOptions:(id)a0;
- (id)_publishersForDevices:(id)a0 includeLocal:(BOOL)a1 options:(id)a2;
- (BOOL)deleteStoreEvent:(id)a0;
- (id)initWithPublicStream:(long long)a0;
- (id)initWithRestrictedStreamIdentifier:(id)a0;
- (id)initWithRestrictedStreamIdentifier:(id)a0 eventDataClass:(Class)a1;
- (id)initWithRestrictedStreamIdentifier:(id)a0 protectionClass:(unsigned long long)a1;
- (id)initWithRestrictedStreamIdentifier:(id)a0 storeConfig:(id)a1;
- (id)initWithRestrictedStreamIdentifier:(id)a0 storeConfig:(id)a1 eventDataClass:(Class)a2;
- (id)initWithStreamIdentifier:(id)a0 storeConfig:(id)a1;
- (id)initWithStreamIdentifier:(id)a0 storeConfig:(id)a1 streamType:(unsigned long long)a2;
- (id)initWithStreamIdentifier:(id)a0 storeConfig:(id)a1 streamType:(unsigned long long)a2 eventDataClass:(Class)a3 useCase:(id)a4;
- (BOOL)pruneEventsOfRemote:(id)a0 withReason:(unsigned long long)a1 policyID:(id)a2 error:(id *)a3 predicateBlock:(id /* block */)a4;
- (void)pruneEventsOfRemote:(id)a0 withReason:(unsigned long long)a1 policyID:(id)a2 usingPredicateBlock:(id /* block */)a3;
- (void)pruneLocalAndRemoteEventsWithPredicateBlock:(id /* block */)a0;
- (void)pruneLocalAndRemoteEventsWithReason:(unsigned long long)a0 usingPredicateBlock:(id /* block */)a1;
- (void)pruneStreamByPruningPolicyMaxStreamSize;
- (void)pruneStreamBySize:(unsigned long long)a0;
- (void)pruneTombstonesByAge:(double)a0;
- (void)pruneWithReason:(unsigned long long)a0 usingPredicateBlock:(id /* block */)a1;
- (id)publisherForDevice:(id)a0 withUseCase:(id)a1 options:(id)a2;
- (id)publisherWithStartTime:(id)a0 withEndTime:(id)a1 withMaxEvents:(id)a2 reversed:(BOOL)a3;
- (id)publishersForDevices:(id)a0 startTime:(id)a1 endTime:(id)a2 maxEvents:(id)a3 lastN:(id)a4 reversed:(BOOL)a5 includeLocal:(BOOL)a6 pipeline:(id /* block */)a7;
- (id)publishersForDevices:(id)a0 startTime:(double)a1 includeLocal:(BOOL)a2 pipeline:(id /* block */)a3;
- (id)publishersForDevices:(id)a0 withUseCase:(id)a1 startTime:(id)a2 endTime:(id)a3 maxEvents:(id)a4 lastN:(id)a5 reversed:(BOOL)a6 includeLocal:(BOOL)a7 pipeline:(id /* block */)a8;
- (id)publishersForDevices:(id)a0 withUseCase:(id)a1 startTime:(double)a2 includeLocal:(BOOL)a3 pipeline:(id /* block */)a4;
- (id)publishersForRemoteDevices:(id)a0 startTime:(id)a1 endTime:(id)a2 maxEvents:(id)a3 lastN:(id)a4 reversed:(BOOL)a5 includeLocal:(BOOL)a6 pipeline:(id /* block */)a7;
- (id)remoteDevicesForAccount:(id)a0 error:(id *)a1;
- (id)remoteDevicesWithError:(id *)a0;

@end
