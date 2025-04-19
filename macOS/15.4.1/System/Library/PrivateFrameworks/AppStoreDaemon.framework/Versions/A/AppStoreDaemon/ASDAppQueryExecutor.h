@class ASDServiceBroker, ASDDispatchQueue, NSMutableDictionary;

@interface ASDAppQueryExecutor : NSObject {
    ASDDispatchQueue *_dispatchQueue;
    NSMutableDictionary *_queryPromises;
    ASDServiceBroker *_serviceBroker;
}

@property (nonatomic) long long queryOptions;

- (id)init;
- (void).cxx_destruct;
- (id)initWithServiceBroker:(id)a0;
- (void)executeQueryWithPredicate:(id)a0 onPairedDevice:(id)a1 remoteDeviceID:(id)a2 withResultHandler:(id /* block */)a3;
- (void)executeUpdatesQueryWithPredicateReloadingFromServer:(BOOL)a0 onPairedDevice:(id)a1 remoteDeviceID:(id)a2 withResultHandler:(id /* block */)a3;

@end
