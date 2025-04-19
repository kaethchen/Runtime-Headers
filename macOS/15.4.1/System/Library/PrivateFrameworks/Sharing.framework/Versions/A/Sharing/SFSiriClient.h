@class NSObject;
@protocol OS_dispatch_queue;

@interface SFSiriClient : NSObject {
    BOOL _invalidateCalled;
    unsigned int _invalidateFlags;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) id /* block */ siriDialogHandler;

- (id)init;
- (void)_activate;
- (void).cxx_destruct;
- (void)invalidate;
- (void)activate;
- (void)_invalidate;
- (void)stopSpeaking;
- (void)invalidateWithFlags:(unsigned int)a0;
- (void)_deviceSetupEnd;
- (void)deviceSetupBegin:(unsigned long long)a0;
- (void)deviceSetupEnd;
- (void)deviceSetupPlayGreetingID:(int)a0 completion:(id /* block */)a1;
- (void)deviceSetupPrepareGreeting:(id /* block */)a0;
- (void)preWarmDeviceSetupWelcomePhaseWithCompletion:(id /* block */)a0;
- (void)speakDeviceSetupWelcomePhaseWithCompletion:(id /* block */)a0;
- (void)speakPasscode:(id)a0 instructions:(id)a1 languageCode:(id)a2 voiceName:(id)a3 flags:(unsigned int)a4 completion:(id /* block */)a5;
- (void)speakText:(id)a0 completion:(id /* block */)a1;
- (void)speakText:(id)a0 flags:(unsigned int)a1 rate:(double)a2 delay:(double)a3 startHandler:(id /* block */)a4 completion:(id /* block */)a5;
- (void)speakText:(id)a0 languageCode:(id)a1 completion:(id /* block */)a2;
- (void)speakText:(id)a0 rate:(double)a1 completion:(id /* block */)a2;

@end
