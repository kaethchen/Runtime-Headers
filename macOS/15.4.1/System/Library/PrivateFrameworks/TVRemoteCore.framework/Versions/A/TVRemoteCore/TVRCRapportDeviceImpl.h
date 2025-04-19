@class TVRCRapportRemoteTextInputKeyboardImpl, TVRCRPCompanionLinkClientWrapper, NSString, TVRXKeyboardController;
@protocol _TVRCDeviceImplDelegate;

@interface TVRCRapportDeviceImpl : NSObject <_TVRCDeviceImpl, _TVRCCompanionLinkClientWrapperDelegate>

@property (weak, nonatomic) id<_TVRCDeviceImplDelegate> delegate;
@property (retain, nonatomic) TVRCRPCompanionLinkClientWrapper *deviceWrapper;
@property (retain, nonatomic) TVRXKeyboardController *keyboardController;
@property (retain, nonatomic) TVRCRapportRemoteTextInputKeyboardImpl *keyboardImpl;
@property (readonly, nonatomic) BOOL isConnected;
@property (readonly, nonatomic) unsigned long long priority;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)implWithDevice:(id)a0;

- (void)dealloc;
- (id)name;
- (void).cxx_destruct;
- (id)identifier;
- (long long)connectionType;
- (id)initWithDevice:(id)a0;
- (void)disconnect;
- (void)connect;
- (id)model;
- (long long)linkType;
- (id)idsIdentifier;
- (BOOL)isPaired;
- (id)alternateIdentifiers;
- (id)nowPlayingInfo;
- (void)sendButtonEvent:(id)a0;
- (void)sendGameControllerEvent:(id)a0;
- (void)setAuthenticationSupported:(BOOL)a0;
- (void)sendTouchEvent:(id)a0;
- (void)_setupKeyboardController;
- (void)addItemWithMediaIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)connectedToDevice:(id)a0;
- (long long)deviceAttentionState;
- (void)deviceEncounteredAuthenticationChallenge:(id)a0;
- (void)deviceSupportsFindMyRemote:(BOOL)a0;
- (void)deviceUpdateSiriRemoteFindingState;
- (void)deviceUpdatedAttentionState;
- (void)deviceUpdatedNowPlayingInfo:(id)a0;
- (void)deviceUpdatedPairedRemoteInfo:(id)a0;
- (void)deviceUpdatedSupportedButtons:(id)a0;
- (void)disconnectedFromDevice:(id)a0 error:(id)a1;
- (void)enableFindingSession:(BOOL)a0;
- (void)fetchLaunchableAppsWithCompletion:(id /* block */)a0;
- (void)fetchUpNextInfoWithPaginationToken:(id)a0 completion:(id /* block */)a1;
- (void)launchAppWithBundleID:(id)a0 completion:(id /* block */)a1;
- (void)markAsWatchedWithMediaIdentifier:(id)a0 completion:(id /* block */)a1;
- (id)pairedRemoteInfo;
- (unsigned long long)pairingCapability;
- (void)playItem:(id)a0 completion:(id /* block */)a1;
- (void)removeItemWithMediaIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)sendEvent:(id)a0 options:(id)a1 response:(id /* block */)a2;
- (long long)siriRemoteFindingState;
- (id)supportedButtons;
- (BOOL)supportsDirectCaptionQueries;
- (BOOL)supportsFindMyRemote;
- (BOOL)supportsTouchEvents;

@end
