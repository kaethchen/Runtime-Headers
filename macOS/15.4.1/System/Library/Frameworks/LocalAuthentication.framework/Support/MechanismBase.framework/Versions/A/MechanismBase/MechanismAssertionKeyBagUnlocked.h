@class NSString, NSObject;
@protocol OS_dispatch_queue, LACKeyBag;

@interface MechanismAssertionKeyBagUnlocked : MechanismAssertion <LACKeyBagObserver> {
    id<LACKeyBag> _keybag;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)startMonitoring;
- (void)stopMonitoring;
- (void)_handleKeybagStateUpdate;
- (id)assertInState;
- (id)initWithMechanism:(id)a0;
- (id)initWithMechanism:(id)a0 keybag:(id)a1 workQueue:(id)a2;
- (id)initWithMechanism:(id)a0 workQueue:(id)a1;
- (void)keybagStateDidChange:(id)a0;

@end
