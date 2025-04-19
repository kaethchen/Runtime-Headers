@class BRCPQLConnection, NSArray, NSURL, BRDSIDString;

@interface BRCBackupSession : NSObject {
    BRCPQLConnection *_db;
    NSURL *_homeDirectoryURL;
    BRDSIDString *_accountDSID;
    NSArray *_syncedRootURLs;
}

+ (BOOL)fileProviderString:(id)a0 isEqualToFileProviderString:(id)a1;

- (void).cxx_destruct;
- (void)close;
- (id)_mobileDocumentsURL;
- (BOOL)_openDBWithHomeDirectoryURL:(id)a0 error:(id *)a1;
- (BOOL)_setupHomeDirectoryForUsername:(id)a0 error:(id *)a1;
- (void)_updateAccountIDAndSyncedRootURLs;
- (BOOL)_urlIsInSyncedLocation:(id)a0;
- (void)dbBecameCorrupted;
- (id)fileProviderStringsForDocumentURLs:(id)a0 error:(id *)a1;
- (BOOL)openWithUsername:(id)a0 error:(id *)a1;
- (BOOL)urlIsInSyncedLocation:(id)a0;

@end
