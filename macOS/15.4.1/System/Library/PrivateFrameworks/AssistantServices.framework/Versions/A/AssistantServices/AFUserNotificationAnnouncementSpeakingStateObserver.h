@class NSString, NSXPCConnection, NSMutableSet, NSObject;
@protocol OS_dispatch_queue, AFUserNotificationAnnouncementSpeakingStateDelegate;

@interface AFUserNotificationAnnouncementSpeakingStateObserver : NSObject <AFUserNotificationAnnouncementSpeakingStateServiceDelegate, AFInvalidating> {
    NSObject<OS_dispatch_queue> *_queue;
    id<AFUserNotificationAnnouncementSpeakingStateDelegate> _delegate;
    NSMutableSet *_observingNotifications;
    NSXPCConnection *_connection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (void)connectionInterrupted;
- (id)_connection;
- (void)_tearDown;
- (void)connectionInvalidated;
- (id)initWithQueue:(id)a0 delegate:(id)a1;
- (void)_cleanUpConnection;
- (id)_currentConnection;
- (void)_notifyObserverOfFailureForAllObservingNotifications;
- (void)_removeObserverForNotificationRequestIdentifier:(id)a0;
- (void)_speakingStateDidChange:(long long)a0 forIdentifiers:(id)a1;
- (void)_startObservingNotificationWithRequestIdentifier:(id)a0;
- (void)cleanUpConnection;
- (void)speakingStateDidChange:(long long)a0 forIdentifiers:(id)a1;
- (void)startObservingNotificationWithRequestIdentifier:(id)a0;
- (void)stopObservingNotificationWithRequestIdentifier:(id)a0;

@end
