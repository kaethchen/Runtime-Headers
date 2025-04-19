@class NSString, BMStoreStream, BMStreamConfiguration, BMSQLSchema;

@interface BMStreamBase : NSObject <BMSyncableStream, BMSharedSyncableStream> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BMStoreStream *_storeStream;
}

@property (readonly, nonatomic) BMStoreStream *storeStream;
@property (readonly, nonatomic) BMStreamConfiguration *configuration;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BMSQLSchema *schema;

+ (BOOL)_atLeastOneSegmentFileInDirectory:(id)a0 fileManager:(id)a1;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)source;
- (id)publisher;
- (id)publisherWithUseCase:(id)a0 options:(id)a1;
- (id)publisherWithOptions:(id)a0;
- (id)pruner;
- (id)subscriptionSource;
- (id)remoteDevices;
- (id)publisherWithUseCase:(id)a0;
- (id)DSLPublisher;
- (id)initWithIdentifier:(id)a0 schema:(id)a1 configuration:(id)a2;
- (id)publishersForRemoteDevices:(id)a0 startTime:(double)a1 includeLocal:(BOOL)a2 pipeline:(id /* block */)a3;
- (id)sourceWithUser:(unsigned int)a0;
- (id)tombstoneStoreStreamForUseCase:(id)a0;
- (id)DSLPublisherWithUseCase:(id)a0;
- (id)_storeStreamForAccount:(id)a0 useCase:(id)a1;
- (void)executePruningPolicyForAccount:(id)a0;
- (id)publisherForDevice:(id)a0 withUseCase:(id)a1;
- (void)_executePruningPolicyOnSubscriptionSubstream;
- (void)_pruneDisabledSubstreams;
- (void)_pruneEmptyRemotesNotRecentlyModified;
- (id)_storeStreamForUseCase:(id)a0;
- (id)_storeStreamForUser:(unsigned int)a0 useCase:(id)a1;
- (id)prunerForDevice:(id)a0;
- (id)publisherForAccount:(id)a0 device:(id)a1 withUseCase:(id)a2;
- (id)publisherForAccount:(id)a0 device:(id)a1 withUseCase:(id)a2 options:(id)a3;
- (id)publisherForDevice:(id)a0 withUseCase:(id)a1 options:(id)a2;
- (id)publisherWithUser:(unsigned int)a0 useCase:(id)a1 options:(id)a2;
- (id)publishersForAccounts:(id)a0 deviceTypes:(unsigned long long)a1 includeLocal:(BOOL)a2 options:(id)a3 useCase:(id)a4 pipeline:(id /* block */)a5;
- (id)publishersForDevices:(id)a0 startTime:(id)a1 endTime:(id)a2 maxEvents:(id)a3 lastN:(id)a4 reversed:(BOOL)a5 includeLocal:(BOOL)a6 pipeline:(id /* block */)a7;
- (id)publishersForDevices:(id)a0 startTime:(double)a1 includeLocal:(BOOL)a2 pipeline:(id /* block */)a3;
- (id)publishersForDevices:(id)a0 withUseCase:(id)a1 startTime:(id)a2 endTime:(id)a3 maxEvents:(id)a4 lastN:(id)a5 reversed:(BOOL)a6 includeLocal:(BOOL)a7 pipeline:(id /* block */)a8;
- (id)publishersForDevices:(id)a0 withUseCase:(id)a1 startTime:(double)a2 includeLocal:(BOOL)a3 pipeline:(id /* block */)a4;
- (id)publishersForRemoteDevices:(id)a0 startTime:(id)a1 endTime:(id)a2 maxEvents:(id)a3 lastN:(id)a4 reversed:(BOOL)a5 includeLocal:(BOOL)a6 pipeline:(id /* block */)a7;
- (id)remoteDevicesForAccount:(id)a0 error:(id *)a1;
- (id)remoteDevicesWithError:(id *)a0;
- (id)sharedDeviceAccountsWithError:(id *)a0;
- (id)sharedDeviceAccountsWithUseCase:(id)a0;
- (id)storeStreamWithLegacyClass:(Class)a0;
- (id)subscriptionDSLPublisher;
- (id)subscriptionDSLPublisherWithUseCase:(id)a0;
- (id)subscriptionPruner;
- (id)subscriptionPublisherWithOptions:(id)a0;
- (id)subscriptionPublisherWithUseCase:(id)a0 options:(id)a1;
- (id)subscriptionStoreStreamForUseCase:(id)a0;
- (id)tombstoneDSLPublisherWithUseCase:(id)a0;
- (id)tombstonePublisherWithUseCase:(id)a0 account:(id)a1 device:(id)a2 options:(id)a3;
- (id)tombstonePublisherWithUseCase:(id)a0 device:(id)a1 options:(id)a2;
- (id)tombstonePublisherWithUseCase:(id)a0 options:(id)a1;
- (id)tombstoneStoreStreamForUseCase:(id)a0 account:(id)a1;

@end
