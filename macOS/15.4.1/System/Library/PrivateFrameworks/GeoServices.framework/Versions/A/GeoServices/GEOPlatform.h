@interface GEOPlatform : NSObject

+ (BOOL)isRunningInGeod;
+ (BOOL)isRunningInGeoAPd;
+ (void)setIsRunningInGeoAPd:(BOOL)a0;
+ (void)setIsRunningInGeod:(BOOL)a0;
+ (id)sharedPlatform;

- (id)init;
- (id)productName;
- (BOOL)isInternalInstall;
- (id)buildVersion;
- (id)osVersion;
- (BOOL)supportsNavigation;
- (BOOL)supportsMultiUser;
- (double)deviceScreenScale;
- (id)_systemInfoDictionary;
- (id)clientCapabilities;
- (long long)deviceScreenHeightInPixels;
- (long long)deviceScreenWidthInPixels;
- (id)hardwareClass;
- (id)hardwareIdentifier;
- (BOOL)isCellDataPossible;
- (BOOL)isGUIUser;
- (BOOL)isMacSetupUser;
- (BOOL)mapsFeatureFreedomEnabled;
- (id)osAndBuildVersion;
- (void)setClientCapabilitiesHardwareIdentifier:(id)a0;
- (BOOL)shouldPrefetchVisualResources;
- (BOOL)supportsAdvancedMap;
- (BOOL)supportsForceTouch;
- (BOOL)supportsRealisticTiles;

@end
