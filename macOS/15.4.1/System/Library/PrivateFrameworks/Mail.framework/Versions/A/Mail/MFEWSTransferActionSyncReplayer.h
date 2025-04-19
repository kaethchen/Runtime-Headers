@class NSString, MFEWSConnection;

@interface MFEWSTransferActionSyncReplayer : ECTransferActionReplayer <ECTransferActionReplayerSubclassMethods>

@property (retain, nonatomic) MFEWSConnection *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isRecoverableError:(id)a0;
- (id)appendItem:(id)a0 mailboxURL:(id)a1;
- (id)copyItems:(id)a0 destinationMailboxURL:(id)a1;
- (BOOL)deleteSourceMessagesFromTransferItems:(id)a0;
- (BOOL)downloadFailed;
- (id)fetchBodyDataForRemoteID:(id)a0 mailboxURL:(id)a1;
- (id)moveItems:(id)a0 destinationMailboxURL:(id)a1;
- (id)replayActionUsingEWSConnection:(id)a0;
- (id)_bodyRequestShape;
- (id)_folderIDStringForMailbox:(id)a0;
- (id)_folderIDStringForMailboxURLString:(id)a0;

@end
