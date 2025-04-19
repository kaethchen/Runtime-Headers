@class NSArray, NSString, MFMailbox;
@protocol EDMessageChangeHookResponder, MFAddProgressMonitor;

@interface MFLibraryMessageWriter : NSObject {
    NSArray *_remoteIDs;
    NSArray *_documentIDs;
    NSArray *_updateRowIDs;
}

@property (readonly, copy, nonatomic) NSArray *unsortedMessagesIndexesOrder;
@property (copy, nonatomic) NSString *dataDirectory;
@property (readonly, copy, nonatomic) NSArray *messagesToWrite;
@property (readonly, nonatomic) MFMailbox *destinationMailbox;
@property (nonatomic) BOOL fetchBodies;
@property (nonatomic) BOOL isInitialImport;
@property (nonatomic) BOOL isMailboxRebuild;
@property (retain, nonatomic) id<MFAddProgressMonitor> progressDelegate;
@property (retain, nonatomic) id<EDMessageChangeHookResponder> hookResponder;
@property (copy, nonatomic) NSArray *remoteIDs;
@property (copy, nonatomic) NSArray *documentIDs;
@property (copy, nonatomic) NSArray *updateRowIDs;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)_bodiesAndFileLocationsAtIndexes:(id)a0 messageBodiesByMessage:(id *)a1 temporaryBodyURLsByMessage:(id *)a2 fileLocationsByMessage:(id *)a3 lastIndexOfSuccessfulMessage:(unsigned long long *)a4;
- (BOOL)_canUseEmlxFileWhenCopyingMessage:(id)a0 fromAccount:(id)a1 toAccount:(id)a2;
- (void)_cleanupTablesReferencingMessageID:(long long)a0 preparedStatements:(id)a1;
- (void)_copyMessageAuxiliaryTables:(id)a0 originalLibraryID:(long long)a1 newLibraryID:(long long)a2;
- (void)_garbageCollectSubject:(long long)a0 sender:(long long)a1 globalID:(long long)a2 summary:(long long)a3 preparedStatements:(id)a4;
- (BOOL)_isLibraryMessage:(id)a0;
- (BOOL)_isLocalAccount:(id)a0;
- (BOOL)_isRemoteStoreAccount:(id)a0;
- (id)initWithMessagesToWrite:(id)a0 destinationMailbox:(id)a1;
- (id)writeMessagesWithError:(id *)a0;

@end
