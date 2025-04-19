@class NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CSActivationEventNotifier : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSDictionary *handlerMap;

+ (id)sharedNotifier;

- (id)init;
- (void).cxx_destruct;
- (id)_getHandlerFromEvent:(id)a0;
- (id)_getHandlerFromHandlerID:(unsigned long long)a0;
- (void)_notifyActivationEvent:(id)a0 completion:(id /* block */)a1;
- (void)notifyActivationEvent:(id)a0 completion:(id /* block */)a1;
- (void)notifyActivationEvent:(unsigned long long)a0 deviceId:(id)a1 activationInfo:(id)a2 completion:(id /* block */)a3;
- (void)notifyActivationEventSynchronously:(id)a0 completion:(id /* block */)a1;
- (void)notifyDeviceActivationEvent:(id)a0 completion:(id /* block */)a1;

@end
