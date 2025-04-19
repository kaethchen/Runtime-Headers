@class NSSet, NSString, NSMutableDictionary, NSDate, NSNumber;

@interface KHThemeManifest : NSObject {
    NSMutableDictionary *_manifest;
}

@property (readonly, nonatomic) NSDate *compilationDate;
@property (readonly, nonatomic) NSSet *keywords;
@property (readonly, nonatomic) NSSet *themeIdentifiers;
@property (readonly, nonatomic) NSSet *productCodes;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSString *packageIdentifier;
@property (readonly, nonatomic) NSNumber *catalogVersion;

- (void).cxx_destruct;
- (id)initWithContentsOfURL:(id)a0;
- (id)keywords;
- (void)setPackageIdentifier:(id)a0;
- (id)productCodes;
- (id)compilationDate;
- (id)productCodesForThemeIdentifier:(id)a0;
- (id)keywordsForThemeIdentifier:(id)a0;
- (id)themeIdentifiers;
- (id)themeIdentifiersForProductCodes:(id)a0;

@end
