@class OBPrivacyFlow, NSArray, NSString, OBBundle, NSColor;

@interface OBPrivacyLinkController : NSViewController {
    NSArray *_bundles;
    NSArray *_bundleIdentifiers;
    BOOL _didOverrideShowUnifiedAbout;
}

@property (retain) NSColor *iconTintColor;
@property (retain) NSColor *textTintColor;
@property long long textAlignment;
@property (readonly) OBBundle *bundle;
@property (readonly) NSArray *bundles;
@property (readonly) OBPrivacyFlow *flow;
@property BOOL displayIcon;
@property BOOL displayLargeIcon;
@property BOOL displayCaptionText;
@property (retain) NSString *displayLanguage;
@property unsigned long long displayDeviceType;
@property BOOL allowsOpeningSafari;

+ (id)linkWithBundleIdentifier:(id)a0;
+ (Class)_platformSpecificClass;
+ (id)linkWithBundleAtPath:(id)a0;
+ (id)linkWithBundleIdentifiers:(id)a0;
+ (id)linkWithBundlesAtPaths:(id)a0;
+ (id)linkWithPrivacyBundle:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithBundleIdentifiers:(id)a0;
- (void)setLinkEnabled:(BOOL)a0;
- (void)_linkPressed;
- (id)_privacyPresenter;
- (id)initWithPrivacyBundle:(id)a0;
- (id)initWithPrivacyBundles:(id)a0;
- (void)linkPressed;

@end
