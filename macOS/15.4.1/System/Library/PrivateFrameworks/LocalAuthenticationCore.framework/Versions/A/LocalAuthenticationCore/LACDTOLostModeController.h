@class LACBackgroundTask, NSString, NSObject;
@protocol OS_dispatch_queue, LACDTOLostModeProvider, LACDTOKVStore;

@interface LACDTOLostModeController : NSObject <LACDTOLostModeFetchService> {
    id<LACDTOLostModeProvider> _lostModeProvider;
    id<LACDTOKVStore> _store;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property (retain, nonatomic) LACBackgroundTask *lostModeBackgroundTask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_storeLostModeState:(id)a0 completion:(id /* block */)a1;
- (id)_lostModeStateFromBackgroundTaskResult:(id)a0;
- (void)_runLostModeBackgroundTaskWithStrategy:(long long)a0 completion:(id /* block */)a1;
- (void)_runLostModeBackgroundTaskWithTimeout:(double)a0 completion:(id /* block */)a1;
- (void)fetchLostMode:(id)a0 completion:(id /* block */)a1;
- (id)initWithLostModeProvider:(id)a0 store:(id)a1 workQueue:(id)a2;

@end
