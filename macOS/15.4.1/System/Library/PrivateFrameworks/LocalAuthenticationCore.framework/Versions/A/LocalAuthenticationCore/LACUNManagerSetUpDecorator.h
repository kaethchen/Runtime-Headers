@class NSString;
@protocol LACUNManagerDelegate, LACSetUpStateProvider, LACUNManager;

@interface LACUNManagerSetUpDecorator : NSObject <LACDarwinNotificationCenterObserver, LACUNManager> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _builderLock;
    id<LACUNManagerDelegate> _delegate;
    id /* block */ _responderBuilder;
    id<LACUNManager> _responder;
    id<LACSetUpStateProvider> _setupStateProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<LACUNManagerDelegate> delegate;

- (void)dealloc;
- (void).cxx_destruct;
- (void)notificationCenter:(id)a0 didReceiveNotification:(struct __CFString { } *)a1;
- (id)responder;
- (void)_setupResponder;
- (void)_registerNotificationObservers;
- (void)cancelAllNotificationsWithCompletion:(id /* block */)a0;
- (void)cancelNotificationsWithIdentifiers:(id)a0 scheduledOnly:(BOOL)a1 completion:(id /* block */)a2;
- (id)initWithManagerBuilder:(id /* block */)a0;
- (id)initWithManagerBuilder:(id /* block */)a0 setupStateProvider:(id)a1;
- (void)postNotification:(id)a0 completion:(id /* block */)a1;

@end
