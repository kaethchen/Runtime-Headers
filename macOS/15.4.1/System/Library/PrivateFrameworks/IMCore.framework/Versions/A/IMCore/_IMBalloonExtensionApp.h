@class LSPlugInKitProxy, NSExtension;

@interface _IMBalloonExtensionApp : IMBalloonApp

@property (retain, nonatomic) NSExtension *extension;
@property (retain, nonatomic) LSPlugInKitProxy *proxy;

- (void).cxx_destruct;
- (id)version;
- (id)applicationType;
- (BOOL)isEnabled;
- (BOOL)isLaunchProhibited;
- (id)itemID;
- (void)setIsEnabled:(BOOL)a0;
- (id)plugin;
- (id)initWithPluginBundle:(id)a0 extension:(id)a1;
- (id)appStoreGenreID;
- (id)_bundleIDToPresentationDelayMapping;
- (id)_bundleIDsForDawnSendMenuTemporaryDisplayOverride;
- (id)_bundleIDsForDelayedPresentationOptIn;
- (id)appStoreGenre;
- (id)appStoreSubgenres;
- (id)initWithPluginBundle:(id)a0 extension:(id)a1 pluginKitProxyClass:(Class)a2 proxy:(id)a3;
- (id)initWithPluginBundle:(id)a0 pluginKitProxy:(id)a1 extension:(id)a2;
- (BOOL)isBetaPlugin;
- (BOOL)isPreDawnAndAppStoreStickerGenre;
- (BOOL)isStickerPackOnly;
- (BOOL)linkedBeforeDawn;
- (BOOL)linkedBeforeSDKVersion:(id)a0;
- (double)presentationDelay;
- (BOOL)shouldDelayViewControllerPresentation;
- (BOOL)shouldForceIntoSendMenu;
- (BOOL)showInBrowser;
- (BOOL)showInSendMenu;
- (BOOL)showableInBrowser;

@end
