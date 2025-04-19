@interface WFFileLocationUtilities : NSObject

+ (id)itemForURL:(id)a0 error:(id *)a1;
+ (id)downloadsDirectory;
+ (id)documentsDirectory;
+ (id)bundleIdentifierForItem:(id)a0;
+ (id)cloudDocsURL;
+ (id)desktopDirectory;
+ (id)documentsURLForApplicationContainerBundleID:(id)a0;
+ (void)fetchItemWithIdentifier:(id)a0 domainIdentifier:(id)a1 completionHandler:(id /* block */)a2;
+ (id)fetchRootItemURLForDomainWithID:(id)a0;
+ (id)iCloudDesktopDirectory;
+ (id)iCloudDocumentsDirectory;
+ (id)iCloudDownloadsDirectory;
+ (BOOL)isFileURL:(id)a0 withParentItems:(id)a1 insideFolderType:(unsigned long long)a2;
+ (id)mobileDocumentsDirectory;
+ (id)parentItemsForItem:(id)a0;
+ (id)rootItemForItem:(id)a0;

@end
