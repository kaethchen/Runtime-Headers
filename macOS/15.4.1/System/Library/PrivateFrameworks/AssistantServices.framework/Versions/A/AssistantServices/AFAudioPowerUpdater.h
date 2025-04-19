@class NSObject;
@protocol AFAudioPowerProviding, AFAudioPowerUpdaterDelegate, OS_dispatch_source, OS_dispatch_queue;

@interface AFAudioPowerUpdater : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timer;
    id<AFAudioPowerUpdaterDelegate> _delegate;
    void *_sharedMemory;
    float _averagePower;
    float _peakPower;
}

@property (readonly, nonatomic) id<AFAudioPowerProviding> provider;
@property (readonly, nonatomic) long long frequency;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (void)_beginUpdate;
- (void)_endUpdate;
- (void)_invalidate;
- (void)_timerFired;
- (id)_createNewXPCWrapper;
- (void)_createNewXPCWrapperWithCompletion:(id /* block */)a0;
- (BOOL)_createSharedMemory;
- (id)_createSharedMemoryXPCObject;
- (void)_destroySharedMemory;
- (void)_getPowerWithCompletion:(id /* block */)a0;
- (float)_unsafeAveragePower;
- (float)_unsafePeakPower;
- (void)_updatePowerWithAveragePower:(float)a0 andPeakPower:(float)a1;
- (void)_writeSharedMemoryWithAveragePower:(float)a0 peakPower:(float)a1;
- (void)beginUpdate;
- (void)createNewXPCWrapperWithCompletion:(id /* block */)a0;
- (void)endUpdate;
- (void)getPowerWithCompletion:(id /* block */)a0;
- (id)initWithProvider:(id)a0 queue:(id)a1 frequency:(long long)a2 delegate:(id)a3;

@end
