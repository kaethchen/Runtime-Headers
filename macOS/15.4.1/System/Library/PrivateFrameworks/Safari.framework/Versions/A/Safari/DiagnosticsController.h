@class NSURL, NSString, NSDictionary;

@interface DiagnosticsController : NSObject

@property (readonly, nonatomic) NSURL *homeDirectoryURL;
@property (readonly, nonatomic) NSURL *userLibraryDirectoryURL;
@property (readonly, nonatomic) NSURL *safariSettingsDirectoryURL;
@property (readonly, nonatomic) NSString *safariVersionReport;
@property (readonly, nonatomic) NSDictionary *preferences;
@property (readonly, nonatomic) NSDictionary *lastSession;
@property (readonly, nonatomic) NSString *bookmarksReport;

- (id)init;
- (void).cxx_destruct;
- (id)_filteredLastSessionTab:(id)a0 excludingURLs:(id)a1;
- (id)_filteredLastSessionTabs:(id)a0 excludingURLs:(id)a1;
- (id)_filteredLastSessionWindow:(id)a0 excludingURLs:(id)a1;
- (id)_filteredLastSessionWindows:(id)a0 excludingURLs:(id)a1;
- (id)_generateReportForBundle:(id)a0;
- (id)_generateReportForBundleAtURL:(id)a0;
- (id)_generateReportForBundleWithIdentifier:(id)a0;
- (id)_generateReportForFileAtURL:(id)a0;
- (id)_preferenceKeyIncludeList;
- (id)filteredLastSession:(id)a0 excludingURLs:(id)a1;
- (id)reportForExtensionAtURL:(id)a0;
- (void)saveArray:(id)a0 toURL:(id)a1;
- (void)saveDictionary:(id)a0 toURL:(id)a1;
- (void)saveString:(id)a0 toURL:(id)a1;

@end
