@class NSWindow, NSArray, OBPrivacyCombinedController, NSWindowController, NSString, OBPrivacySplashController;

@interface OBPrivacyPresenter : NSObject

@property (retain) OBPrivacySplashController *splashController;
@property (retain) OBPrivacyCombinedController *combinedController;
@property (retain) NSWindowController *presentedController;
@property (retain) NSArray *presentedIdentifiers;
@property (copy) id /* block */ dismissHandler;
@property (retain, nonatomic) NSString *displayLanguage;
@property (weak) NSWindow *presentingWindow;

+ (id)presenterForPrivacyUnifiedAbout;
+ (id)presenterForPrivacySplashWithBundle:(id)a0;
+ (id)presenterForPrivacySplashWithBundleAtPath:(id)a0;
+ (id)presenterForPrivacySplashWithIdentifer:(id)a0;
+ (id)presenterForPrivacySplashWithIdentifier:(id)a0;
+ (id)presenterForPrivacyUnifiedAboutWithBundles:(id)a0;
+ (id)presenterForPrivacyUnifiedAboutWithBundlesAtPaths:(id)a0;
+ (id)presenterForPrivacyUnifiedAboutWithIdentifiers:(id)a0;

- (void).cxx_destruct;
- (void)present;
- (void)_presenterDidDismiss;

@end
