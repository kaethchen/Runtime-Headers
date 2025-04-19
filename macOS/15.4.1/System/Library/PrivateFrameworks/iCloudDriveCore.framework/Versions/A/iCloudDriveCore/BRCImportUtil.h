@interface BRCImportUtil : NSObject

+ (void)forceIngestionForItemID:(id)a0 completionHandler:(id /* block */)a1;
+ (void)forceLatestVersionOnDiskForItemID:(id)a0 completionHandler:(id /* block */)a1;
+ (void)reimportItemsBelowItemWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
+ (BOOL)isFileNameIgnoredForSync:(id)a0 isRegFile:(BOOL)a1;
+ (BOOL)reimportItemsBelowItemWithIdentifier:(id)a0 error:(id *)a1;
+ (void)requestModificationOfItemIdentifier:(id)a0 completionHandler:(id /* block */)a1;
+ (BOOL)shouldFileIDBeIgnoredAsNonMigrated:(id)a0 docID:(id)a1 deviceID:(id)a2 isRegFile:(BOOL)a3 rowid:(id)a4 outItemURL:(id *)a5 isBusyDate:(BOOL *)a6 isIgnoredFromSync:(BOOL *)a7;

@end
