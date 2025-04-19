@class NSCache;

@interface WFAppShortcutColorFetcher : NSObject

@property (class, readonly, nonatomic) NSCache *colorCache;

- (id)colorsForBundleIdentifier:(id)a0 error:(id *)a1;
- (id)finishWithComplementingColors:(id)a0 tintColor:(id)a1 bundleIdentifier:(id)a2 error:(id *)a3;
- (id)extractColorsForIconDictionary:(id)a0 alternateIconDictionary:(id)a1 bundle:(id)a2 colorDefaults:(id)a3;
- (id)extractTintColorForIconDictionary:(id)a0 alternateIconDictionary:(id)a1 bundle:(id)a2;

@end
