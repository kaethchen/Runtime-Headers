@interface CNKFeatures : NSObject

@property (class, readonly, nonatomic) CNKFeatures *sharedInstance;

@property (readonly, nonatomic) BOOL isSystemApertureEnabled;
@property (readonly, nonatomic) BOOL isIncomingCallBannerEnabled;
@property (readonly, nonatomic) BOOL isHeroImageEnabled;
@property (readonly, nonatomic) BOOL isHeroTitleEnabled;
@property (readonly, nonatomic) BOOL isDialPadEnabled;
@property (readonly, nonatomic) BOOL isEnhancedEmergencyEnabled;
@property (readonly, nonatomic) BOOL isSADMessagesEnabled;
@property (readonly, nonatomic) BOOL isButtonLayoutEnabled;
@property (readonly, nonatomic) BOOL shouldEmbedSwapBanner;
@property (readonly, nonatomic) BOOL shouldShowFullScreenCallWaiting;
@property (readonly, nonatomic) BOOL isDominoEnabled;
@property (readonly, nonatomic) BOOL isNameAndPhotoC3Enabled;
@property (readonly, nonatomic) BOOL callManagerEnabled;
@property (readonly, nonatomic) BOOL buttonRemoteControlEnabled;
@property (readonly, nonatomic) BOOL isUIFluidTransitionsEnabled;
@property (readonly, nonatomic) BOOL requestToScreenShareEnabled;
@property (readonly, nonatomic) BOOL lvm_allowLockScreenSleepEnabled;
@property (readonly, nonatomic) BOOL lvm_endCallImmediately;
@property (readonly, nonatomic) BOOL lvm_stopEnabled;
@property (readonly, nonatomic) BOOL cacheVMDEnabled;

@end
