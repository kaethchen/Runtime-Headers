@class NSString, NSObject;
@protocol OS_dispatch_queue, LACFlagsProvider, LACDTOSensorRepairStateProvider;

@interface LACDTOSensorRepairStateProviderDefaultsDecorator : NSObject <LACDTOSensorRepairStateProvider> {
    id<LACDTOSensorRepairStateProvider> _stateProvider;
    id<LACFlagsProvider> _flags;
    NSObject<OS_dispatch_queue> *_replyQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)fetchRepairStateWithCompletion:(id /* block */)a0;
- (id)initWithStateProvider:(id)a0 flags:(id)a1 replyQueue:(id)a2;

@end
