@class NSString, NSArray, NSSet;

@interface WBSBrowsingDataExportController : NSObject

@property (class, readonly, copy, nonatomic) NSString *exportDescriptionText;
@property (class, readonly, copy, nonatomic) NSString *defaultExportFolderName;
@property (class, readonly, copy, nonatomic) NSArray *orderedBrowsingDataExportTypesForDisplay;

@property (readonly, copy, nonatomic) NSString *exportErrorAlertTitle;
@property (readonly, copy, nonatomic) NSString *exportErrorAlertMessage;
@property (nonatomic) unsigned long long selectedBrowsingDataExportTypes;
@property (copy, nonatomic) NSSet *profileIdentifiersToExportFrom;

+ (id)titleForBrowsingDataExportType:(unsigned long long)a0;
+ (id)fileURLFromExportFolderURL:(id)a0 profileTitle:(id)a1 forBrowsingDataExportType:(unsigned long long)a2;
+ (id)iconForBrowsingDataExportType:(unsigned long long)a0;
+ (id)labelForBrowsingDataExportType:(unsigned long long)a0 withCount:(unsigned long long)a1;

- (void).cxx_destruct;
- (unsigned long long)_numberOfExtensionsToBeExported;
- (void)_exportBookmarksToFileWithURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)_exportExtensionsToDirectoryWithURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)_exportHistoryToDirectoryWithURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)_exportToTemporaryFolderWithURL:(id)a0 completionHandler:(id /* block */)a1;
- (unsigned long long)_numberOfBookmarksToBeExported;
- (void)_numberOfHistorySitesToBeExportedWithCompletionHandler:(id /* block */)a0;
- (void)computeNumberOfItemsToBeExportedForBrowsingDataExportType:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (void)exportToZipArchiveAtURL:(id)a0 completionHandler:(id /* block */)a1;

@end
