@class NSString, SPLocationFetchContext, FMXPCSession, SPRetryCount;
@protocol SPOwnerSessionXPCProtocol;

@interface SPOwnerSessionLocationFetch : NSObject <SPLocationFetchClientXPCProtocol>

@property (retain, nonatomic) FMXPCSession *session;
@property (retain, nonatomic) id<SPOwnerSessionXPCProtocol> proxy;
@property (copy, nonatomic) id /* block */ locationUpdates;
@property (copy, nonatomic) id /* block */ deviceEventUpdates;
@property (copy, nonatomic) id /* block */ locationFetchSessionInvalidationBlock;
@property (retain, nonatomic) SPRetryCount *retryCount;
@property (copy, nonatomic) SPLocationFetchContext *lastContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)remoteInterface;

- (id)init;
- (void).cxx_destruct;
- (void)invalidationHandler:(id)a0;
- (void)interruptionHandler:(id)a0;
- (void)locationForContext:(id)a0 completion:(id /* block */)a1;
- (void)receivedUpdatedDeviceEvents:(id)a0;
- (void)receivedUpdatedLocation:(id)a0;
- (void)setDeviceEventUpdateBlock:(id /* block */)a0;
- (void)setInvalidationBlock:(id /* block */)a0;
- (void)setLocationUpdateBlock:(id /* block */)a0;
- (void)subscribeAndFetchLocationForContext:(id)a0 completion:(id /* block */)a1;
- (void)unsubscribeLocationUpdatesWithCompletion:(id /* block */)a0;

@end
