@class NSMutableArray;

@interface SHKSaveToFilesSharingService : SHKSharingService

@property (retain) NSMutableArray *urlsToDelete;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isEnabled;
- (void)canPerformWithItems:(id)a0 completion:(id /* block */)a1;
- (BOOL)canPerformWithItems:(id)a0;
- (void)performWithItems:(id)a0;
- (id)loadFileURLSyncForItemProvider:(id)a0;
- (void)deleteTemporaryURLs;
- (id)fileURLForItems:(id)a0;
- (id)loadFileURLForPDFItem:(id)a0;
- (id)loadFileURLForPDFItemProvider:(id)a0;
- (void)save:(id)a0 completion:(id /* block */)a1;
- (void)saveFileURL:(id)a0 completion:(id /* block */)a1;
- (id)temporaryFileURLForData:(id)a0 typeIdentifier:(id)a1;

@end
