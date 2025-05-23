@class NSOrderedSet, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface MRNotificationClient : NSObject <MRNowPlayingClientState> {
    unsigned long long _registeredNowPlayingObservers;
    NSObject<OS_dispatch_queue> *_customNotificationsQueue;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSOrderedSet *_nowPlayingNotifications;
    NSOrderedSet *_routesChangedNotifications;
    NSOrderedSet *_volumeControlNotifications;
    NSOrderedSet *_externalScreenNotifications;
    NSOrderedSet *_originNotifications;
    NSOrderedSet *_supportedCommandsNotifications;
    NSOrderedSet *_voiceInputNotifications;
    NSOrderedSet *_errorNotifications;
    NSMutableArray *_subscribedWakingPlayerPaths;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue;
@property (readonly, nonatomic, getter=isRegisteredForNowPlayingNotifications) BOOL registeredForNowPlayingNotifications;
@property (nonatomic) BOOL receivesExternalScreenTypeChangedNotifications;
@property (nonatomic) BOOL receivesSupportedCommandsNotifications;
@property (nonatomic) BOOL receivesRoutesChangedNotifications;
@property (nonatomic) BOOL receivesVolumeControlNotifications;
@property (nonatomic) BOOL receivesOriginChangedNotifications;
@property (nonatomic) BOOL receivesPlaybackErrorNotifications;
@property (nonatomic) BOOL receivesVoiceInputRecordingStateNotifications;

+ (id)nowPlayingNotifications;

- (id)debugDescription;
- (id)init;
- (void).cxx_destruct;
- (BOOL)_postNotification:(id)a0 userInfo:(id)a1 object:(id)a2 withHandler:(id /* block */)a3;
- (BOOL)_processAlwaysNeedsNowPlayingNotifications;
- (void)_syncWakingPlayerPathsWithReplyQueue:(id)a0 completion:(id /* block */)a1;
- (void)dispatchNotification:(id)a0 userInfo:(id)a1 object:(id)a2;
- (BOOL)postNotification:(id)a0 userInfo:(id)a1 object:(id)a2;
- (void)registerForNowPlayingNotificationsWithQueue:(id)a0;
- (void)registerForNowPlayingNotificationsWithQueue:(id)a0 force:(BOOL)a1;
- (void)registerForWakingNowPlayingNotificationsForPlayerPath:(id)a0 replyQueue:(id)a1 completion:(id /* block */)a2;
- (void)restoreNowPlayingClientState;
- (void)unregisterForNowPlayingNotifications;
- (void)unregisterForWakingNowPlayingNotificationsForPlayerPath:(id)a0 replyQueue:(id)a1 completion:(id /* block */)a2;

@end
