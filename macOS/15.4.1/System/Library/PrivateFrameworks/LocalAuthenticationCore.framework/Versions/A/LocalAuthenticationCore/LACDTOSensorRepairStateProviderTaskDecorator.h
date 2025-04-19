@class NSString, LACBackgroundTask, NSObject;
@protocol OS_dispatch_queue, LACDTOSensorRepairStateProvider;

@interface LACDTOSensorRepairStateProviderTaskDecorator : NSObject <LACDTOSensorRepairStateProvider> {
    id<LACDTOSensorRepairStateProvider> _provider;
    NSObject<OS_dispatch_queue> *_replyQueue;
    LACBackgroundTask *_backgroundTask;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)fetchRepairStateWithCompletion:(id /* block */)a0;
- (id)_repairStateBackgroundTask;
- (id)initWithProvider:(id)a0 replyQueue:(id)a1;

@end
