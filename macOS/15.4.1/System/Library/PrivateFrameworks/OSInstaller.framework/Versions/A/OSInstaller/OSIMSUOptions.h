@class NSString, NSArray;

@interface OSIMSUOptions : OSInstallOptions

@property (retain) NSString *relativeUpdateBrainPath;
@property (retain) NSString *relativeUpdateBundlePath;
@property (retain) NSString *relativeMutableProductPath;
@property (retain) NSString *alternateBlessVolumeUUID;
@property (retain) NSArray *relativeAdditionalInstallers;
@property BOOL isPastThePointOfNoReturn;
@property BOOL doNotSeal;
@property BOOL shouldMigrate;
@property BOOL haveCreatedUnencryptedSystemVolume;
@property BOOL didRequestEraseInstall;
@property (retain) NSString *volumeUUIDToErase;
@property BOOL shouldRemoveSharedSupportBeforeInstall;

+ (id)currentlySetOptions;
+ (id)currentlySetOptionsWithError:(id *)a0;

- (void).cxx_destruct;
- (id)updateBrainPath;
- (id)updateBundlePath;
- (BOOL)_loadOptionsFromMutableProduct:(id)a0;
- (id)additionalInstallers;
- (id)alternateBootUUID;
- (id)initWithMutableProductPath:(id)a0;
- (id)mutableProductPath;
- (id)personalizedManifestsRootsPath;

@end
