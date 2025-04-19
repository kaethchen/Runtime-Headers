@class NSString, MFEWSAccount, NSMutableSet, NSLock;

@interface MFEWSStore : MFRemoteStore <MFEWSErrorHandler> {
    NSString *_syncState;
    NSLock *_syncLock;
    NSMutableSet *_flagsToSetDuringSync;
}

@property (copy) NSString *folderIdString;
@property (copy) NSString *syncState;
@property (readonly, nonatomic) MFEWSAccount *account;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)lastSyncDate;
- (BOOL)allowsOverwrite;
- (void)_setSyncState:(id)a0 persistToLibrary:(BOOL)a1;
- (void)handleEWSError:(id)a0;
- (id)_fetchBodyDataForMessage:(id)a0 andHeaderDataIfReadilyAvailable:(id *)a1 fetchIfNotAvailable:(BOOL)a2 allowPartial:(BOOL)a3;
- (void)_fetchChangesFromServer;
- (id)_fetchHeaderDataForMessage:(id)a0 fetchIfNotAvailable:(BOOL)a1 allowPartial:(BOOL)a2;
- (id)_gateway;
- (BOOL)_loadFolderId;
- (BOOL)allowsDeleteInPlace;
- (BOOL)canRebuild;
- (void)deleteMessageWithEWSItemIdString:(id)a0;
- (void)fetchSynchronously;
- (void)forceResync;
- (id)initWithCriterion:(id)a0 mailbox:(id)a1 readOnly:(BOOL)a2;
- (void)openSynchronouslyIfWaitingToOpen;
- (void)openSynchronouslyUpdatingMetadata:(BOOL)a0;
- (void)sendResponseType:(char)a0 forMeetingMessage:(id)a1 completionHandler:(id /* block */)a2;
- (void)undeleteMessagesWithEWSItemIdStrings:(id)a0;
- (id)updateWithSyncState:(id)a0 newMessages:(id)a1 updatedMessages:(id)a2 updatedLibraryIdStrings:(id)a3 deletedMessages:(id)a4 flagsByMessages:(id)a5 isFinalBatch:(BOOL)a6;

@end
