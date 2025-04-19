@class NSFileManager;

@interface CDMDefaultAssetsManager : NSObject {
    NSFileManager *_fileManager;
}

+ (id)getAbsolutePathForAssetsRootFolderForAssetDirPath:(id)a0;
+ (id)getAbsolutePathForLocalizedAssetsRootFolderForAssetDirPath:(id)a0 locale:(id)a1;

- (void).cxx_destruct;
- (id)initManager;
- (id)getAbsolutePathForServiceAssetFolders:(id)a0 assetDirPath:(id)a1 locale:(id)a2;

@end
