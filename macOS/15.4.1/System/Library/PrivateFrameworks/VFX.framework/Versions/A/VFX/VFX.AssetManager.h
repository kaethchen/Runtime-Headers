@interface VFX.AssetManager : NSObject {
    void /* unknown type, empty encoding */ pathResolver;
    void /* unknown type, empty encoding */ effectIDToAssetsDirectory;
    void /* unknown type, empty encoding */ authoringFileManager;
}

- (id)init;
- (void).cxx_destruct;
- (id)absoluteURLForAssetPath:(id)a0;

@end
