@interface _CNKFeatures : NSObject

@property (class, nonatomic, readonly) _CNKFeatures *sharedInstance;

@property (nonatomic, readonly) BOOL isSystemApertureEnabled;
@property (nonatomic, readonly) BOOL isIncomingCallBannerEnabled;
@property (nonatomic, readonly) BOOL isHeroImageEnabled;
@property (nonatomic, readonly) BOOL isHeroTitleEnabled;
@property (nonatomic, readonly) BOOL isEnhancedEmergencyEnabled;
@property (nonatomic, readonly) BOOL isSADMessagesEnabled;
@property (nonatomic, readonly) BOOL isDialPadEnabled;
@property (nonatomic, readonly) BOOL isButtonLayoutEnabled;
@property (nonatomic, readonly) BOOL isScreeningLiveActivityEnabled;
@property (nonatomic, readonly) BOOL shouldEmbedSwapBanner;
@property (nonatomic, readonly) BOOL isFaceTimeMyselfEnabled;
@property (nonatomic, readonly) BOOL shouldShowFullScreenCallWaiting;
@property (nonatomic, readonly) BOOL isDominoEnabled;
@property (nonatomic, readonly) BOOL isNameAndPhotoC3Enabled;
@property (nonatomic, readonly) BOOL callManagerEnabled;
@property (nonatomic, readonly) BOOL hudActivityManagerEnabled;
@property (nonatomic, readonly) BOOL requestToScreenShareEnabled;
@property (nonatomic, readonly) BOOL usesModernScreenSharingFromMessages;
@property (nonatomic, readonly) BOOL isAppProtectionEnabled;
@property (nonatomic, readonly) BOOL buttonRemoteControlEnabled;
@property (nonatomic, readonly) BOOL isUIFluidTransitionsEnabled;
@property (nonatomic, readonly) BOOL lvm_stopEnabled;
@property (nonatomic, readonly) BOOL lvm_allowLockScreenSleepEnabled;
@property (nonatomic, readonly) BOOL lvm_endCallImmediately;
@property (nonatomic, readonly) BOOL cacheVMDEnabled;
@property (nonatomic, readonly) BOOL showTranscriptWithoutConfidenceFiltering;

- (id)init;
- (void).cxx_destruct;

@end
