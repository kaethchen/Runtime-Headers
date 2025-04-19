@interface ATXPaths : NSObject

+ (id)appPredictionCacheDirectory;
+ (id)appPredictionDirectory;
+ (id)appPredictionDirectoryFile:(id)a0;
+ (id)modificationDateOfFileAtPath:(id)a0;
+ (id)onboardingStackResultCacheFilePath;
+ (id)onboardingStackWidgetCacheFilePath;
+ (id)contextualActionsModelDirectory;
+ (id)_getDirectoryBase;
+ (id)_getDirectoryCreating:(BOOL)a0;
+ (void)_recursivelyCreateDirectoryWithErrorHandlingAtPath:(id)a0;
+ (id)appPredictionBackupDirectory;
+ (id)biomeStreamsRootDirectory;
+ (id)bookmarksPathFile:(id)a0;
+ (id)clientModelCachesRootDirectory;
+ (id)complicationInlineSetCacheFilePath;
+ (id)complicationLandscapeModularSetCacheFilePath;
+ (id)complicationModularSetCacheFilePath;
+ (id)contextualActionsModelFileWithFilename:(id)a0;
+ (void)createDataVault:(id)a0;
+ (void)createDirectoriesIfNeeded;
+ (id)faceGalleryDemoConfigurationFilePath;
+ (id)feedbackRootDirectory;
+ (id)magicalMomentsPredictionTablesRootDirectory;
+ (id)metricsRootDirectory;
+ (id)modeCachesRootDirectory;
+ (id)posterConfigurationCacheFilePath;
+ (id)posterDescriptorCacheFilePath;
+ (id)scoreNormalizationModelDirectory;
+ (id)scoreNormalizationModelFileWithFilename:(id)a0;
+ (id)trialFolderResourcePath;
+ (id)uiCachesRootDirectory;
+ (id)watchFaceConfigurationCacheFilePath;
+ (id)websiteSuggestionsVerticalModelCacheFilePath;
+ (id)websiteTitlesAndSubtitlesCacheFilePath;
+ (id)widgetPredictionModelDirectory;
+ (id)widgetPredictionModelFileWithFilename:(id)a0;

@end
