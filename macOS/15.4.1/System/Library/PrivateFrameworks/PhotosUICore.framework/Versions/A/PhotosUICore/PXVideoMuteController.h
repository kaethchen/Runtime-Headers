@interface PXVideoMuteController : PXObservable

@property (class, readonly, nonatomic) PXVideoMuteController *sharedController;

@property (nonatomic) long long muteState;
@property (nonatomic, setter=setAutoplayEnabled:) BOOL isAutoplayEnabled;
@property (readonly, nonatomic) BOOL isMuted;

- (id)debugDescription;
- (id)init;
- (void)setIsMuted:(BOOL)a0;
- (void)_updateIsMuted;
- (void)applicationDidMoveToBackground;
- (void)autoplaySettingDidChange;
- (id)initWithAutoplaySetting:(BOOL)a0;
- (void)resetMuteState;
- (void)userDidMute;
- (void)userDidUnmute;

@end
