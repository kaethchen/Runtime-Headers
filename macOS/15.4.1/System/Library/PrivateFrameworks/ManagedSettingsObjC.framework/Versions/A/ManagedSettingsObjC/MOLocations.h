@class NSURL;

@interface MOLocations : NSObject

@property (class, readonly) NSURL *effectiveSettingsPath;

+ (id)sharedDirectory;
+ (id)effectiveSettingsDirectory;
+ (id)screenTimeDataVaultDirectory;

@end
