@class NSArray, FPItem, NSOperationQueue, NSObject, FPItemID;
@protocol OS_dispatch_queue;

@interface FPArchiveOperation : FPActionOperation {
    NSArray *_items;
    FPItemID *_placeholderID;
    FPItem *_destinationFolder;
    NSObject<OS_dispatch_queue> *_queue;
    NSOperationQueue *_operationQueue;
}

@property (copy, nonatomic) id /* block */ archiveCompletionBlock;
@property (nonatomic) unsigned long long archiveFormat;

+ (id)extensionForArchiveFormat:(unsigned long long)a0 utType:(id *)a1;

- (void).cxx_destruct;
- (id)initWithItems:(id)a0 destinationFolder:(id)a1;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (void)_archiveURLForDSEnumeratedDestination:(id)a0 service:(id)a1 completionHandler:(id /* block */)a2;
- (void)_archiveURLForFPEnumeratedDestination:(id)a0 targetArchiveName:(id)a1 service:(id)a2 completionHandler:(id /* block */)a3;
- (void)_archiveURLs:(id)a0 targetArchiveName:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)_checkNeedOfTemporaryDirectory;
- (void)_coordinateArchivedItemsWithCompletionHandler:(id /* block */)a0;
- (void)_copyArchivedItemsWithCompletionHandler:(id /* block */)a0;
- (unsigned long long)_fpToDSArchiveFormat:(unsigned long long)a0;
- (void)_materializeDestinationFolder:(id /* block */)a0;
- (void)_prepareItemsWithCompletionHandler:(id /* block */)a0;
- (void)actionMain;
- (void)didUnarchiveItemAtURL:(id)a0;
- (id)findUniqueArchivedName:(id)a0 parent:(id)a1;
- (void)presendNotifications;

@end
