@class NSDictionary, NSMutableDictionary;

@interface XTFontStaticRegistry : NSObject {
    NSDictionary *_registryData;
    NSMutableDictionary *_lowercasedNamesCache;
}

+ (id)registryDataDictionaryFromPath:(id)a0;
+ (id)registryDataDictionary;

- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (unsigned int)fontRefFromURL:(id)a0;
- (id)initWithRegistryDataDictionary:(id)a0;
- (id)allFontNames;
- (unsigned long long)autoActivationFontRefsCount;
- (id)externalizeFontInfo:(id)a0;
- (id)fontInfoArrayForFile:(id)a0;
- (id)fontInfoFromFontRef:(unsigned int)a0;
- (id)fontURLFromName:(id)a0;
- (id)internalURLStringFromURL:(id)a0;
- (id)invisibleFontNames;
- (id)lowercasedNameFrom:(id)a0;
- (id)nameToURLDictionaryFor:(id)a0;
- (id)normalizeProperty:(id)a0 forKey:(id)a1;
- (id)propertyForKey:(id)a0 andFontRef:(unsigned int)a1;
- (id)standarizedURLString:(id)a0;
- (id)urlFromInternalURLString:(id)a0;

@end
