@class AVTLockscreenCoordinator, LUIMutableBoolean, NSTimer, AVTAvatarDescriptor, LUI2UserView;

@interface LUI2UserViewController : LUI2ViewController <LWUI2TrackingAreaOwnerProtocol>

@property BOOL usesVisualEffectBackgroundUserViewInternal;
@property (retain) AVTLockscreenCoordinator *lsCoordinator;
@property LUIMutableBoolean *canSetDebugInfo;
@property (retain) NSTimer *avatarIdleTimer;
@property BOOL paused;
@property (retain) AVTAvatarDescriptor *avatarDescriptor;
@property double nextAvatarPasswordEntryTime;
@property (retain) LUI2UserView *userView;
@property BOOL usesVisualEffectBackgroundUserView;
@property (readonly) double defaultInitialPoseDelay;

- (void)dealloc;
- (void).cxx_destruct;
- (void)resume;
- (void)pause;
- (void)mouseEntered:(id)a0;
- (void)viewDidLoad;
- (void)_createUserView;
- (void)_createCoordinatorWithAvatarDescriptor:(id)a0 stickerConfiguration:(id)a1 initialPose:(id)a2 andCropTransform:(id)a3 completionHandler:(id /* block */)a4;
- (void)_handleAvatarWasAddedToViewWithCompletionHandler:(id /* block */)a0;
- (void)_startAvatarIdleTimer;
- (void)showAvatarIdle;
- (void)showAvatarLoginFailure;
- (void)showAvatarLoginSuccess;
- (void)showAvatarPasswordEntry;
- (void)showAvatarSelected;
- (void)showSelectedAvatarDescriptor:(id)a0 withStickerConfiguration:(id)a1 pose:(id)a2 andTransform:(id)a3 afterDelay:(double)a4;

@end
