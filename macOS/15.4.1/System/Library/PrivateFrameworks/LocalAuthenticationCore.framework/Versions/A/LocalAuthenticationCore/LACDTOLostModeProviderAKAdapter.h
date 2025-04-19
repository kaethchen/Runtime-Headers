@class NSString, LACDTOLostModeState, NSObject;
@protocol OS_dispatch_queue, LACDTODeviceInfoProvider;

@interface LACDTOLostModeProviderAKAdapter : NSObject <LACDTOLostModeProvider> {
    NSObject<OS_dispatch_queue> *_workQueue;
    LACDTOLostModeState *_lostModeState;
    id<LACDTODeviceInfoProvider> _deviceInfo;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_lostModeStateWithCompletion:(id /* block */)a0;
- (id)initWithWorkQueue:(id)a0 deviceInfo:(id)a1;
- (void)lostModeStateWithCompletion:(id /* block */)a0;

@end
