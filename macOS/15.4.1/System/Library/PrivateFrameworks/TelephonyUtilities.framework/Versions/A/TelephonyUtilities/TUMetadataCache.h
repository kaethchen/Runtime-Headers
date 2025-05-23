@class NSArray, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface TUMetadataCache : NSObject <TUMetadataCacheDataProviderDelegate>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, copy, nonatomic) NSArray *providers;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)classIdentifier;

- (id)init;
- (void).cxx_destruct;
- (void)_updateCacheWithDestinationIDs:(id)a0 onlyEmptyProviders:(BOOL)a1 completion:(id /* block */)a2;
- (void)dataProvider:(id)a0 requestedRefreshWithDestinationIDs:(id)a1;
- (id)initWithDataProviders:(id)a0;
- (id)initWithQueue:(id)a0 dataProviders:(id)a1;
- (id)metadataForDestinationID:(id)a0;
- (void)updateCacheForEmptyDataProvidersWithDestinationIDs:(id)a0;
- (void)updateCacheForEmptyDataProvidersWithDestinationIDs:(id)a0 completion:(id /* block */)a1;
- (void)updateCacheWithDestinationIDs:(id)a0;
- (void)updateCacheWithDestinationIDs:(id)a0 completion:(id /* block */)a1;

@end
