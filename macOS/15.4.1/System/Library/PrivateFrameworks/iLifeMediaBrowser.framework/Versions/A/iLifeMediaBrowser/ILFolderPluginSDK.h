@class NSLock, NSMutableArray, NSString;

@interface ILFolderPluginSDK : ILMediaManager <ILMediaManagerPlugin_MustImplement> {
    NSMutableArray *_folderPaths;
    NSLock *_folderPathsLock;
    NSString *_currentLoadPath;
    BOOL _shouldAbortCurrentLoad;
    id _reserved4;
    id _reserved5;
    id _reserved6;
}

+ (id)pluginBundle;
+ (void)setPluginBundle:(id)a0;
+ (BOOL)_isSupportedAudioExtension:(id)a0 orFileType:(unsigned int)a1;
+ (BOOL)_isSupportedAudioFileBySpotlightDict:(id)a0;
+ (BOOL)_isSupportedImageExtension:(id)a0 orFileType:(unsigned int)a1;
+ (BOOL)_isSupportedImageFileBySpotlightDict:(id)a0;
+ (BOOL)_isSupportedMovieExtension:(id)a0 orFileType:(unsigned int)a1;
+ (BOOL)_isSupportedMovieFileBySpotlightDict:(id)a0;
+ (id)_previewFileForGBProjectPath:(id)a0;
+ (BOOL)isManagedMediaSource;
+ (void)releaseSharedMediaManager;
+ (id)sharedMediaManager;

- (void)dealloc;
- (id)init;
- (id)displayName;
- (id)uniqueID;
- (id)displayImage;
- (id)_createAudioMediaObjectForPath:(id)a0 isAlias:(BOOL)a1 spotlightAttributesDict:(id)a2;
- (void)addFolderPaths:(id)a0;
- (id)currentLoadpath;
- (void)killLoadThread:(id)a0;
- (id)_createGBMediaObjectForPath:(id)a0 isAlias:(BOOL)a1 resolvedAliasPath:(id)a2 spotlightAttributesDict:(id)a3;
- (id)_createImageMediaObjectWithPath:(id)a0 isAlias:(BOOL)a1 resolvedAliasPath:(id)a2 spotlightAttributesDict:(id)a3;
- (id)_createMediaObjectForPath_V2:(id)a0 isAlias:(BOOL)a1 resolvedAliasPath:(id)a2 dstInfoRec:(struct LSItemInfoRecord { unsigned int x0; unsigned int x1; unsigned int x2; struct __CFString *x3; } *)a3;
- (id)_createMovieMediaObjectForPath:(id)a0 isAlias:(BOOL)a1 resolvedAliasPath:(id)a2 spotlightAttributesDict:(id)a3;
- (BOOL)_cyclicDependency:(id)a0 parentPath:(id)a1;
- (id)performLoadData;
- (void)watchedQueryChanged:(id)a0 queryScope:(id)a1;
- (id)_createFolderMediaGroupForPath:(id)a0;
- (id)_checkForiMovieProjectAtPath:(id)a0 alias:(BOOL)a1 infoRecFlags:(unsigned long long)a2;
- (id)_createFolderMediaGroupForPath:(id)a0 currentLoadAliases:(id)a1;
- (id)_createMediaObjectForPath:(id)a0 alias:(BOOL)a1 infoRecFlags:(unsigned long long)a2;
- (id)_createMediaObjectForURL:(id)a0 isAlias:(BOOL)a1 resolvedAliasPath:(id)a2 dstInfoRec:(struct LSItemInfoRecord { unsigned int x0; unsigned int x1; unsigned int x2; struct __CFString *x3; } *)a3;
- (void)_createOrUpdateSmartFolderMediaForPath:(id)a0 filePaths:(id)a1 notification:(id)a2;
- (void)watchSubFolder:(id)a0;
- (id)_loadMediaFolders:(id)a0;
- (void)_loadMediaFoldersThreaded:(id)a0;
- (id)_mediaGroupForPath:(id)a0;
- (void)_removeMediaGroupWithPath:(id)a0;
- (void)addFolderPath:(id)a0;
- (BOOL)addUniquePath:(id)a0;
- (void)addWatchRecursiveForMediaGroups:(id)a0;
- (id)badgeInfoForMediaObject:(id)a0 inMediaGroups:(id)a1 thumbnailRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)createMediaObjectForURL:(id)a0;
- (id)customFolderPaths;
- (BOOL)isFolderSourcePlugin;
- (BOOL)loadShouldIgnoreThisPath:(id)a0;
- (id)mediaGroupForAliasTargetPath:(id)a0;
- (id)mediaGroupForPath:(id)a0;
- (unsigned long long)mediaTypesSupported;
- (void)reloadDataForPath:(id)a0;
- (void)removeAllFolderPaths;
- (void)removeChildGroup:(id)a0;
- (void)removeFolderPath:(id)a0;
- (void)removeFolderPathThreaded:(id)a0;
- (void)removeFolderPaths:(id)a0;
- (void)removeMediaGroupFolders:(id)a0;
- (void)removeWatchRecursiveForMediaGroups:(id)a0;
- (id)rootMediaGroupIcon;
- (id)rootMediaGroupTitle;
- (void)setCurrentLoadPath:(id)a0;
- (void)updateChildGroup:(id)a0;
- (void)watchedPathChanged:(id)a0 fileChangedEventFlags:(unsigned long long)a1;
- (BOOL)writeMediaGroups:(id)a0 toPasteboard:(id)a1;

@end
