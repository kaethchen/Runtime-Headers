@interface IMDeviceUtilities : NSObject

@property (class, readonly, nonatomic) BOOL deviceIsLockedDown;
@property (class, readonly, nonatomic) BOOL supportsDataDetectors;
@property (class, readonly, nonatomic) BOOL supportsBusinessChat;
@property (class, readonly, nonatomic) BOOL supportsSpotlight;
@property (class, readonly, nonatomic) BOOL supportsSharedWithYou;
@property (class, readonly, nonatomic) BOOL supportsFaceTime;
@property (class, readonly, nonatomic) BOOL supportsNameAndPhoto;
@property (class, readonly, nonatomic) BOOL supportsFocus;
@property (class, readonly, nonatomic) BOOL supportsScreenEffects;
@property (class, nonatomic) BOOL supportsiMessageJunk;
@property (class, readonly, nonatomic, getter=isInternalCarryDevice) BOOL internalCarryDevice;
@property (class, readonly, nonatomic) BOOL isSeedInstall;
@property (class, readonly, nonatomic) BOOL isInternalInstall;
@property (class, readonly, nonatomic) BOOL isMessagesInstalled;
@property (class, readonly, nonatomic) BOOL completedSystemAppMigration;

+ (BOOL)IMDeviceIsChinaRegion;
+ (BOOL)IMDeviceIsIndiaRegion;
+ (BOOL)IMSupportsASTC;
+ (BOOL)IMDeviceIsGreenTea;
+ (BOOL)IMDeviceRegionIsEligibleToBeForcedIntoFilteringUnknownSender;
+ (BOOL)IMSupportsUserNotifications;

@end
