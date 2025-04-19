@class NSDictionary, NSString;

@interface PKBundleComponentVersion : NSObject {
    NSString *_shortVersionString;
    NSString *_origShortVersionString;
    NSString *_bundleVersion;
    NSString *_origBundleVersion;
    NSString *_sourceVersion;
    NSString *_buildVersion;
    BOOL _isOnDisk;
}

@property (readonly) NSDictionary *attributeDictionary;
@property (readonly) NSString *shortVersionString;
@property (readonly) NSString *bundleVersion;
@property (readonly) NSString *sourceVersion;
@property (readonly) NSString *buildVersion;
@property (readonly) NSString *combinedVersionString;

+ (id)bundleComponentVersionWithOnDiskCFBundle:(struct __CFBundle { } *)a0;
+ (id)_combinedVersionAndInfoDictionaryForBundle:(id)a0;
+ (id)_combinedVersionAndInfoDictionaryForCFBundle:(struct __CFBundle { } *)a0;
+ (id)_orderedVersionKeys;
+ (id)_properlyOrderedVersionKeys;
+ (id)_standardizedTupleVersionString:(id)a0;
+ (id)bundleComponentVersionWithOnDiskBundle:(id)a0;
+ (id)bundleComponentVersionWithPackageAttributes:(id)a0;

- (void)dealloc;
- (id)description;
- (long long)compare:(id)a0;
- (id)initWithShortVersionString:(id)a0 bundleVersion:(id)a1 sourceVersion:(id)a2 buildVersion:(id)a3 forOnDiskComponent:(BOOL)a4;
- (BOOL)_isOnDiskComponent;
- (long long)compare:(id)a0 withProperVersionOrdering:(BOOL)a1;
- (id)initWithAttributes:(id)a0 forOnDiskComponent:(BOOL)a1;
- (long long)properCompare:(id)a0;

@end
