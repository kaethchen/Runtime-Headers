@interface NSOSPDefaults : NSObject

+ (id)_defaultDirectoryForIdentifier:(id)a0;
+ (void)_addDirectoryToRecentPlaces:(id)a0;
+ (id)_directoryForKey:(id)a0;
+ (id)_lastSavedDirectoryForIdentifier:(id)a0;
+ (id)_lastSavedRootDirectoryForIdentifier:(id)a0;
+ (int)_mapFinderViewStyleFromNSNavFileListMode:(int)a0;
+ (int)_mapNSNavFileListModeFromFinderViewStyle:(int)a0;
+ (struct CGSize { double x0; double x1; })_readExpandedSizeForIdentifier:(id)a0 inSaveMode:(BOOL)a1 minSize:(struct CGSize { double x0; double x1; })a2;
+ (id)_readExpandedSizeValueForIdentifier:(id)a0 inSaveMode:(BOOL)a1;
+ (BOOL)_readExpandedStateForIdentifier:(id)a0 valueIfNull:(BOOL)a1;
+ (long long)_readFileListModeForIdentifier:(id)a0 inSaveMode:(BOOL)a1 inDirectory:(id)a2 lastListForMediaBrowserMode:(BOOL)a3;
+ (BOOL)_readShouldShowHiddenFilesForIdentifier:(id)a0 valueIfNull:(BOOL)a1;
+ (BOOL)_readShowsSidebarForIdentifier:(id)a0 valueIfNull:(BOOL)a1;
+ (BOOL)_readUserSetHideExtensionButtonStateForIdentifier:(id)a0 valueIfNull:(BOOL)a1;
+ (id)_recentPlaces;
+ (void)_resetDefaultsForIdentifier:(id)a0;
+ (void)_storeCurrentDirectoryUsingKey:(id)a0 directoryURL:(id)a1 rootURL:(id)a2;
+ (void)_storeRootDirectoryURL:(id)a0 forIdentifier:(id)a1;
+ (void)_storeRootDirectoryUsingKey:(id)a0 rootURL:(id)a1 directoryPath:(id)a2;
+ (void)_writeExpandedSize:(struct CGSize { double x0; double x1; })a0 forIdentifier:(id)a1 inSaveMode:(BOOL)a2;
+ (void)_writeExpandedState:(BOOL)a0 forIdentifier:(id)a1;
+ (void)_writeFileListMode:(long long)a0 forIdentifier:(id)a1 inSaveMode:(BOOL)a2;
+ (void)_writeRootURL:(id)a0 directoryURL:(id)a1 forIdentifier:(id)a2;
+ (void)_writeShouldShowHiddenFiles:(BOOL)a0 forIdentifier:(id)a1;
+ (void)_writeShowsSidebar:(BOOL)a0 forIdentifier:(id)a1;
+ (void)_writeUserSetHideExtensionButtonState:(BOOL)a0 forIdentifier:(id)a1;

@end
