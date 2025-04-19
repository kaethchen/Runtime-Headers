@class NSPointerArray, NSObject;
@protocol OS_dispatch_queue;

@interface AXFUserSessionObserver : NSObject

@property (class, readonly) AXFUserSessionObserver *shared;

@property (retain, nonatomic) NSPointerArray *_observers;
@property (nonatomic) BOOL _observingNotifications;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_localQueue;
@property (readonly, nonatomic) BOOL onConsole;
@property (readonly, nonatomic) BOOL screenLocked;
@property (readonly, nonatomic) BOOL isLoginDone;
@property (readonly, nonatomic) BOOL isScreenSaverShowing;
@property (readonly, nonatomic) BOOL isScreenSharing;

+ (BOOL)_getBoolValueFromCGSSessionProperty:(struct __CFString { } *)a0;

- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)_handleNotification:(id)a0;
- (void)_handleCGRemoteConnect;
- (void)_handleCGRemoteDisconnect;
- (void)_sendInitialObserverState:(id)a0;
- (void)_startObservingNotifications;
- (void)_stopObservingNotifications;

@end
