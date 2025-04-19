@interface REMPaths : NSObject

+ (id)URLForGroupContainerWithIdentifier:(id)a0;
+ (BOOL)_legacy_shouldUseCentralizedDataPath;
+ (id)attributesForGroupContainerDirectory;
+ (id)createTemporaryFileDirectoryURLIfNeededWithError:(id *)a0;
+ (id)dataSeparationEnabled_applicationDocumentsURL;
+ (id)legacy_applicationDocumentsURL;
+ (id)legacy_centralizedDataPath;
+ (void)unitTest_setLegacyApplicationDocumentsURL:(id)a0;

@end
