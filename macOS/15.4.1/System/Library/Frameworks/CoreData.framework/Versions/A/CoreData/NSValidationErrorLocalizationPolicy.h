@class NSBundle, NSString, NSURL, NSDictionary;

@interface NSValidationErrorLocalizationPolicy : NSObject <NSCopying> {
    NSURL *_url;
    NSBundle *_localizationBundle;
    NSString *_modelStringsFileName;
    NSDictionary *_localizationDictionary;
    BOOL _hasSetLocalizationDictionary;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithURL:(id)a0;
- (id)_cachedObjectForKey:(id)a0 value:(void *)a1;
- (void)_ensureFullLocalizationDictionaryIsLoaded;
- (id)localizationDictionary;
- (id)localizedEntityNameForEntity:(id)a0;
- (id)localizedModelStringForKey:(id)a0;
- (id)localizedPropertyNameForProperty:(id)a0;
- (void)setLocalizationDictionary:(id)a0;

@end
