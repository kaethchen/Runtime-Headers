@class NSBundle, NSString, NSArray, NSNumber;
@protocol PKPlugIn;

@interface IMBalloonApp : NSObject

@property (nonatomic) BOOL canSendDataPayloads;
@property (nonatomic) BOOL isLaunchProhibited;
@property (nonatomic) BOOL showInSendMenu;
@property (nonatomic) BOOL showInBrowser;
@property (nonatomic) BOOL isEnabled;
@property (nonatomic) BOOL shouldBalloonHideAppIcon;
@property (nonatomic) BOOL shouldBreadcrumbHideAppIcon;
@property (nonatomic) BOOL shouldHideAppSwitcher;
@property (nonatomic) BOOL shouldHideAttributionInformation;
@property (retain, nonatomic) Class browserClass;
@property (retain, nonatomic) Class bubbleClass;
@property (retain, nonatomic) Class customTypingIndicatorLayerClass;
@property (retain, nonatomic) Class dataSourceClass;
@property (retain, nonatomic) Class entryClass;
@property (retain, nonatomic) NSBundle *appBundle;
@property (retain, nonatomic) NSBundle *pluginBundle;
@property (retain, nonatomic) NSNumber *itemID;
@property (retain, nonatomic) NSString *browserDisplayName;
@property (retain, nonatomic) NSString *browserShortDisplayName;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) id<PKPlugIn> plugin;
@property (nonatomic) unsigned long long presentationContexts;
@property (nonatomic) unsigned long long stickerSharingLevel;
@property (nonatomic) BOOL pluginLoaded;
@property (nonatomic) BOOL isEnabledUnremovableApp;
@property (readonly, nonatomic) BOOL isBetaPlugin;
@property (readonly, nonatomic) BOOL isStickerPackOnly;
@property (readonly, nonatomic) BOOL shouldForceIntoSendMenu;
@property (readonly, nonatomic) BOOL shouldDelayViewControllerPresentation;
@property (readonly, nonatomic) double presentationDelay;
@property (readonly, nonatomic) BOOL isPreDawnAndAppStoreStickerGenre;
@property (readonly, nonatomic) NSString *appStoreGenre;
@property (readonly, nonatomic) NSArray *appStoreSubgenres;
@property (readonly, nonatomic) BOOL showableInBrowser;
@property (readonly, nonatomic) NSString *version;

+ (void)_setUnremovableDisabledApps:(id)a0;
+ (id)_unremovableDisabledApps;
+ (id)appWithPluginBundle:(id)a0;
+ (id)appWithPluginBundle:(id)a0 appBundle:(id)a1;
+ (id)appWithPluginBundle:(id)a0 extension:(id)a1;
+ (id)appWithPluginBundle:(id)a0 pluginKitProxy:(id)a1 extension:(id)a2;

- (void).cxx_destruct;
- (void)_loadBundle;
- (id)initWithPluginBundle:(id)a0 appBundle:(id)a1;
- (BOOL)linkedBeforeSDKVersion:(id)a0;
- (unsigned long long)presentationContextsForInfoPlistArray:(id)a0;

@end
