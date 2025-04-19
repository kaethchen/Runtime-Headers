@class DSArchiveService, NSMutableDictionary, NSFileManager, NSURL, NSFileHandle, NSObject, NSString;
@protocol OS_dispatch_group;

@interface _WBSBrowsingDataImportScanner : NSObject {
    NSObject<OS_dispatch_group> *_scannerGroup;
    NSFileManager *_fileManager;
    NSMutableDictionary *_results;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _resultLock;
    NSURL *_temporaryUnarchiveDestinationFolder;
    NSFileHandle *_temporaryUnarchiveDestinationFileHandle;
    NSString *_temporaryUnarchiveDestinationFolderSandboxExtension;
    DSArchiveService *_archiveService;
}

- (id)init;
- (void).cxx_destruct;
- (id)_createSandboxExtensionForURL:(id)a0;
- (BOOL)_isArchiveFileURL:(id)a0;
- (void)_processFileForURL:(id)a0 isInUnarchivedFolder:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)_scanImportedURL:(id)a0 isInUnarchivedFolder:(BOOL)a1;
- (void)scanImportURLs:(id)a0 sandboxExtensions:(id)a1 completionHandler:(id /* block */)a2;

@end
