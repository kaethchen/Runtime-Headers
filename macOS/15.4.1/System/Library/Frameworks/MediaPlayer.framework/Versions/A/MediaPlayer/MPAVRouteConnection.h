@class MRExternalDevice, NSObject;
@protocol OS_dispatch_queue;

@interface MPAVRouteConnection : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    BOOL _invalidated;
    MRExternalDevice *_externalDevice;
}

@property (readonly, nonatomic) void *externalDevice;
@property (readonly, nonatomic) MRExternalDevice *externalDeviceObject;
@property (readonly, nonatomic, getter=isConnected) BOOL connected;
@property (readonly, nonatomic, getter=isConnecting) BOOL connecting;
@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated;
@property (copy, nonatomic) id /* block */ invalidationHandler;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)reset;
- (void)connectWithCompletion:(id /* block */)a0;
- (void)connectWithOptions:(unsigned long long)a0 userInfo:(id)a1 completion:(id /* block */)a2;
- (void *)externalDevice;
- (void)connectWithUserInfo:(id)a0 completion:(id /* block */)a1;
- (void)sendCustomData:(id)a0;
- (void)_connectionStateDidChange:(unsigned int)a0 error:(id)a1;
- (void)_externalDeviceConnectionStateDidChangeNotification:(id)a0;
- (void)connectWithOptions:(unsigned long long)a0 completion:(id /* block */)a1;
- (id)initWithExternalDevice:(void *)a0;
- (id)initWithExternalDeviceObject:(id)a0;
- (void)sendMediaRemoteCommand:(unsigned int)a0 withOptions:(id)a1 completionHandler:(id /* block */)a2;

@end
