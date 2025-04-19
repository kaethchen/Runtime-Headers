@class NSNumber, NSURL, NSString;

@interface ISDefaults : NSObject

@property (retain) NSNumber *_usePerstentCache;
@property (readonly) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (readonly) BOOL _enableAppIconOverrides;
@property (readonly) BOOL _enable1016Icons;
@property (readonly) BOOL _ignoreDocumentClaimIcons;
@property (retain) NSURL *_cacheURL;
@property (readonly) BOOL usePerstentCache;
@property (readonly) NSURL *cacheURL;
@property (readonly) NSString *cacheSaltString;
@property (readonly) NSString *serviceName;
@property (readonly) BOOL defaultToTemplatizedAppIcons;
@property (readonly) BOOL allowDocumentClaimIcons;
@property (readonly) BOOL preferSymbolAsTemplateVariant;
@property (readonly) BOOL enableAppIconOverides;
@property (readonly) double prepareImageDelay;
@property (readonly) BOOL logMissingURLCacheProperties;
@property (readonly) BOOL enableInstanceIDBasedTwoAppModel;
@property (readonly) BOOL enableBadgeOverhang;
@property (readonly) BOOL isDarkIconSegmentationEnabled;
@property (readonly) BOOL isDarkIconColorEnhancementEnabled;
@property (readonly) BOOL isDarkIconDimmingEnabled;
@property (readonly) BOOL isDarkIconDimmingForDedicatedAssetsEnabled;
@property (readonly) BOOL isFlagDimmedDedicatedAssetsEnabled;
@property (readonly) BOOL isIconSegmentationAnalyticsForAllIconsEnabled;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)tintColor;
- (BOOL)isDebugGraphicIconColourEnabled;
- (id)debugPreDefinedGraphicIconColor;
- (BOOL)isUnsupportedDecorationDisabled;
- (id)cacheURL;
- (id)debugGraphicIconColor;
- (id)debugISIconGraphicIconColor;
- (BOOL)disableLegacyIconSegmentation;
- (long long)forceApperance;
- (BOOL)simulateTintableAppearance;
- (BOOL)usePerstentCache;

@end
