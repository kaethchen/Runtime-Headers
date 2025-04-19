@class LACKeyBagStateProviderMKBAdapter, NSString, LACKeyBagObserverCollection, LACDarwinNotificationCenter;

@interface LACKeyBagMKBAdapter : NSObject <LACDarwinNotificationCenterObserver, LACKeyBag> {
    long long _state;
    LACKeyBagStateProviderMKBAdapter *_keyBagStateProvider;
    LACKeyBagObserverCollection *_observers;
    LACDarwinNotificationCenter *_notificationCenter;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (long long)state;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)notificationCenter:(id)a0 didReceiveNotification:(struct __CFString { } *)a1;
- (id)initWithUserId:(unsigned int)a0;
- (void)_addKeybagStatusObserver;
- (void)_removeKeybagStatusObserver;
- (void)_updateKeybagState;
- (id)initWithKeyBagStateProvider:(id)a0 notificationCenter:(id)a1;

@end
