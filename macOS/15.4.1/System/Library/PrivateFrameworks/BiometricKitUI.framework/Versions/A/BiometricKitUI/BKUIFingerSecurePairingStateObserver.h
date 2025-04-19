@class NSObject;
@protocol OS_os_log;

@interface BKUIFingerSecurePairingStateObserver : NSObject {
    NSObject<OS_os_log> *secure_pairing_state_watcher_logs;
}

@property (nonatomic) int pairingNotificationObserverToken;
@property (nonatomic) int pairingNotificationReadToken;
@property (nonatomic) BOOL keyboardWasPairing;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (id)pairedAccessory;
- (id)initForMacBuddy;
- (void)_invalidateTokenIfNeeded:(int)a0;
- (id)initWithPairingStateObserver:(id /* block */)a0;
- (BOOL)isBKDevicePaired;
- (unsigned long long)pairingUIDisplayState;
- (void)registerForSecurePairingStateObserver:(id /* block */)a0;

@end
