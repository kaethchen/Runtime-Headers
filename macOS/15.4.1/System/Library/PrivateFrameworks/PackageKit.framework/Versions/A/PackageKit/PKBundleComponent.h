@class NSString, PKBundleComponentVersion;

@interface PKBundleComponent : PKComponent {
    NSString *_storageType;
    NSString *_bundlePath;
    BOOL _onDisk;
    PKBundleComponentVersion *_bundleVersion;
}

@property int overwriteAction;
@property (readonly) NSString *storageType;
@property (readonly) NSString *bundlePath;
@property (readonly) NSString *bundleName;
@property (readonly) PKBundleComponentVersion *bundleVersion;

+ (BOOL)_enumerateBundleComponentsUnderURL:(id)a0 relativeToRoot:(id)a1 parentComponent:(id)a2 usingBlock:(id /* block */)a3;
+ (void)enumerateBundleComponentsUnderRoot:(id)a0 usingBlock:(id /* block */)a1;

- (void)dealloc;
- (id)_bundle;
- (long long)versionCompare:(id)a0;
- (id)initWithBundleAtPath:(id)a0 relativeToDestination:(id)a1;
- (id)initWithIdentifier:(id)a0 versionAttributes:(id)a1 bundlePath:(id)a2;
- (id)initWithIdentifier:(id)a0 versionAttributes:(id)a1 bundlePath:(id)a2 storageType:(id)a3;
- (id)prefixPath;
- (id)subpaths;

@end
