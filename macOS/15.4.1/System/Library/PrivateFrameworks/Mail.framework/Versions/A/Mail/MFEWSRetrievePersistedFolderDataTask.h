@class MFEWSRetrievePersistedFolderDataOperation, NSString, NSMutableSet;
@protocol MFEWSMailboxDataCache;

@interface MFEWSRetrievePersistedFolderDataTask : MFEWSTask <MFEWSRetrievePersistedFolderDataDelegate> {
    MFEWSRetrievePersistedFolderDataOperation *_retrievePersistedFolderDataOperation;
    NSMutableSet *_urlsNeedingData;
}

@property (readonly, nonatomic) id<MFEWSMailboxDataCache> cache;
@property (retain, nonatomic) MFEWSRetrievePersistedFolderDataOperation *retrievePersistedFolderDataOperation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)operationFinished:(id)a0;
- (id)initWithMailboxDataCache:(id)a0 accountName:(id)a1;
- (id)nextNetworkOperation;
- (id)nextPersistenceOperation;
- (void)recalculatePriorities;
- (void)retrieveDataForMailboxURLs:(id)a0;
- (void)retrievePersistedFolderDataOperation:(id)a0 didRetrieveFolderIDsByURL:(id)a1 syncStatesByURL:(id)a2 missedMailboxURLs:(id)a3;

@end
