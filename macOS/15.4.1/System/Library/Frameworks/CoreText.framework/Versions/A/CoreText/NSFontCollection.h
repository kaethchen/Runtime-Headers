@interface NSFontCollection : NSObject <NSSecureCoding, NSCopying, NSMutableCopying, NSCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)initialize;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)_URLForName:(id)a0 domain:(unsigned long long)a1 error:(id *)a2;
+ (id)_URLsForFontCollectionsDirectoriesWithVisibility:(unsigned long long)a0;
+ (id)_URLsForFontCollectionsInDirectoryAtURL:(id)a0 includingPropertiesForKeys:(id)a1 error:(id *)a2;
+ (id)_collectionAtURL:(id)a0 error:(id *)a1;
+ (id)_collectionFromFileWithName:(id)a0 visibility:(unsigned long long *)a1;
+ (id)_combineDescriptorsIncluded:(id)a0 excluded:(id)a1;
+ (id)_copyArchivedDictionaryFromURL:(id)a0 error:(id *)a1;
+ (id)_directoryURLForDomain:(unsigned long long)a0 error:(id *)a1;
+ (id)_namesOfFontCollectionsWithVisibility:(unsigned long long)a0 includingHidden:(BOOL)a1;
+ (id)_newFromDictionary:(id)a0;
+ (id)allFontCollectionNames;
+ (id)archivableDescriptorsFrom:(id)a0;
+ (id)fontCollectionWithAllAvailableDescriptors;
+ (id)fontCollectionWithDescriptors:(id)a0;
+ (id)fontCollectionWithLocale:(id)a0;
+ (id)fontCollectionWithName:(id)a0;
+ (id)fontCollectionWithName:(id)a0 visibility:(unsigned long long)a1;
+ (BOOL)hideFontCollectionWithName:(id)a0 visibility:(unsigned long long)a1 error:(id *)a2;
+ (BOOL)renameFontCollectionWithName:(id)a0 visibility:(unsigned long long)a1 toName:(id)a2 error:(id *)a3;
+ (BOOL)showFontCollection:(id)a0 withName:(id)a1 visibility:(unsigned long long)a2 error:(id *)a3;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithLocale:(id)a0;
- (id)initWithAllAvailableDescriptors;
- (id)matchingDescriptorsWithOptions:(id)a0;
- (id)_dictionaryForArchivingWithAttributes:(id)a0;
- (BOOL)_hasDesignatedName;
- (void)_replaceDescriptorsFromCollection:(id)a0;
- (BOOL)_saveToURL:(id)a0 error:(id *)a1;
- (id)collectionAttributes;
- (id)exclusionDescriptors;
- (id)initWithDescriptors:(id)a0;
- (id)matchingDescriptors;
- (id)matchingDescriptorsForFamily:(id)a0;
- (id)matchingDescriptorsForFamily:(id)a0 options:(id)a1;
- (id)queryDescriptors;
- (void)registeredFontsChangedNotification:(id)a0;

@end
