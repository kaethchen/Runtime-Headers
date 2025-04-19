@class NSString, AVPlayerController;

@interface AVNowPlayingInfoController : NSObject {
    AVPlayerController *_playerController;
    id _playerControllerCurrentTimeJumpedObserver;
    BOOL _nowPlayingInfoNeedsUpdate;
    BOOL _enabled;
    BOOL _shouldOwnNowPlayingInfo;
    void *_commandHandlerIdentifier;
}

@property (retain) AVPlayerController *playerController;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (copy, nonatomic) NSString *overrideParentApplicationDisplayIdentifier;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (unsigned int)_handleRemoteCommand:(unsigned int)a0 options:(id)a1;
- (BOOL)_ownsNowPlayingInfo;
- (void)_setNowPlayingInfoNeedsUpdate;
- (void)_updateNowPlayingInfoIfNeeded;
- (void)_updateNowPlayingInfoTestingOwnership:(BOOL)a0;
- (void)_updateRegisteredRemoteCommandEnabledStatesWithPlayerController:(id)a0;
- (void)becomeNowPlayingApp;

@end
