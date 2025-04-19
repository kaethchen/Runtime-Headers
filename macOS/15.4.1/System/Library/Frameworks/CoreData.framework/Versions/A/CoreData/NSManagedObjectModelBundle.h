@class NSDictionary, NSBundle;

@interface NSManagedObjectModelBundle : NSObject {
    NSBundle *_bundle;
    NSDictionary *_versionInfoDictionary;
}

- (void)dealloc;
- (id)initWithPath:(id)a0;
- (id)currentVersion;
- (id)_modelForVersionHashes:(id)a0 inStyle:(unsigned long long)a1;
- (id)_modelForVersionHashes:(id)a0;
- (id)currentVersionURL;
- (id)modelVersions;
- (id)optimizedVersionURL;
- (id)urlForModelVersionWithName:(id)a0;
- (id)versionChecksums;

@end
