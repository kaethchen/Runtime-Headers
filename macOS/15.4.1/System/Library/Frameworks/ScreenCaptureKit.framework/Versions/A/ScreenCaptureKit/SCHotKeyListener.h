@class SCEventConnection;
@protocol SCHotKeyListenerDelegate;

@interface SCHotKeyListener : NSObject {
    SCEventConnection *_connection;
    id<SCHotKeyListenerDelegate> _delegate;
}

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)startListening;
- (void)callDelegateWithEvent:(unsigned long long)a0;

@end
