@class NSMutableDictionary, NSString, NSURL, NSSet, NSCache;

@interface KHCatalogBundle : NSObject {
    NSMutableDictionary *_themePreviewIdentifiersBySortOrderByCategoryId;
    NSMutableDictionary *_productCodesByThemesKey;
    NSCache *_categoriesCache;
    NSCache *_categoriesForRecordIdCache;
    NSSet *_remoteThemePreviewIdentifiers;
    NSSet *_remoteThemeIdentifiers;
    NSSet *_localThemePreviewIdentifiers;
    NSSet *_localThemeIdentifiers;
}

@property (retain, nonatomic) NSMutableDictionary *rootDictionary;
@property (copy, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSString *allKey;

+ (id)languageSpecificCountryCodes;

- (id)description;
- (void).cxx_destruct;
- (id)initWithContentsOfURL:(id)a0;
- (id)version;
- (BOOL)commonInit;
- (id)records;
- (id)categories;
- (id)manifestURL;
- (id)bundleAttributes;
- (BOOL)isPreviewBundleIdentifierLocal:(id)a0;
- (id)internalVersion;
- (id)recordsByThemePreviewIdentifier;
- (id)_allThemePreviewIdentifiers;
- (id)_recordForThemePreviewIdentifier:(id)a0;
- (id)_themeIdentifiersLocal:(BOOL)a0 isPreview:(BOOL)a1;
- (id)_visibleSortedThemePreviewIdentifiers;
- (id)allCategoryKeyId;
- (id)categoriesForRecordId:(id)a0;
- (BOOL)hasLanguageSpecificPreviews;
- (BOOL)isBundleIdentifierLocal:(id)a0;
- (id)localThemeIdentifiers;
- (id)localThemePreviewIdentifiers;
- (id)packageIdentifierByBundleIdentifier;
- (id)packageIdentifierForBundleIdentifier:(id)a0;
- (id)previewPackageIdentifierForBundleIdentifier:(id)a0;
- (id)productCodesByThemePreviewIdentifiers;
- (id)productCodesForThemePreviewIdentifier:(id)a0;
- (id)recordsForCategory:(id)a0;
- (id)remoteThemeIdentifiers;
- (id)remoteThemePreviewsIdentifiers;
- (id)themeIdentifiers;
- (BOOL)themePreviewIdentifierIsVisible:(id)a0 category:(id)a1;
- (id)themePreviewIdentifiers;
- (id)themePreviewIdentifiersBySortOrderForCategory:(id)a0;
- (id)themePreviewVersionForThemePreviewIdentifier:(id)a0;
- (id)themeVersionForThemePreviewIdentifier:(id)a0;

@end
