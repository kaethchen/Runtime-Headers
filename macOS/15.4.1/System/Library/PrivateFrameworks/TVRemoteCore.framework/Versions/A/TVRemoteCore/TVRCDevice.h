@class TVRCNowPlayingInfo, NSString, TVRCKeyboardController, TVRCDeviceState, TVRCDeviceInfo, TVRCSiriRemoteInfo, NSSet;
@protocol TVRCDeviceDelegate;

@interface TVRCDevice : NSObject

@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) TVRCDeviceState *deviceState;
@property (retain, nonatomic) TVRCKeyboardController *keyboardController;
@property (retain, nonatomic) TVRCDeviceInfo *info;
@property (readonly, nonatomic) long long connectionType;
@property (readonly, nonatomic) TVRCSiriRemoteInfo *pairedRemoteInfo;
@property (readonly, nonatomic) TVRCNowPlayingInfo *nowPlayingInfo;
@property (readonly, nonatomic) long long classification;
@property (readonly, nonatomic) long long linkType;
@property (readonly, nonatomic) long long siriRemoteFindingState;
@property (weak, nonatomic) id<TVRCDeviceDelegate> delegate;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *model;
@property (readonly, nonatomic) BOOL supportsTouchEvents;
@property (readonly, nonatomic) long long connectionState;
@property (readonly, copy, nonatomic) NSSet *supportedButtons;
@property (readonly, nonatomic, getter=isPaired) BOOL paired;
@property (readonly, nonatomic) unsigned long long pairingCapability;
@property (readonly, nonatomic) BOOL supportsDirectCaptionQueries;
@property (readonly, nonatomic) BOOL supportsFindMyRemote;
@property (readonly, nonatomic) long long attentionState;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)connect;
- (BOOL)isEqualToDevice:(id)a0;
- (BOOL)containsIdentifier:(id)a0;
- (id)initWithDeviceIdentifier:(id)a0;
- (void)sendButtonEvent:(id)a0;
- (void)sendGameControllerEvent:(id)a0;
- (void)sendTouchEvent:(id)a0;
- (void)_connectWithConnectionContext:(long long)a0;
- (void)_deviceEncounteredAuthChallengeType:(long long)a0 attributes:(long long)a1 codeToEnterOnDevice:(id)a2 throttleSeconds:(long long)a3;
- (id)_deviceStateDictionary;
- (void)_deviceUpdatedState:(id)a0;
- (void)_disconnectDeviceDueToConnectionInterruption;
- (void)_sendRTIDataPayload:(id)a0;
- (void)addItemWithMediaIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)connectWithConnectionContext:(long long)a0;
- (void)disconnectWithType:(unsigned long long)a0;
- (void)enableFindingSession:(BOOL)a0;
- (void)enableTVRemoteOnLockscreen:(BOOL)a0;
- (void)fetchLaunchableAppsWithCompletion:(id /* block */)a0;
- (void)fetchUpNextInfoWithPaginationToken:(id)a0 completion:(id /* block */)a1;
- (BOOL)isInEditingSession;
- (void)launchAppWithBundleID:(id)a0 completion:(id /* block */)a1;
- (void)markAsWatchedWithMediaIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)playItem:(id)a0 completion:(id /* block */)a1;
- (void)removeItemWithMediaIdentifier:(id)a0 completion:(id /* block */)a1;

@end
