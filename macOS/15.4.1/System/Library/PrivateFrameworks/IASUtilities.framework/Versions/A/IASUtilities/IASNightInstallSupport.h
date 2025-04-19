@interface IASNightInstallSupport : NSObject

+ (BOOL)muteBootChimeForNextReboot;
+ (id)prepareNightInstall;
+ (id)restoreFromNightInstall;

@end
