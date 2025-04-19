@class NSString, BSOrderedDictionary, BSCompoundAssertion, BSServiceConnection;

@interface BKSHIDKeyboardService : NSObject <BKSKeyboardServiceServerToClientIPC> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BSCompoundAssertion *_observerAssertion;
    BSCompoundAssertion *_proxiesAssertion;
    BOOL _lock_currentlyObserving;
    BSOrderedDictionary *_lock_senderIDToDevice;
    BSServiceConnection *_connection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;
+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)addKeyboardObserver:(id)a0;
- (id)allKeyboardDevices;
- (id)keyboardDeviceForSenderID:(unsigned long long)a0;
- (oneway void)setConnectedKeyboards:(id)a0 withReply:(id /* block */)a1;

@end
