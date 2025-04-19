@class NSString, NSProgress, ECLocalMessageAction, IMAPTaskManager;
@protocol IMAPMessageDataSource, IMAPMessageActionSyncOperationDelegate;

@interface IMAPMessageActionSyncOperation : IMAPNetworkTaskOperation <ECIMAPLocalActionReplayerDelegate>

@property (readonly, nonatomic) IMAPTaskManager *taskManager;
@property (readonly, nonatomic) id<IMAPMessageDataSource> dataSource;
@property (readonly, nonatomic) ECLocalMessageAction *messageAction;
@property (weak, nonatomic) id<IMAPMessageActionSyncOperationDelegate> delegate;
@property (retain, nonatomic) NSProgress *progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)main;
- (id)initWithMailboxName:(id)a0;
- (BOOL)checkUIDValidity:(unsigned int)a0 mailboxURL:(id)a1;
- (BOOL)errorIsIMAPError:(id)a0;
- (id)flagsForIMAPUIDs:(id)a0 mailboxURL:(id)a1;
- (id)imapMailboxNameForMailboxURL:(id)a0;
- (id)messageDataForMessage:(id)a0;
- (id)messageDataForRemoteID:(id)a0 mailboxURL:(id)a1;
- (BOOL)moveSupportedFromMailboxURL:(id)a0 toURL:(id)a1;
- (id)initWithDataSource:(id)a0 taskManager:(id)a1 messageAction:(id)a2;

@end
