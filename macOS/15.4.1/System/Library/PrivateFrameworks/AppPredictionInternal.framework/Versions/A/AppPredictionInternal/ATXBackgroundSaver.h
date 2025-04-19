@class _PASLock, ATXSigtermListener, NSObject;
@protocol OS_dispatch_queue;

@interface ATXBackgroundSaver : NSObject <ATXSigtermObserver> {
    NSObject<OS_dispatch_queue> *_queue;
    id /* block */ _block;
    _PASLock *_lock;
    ATXSigtermListener *_sigtermListener;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0 block:(id /* block */)a1;
- (void)handleSigterm;
- (void)_cancelSaveTimer;
- (void)_cancelSaveTimerWithLockWitness:(id)a0;
- (void)_saveImmediatelyOnSigterm;
- (void)scheduleSave;
- (void)scheduleSaveImmediately;

@end
