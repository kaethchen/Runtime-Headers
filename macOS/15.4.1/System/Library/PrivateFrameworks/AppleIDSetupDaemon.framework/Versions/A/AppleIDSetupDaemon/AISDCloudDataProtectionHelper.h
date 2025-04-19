@class NSObject, CDPStateController;
@protocol OS_dispatch_queue;

@interface AISDCloudDataProtectionHelper : NSObject

@property (retain, nonatomic) CDPStateController *stateController;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (BOOL)_onqueue_checkAvailability:(id *)a0;
- (void)checkAvailabilityWithCompletionHandler:(id /* block */)a0;
- (id)initWithStateController:(id)a0 queue:(id)a1;

@end
