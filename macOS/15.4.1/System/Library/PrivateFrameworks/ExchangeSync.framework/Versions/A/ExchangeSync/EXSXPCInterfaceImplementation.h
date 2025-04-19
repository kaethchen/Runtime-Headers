@class EXSSyncEngine, EXSXPCResponseManager, NSXPCConnection;

@interface EXSXPCInterfaceImplementation : NSObject <EXSXPCInterface>

@property (retain, nonatomic) EXSSyncEngine *syncEngine;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) EXSXPCResponseManager *responseMananger;

+ (id)log;

- (void).cxx_destruct;
- (void)cancelCalendarAvailabilityRequestWithID:(id)a0;
- (void)cancelGrantedDelegatesListRequestWithID:(id)a0;
- (void)accountChangedWithType:(long long)a0 accountId:(id)a1;
- (void)accountWithACAccountIdentifier:(id)a0 hasChangeForACAccountDataclass:(id)a1;
- (void)addDelegateWithName:(id)a0 emailAddress:(id)a1 toAccountWithID:(id)a2 reply:(id /* block */)a3;
- (void)addGrantedDelegateForAccountID:(id)a0 grantedDelegate:(id)a1 withReply:(id /* block */)a2;
- (void)beginDownloadingAttachmentForAccountID:(id)a0 attachmentUUID:(id)a1 withReply:(id /* block */)a2;
- (void)beginSearchDirectoryForAccountID:(id)a0 queryString:(id)a1 fullContactData:(BOOL)a2 withReply:(id /* block */)a3;
- (void)cancelDownloadingAttachmentRequestWithID:(id)a0;
- (void)cancelSearchDirectoryRequestWithID:(id)a0;
- (void)getCalendarAvailabilityForAccountID:(id)a0 emails:(id)a1 startDate:(id)a2 endDate:(id)a3 withReply:(id /* block */)a4;
- (void)getGrantedDelegatesListForAccountID:(id)a0 withReply:(id /* block */)a1;
- (id)initWithSyncEngine:(id)a0 andConnection:(id)a1;
- (void)removeDelegateWithSourceID:(id)a0 fromParentAccountWithID:(id)a1 reply:(id /* block */)a2;
- (void)removeGrantedDelegateForAccountID:(id)a0 grantedDelegate:(id)a1 withReply:(id /* block */)a2;
- (void)requestAllFolderContentsUpdateForAccountId:(id)a0 dataclasses:(long long)a1;
- (void)requestFolderContentsUpdateForFolders:(id)a0 accountId:(id)a1;
- (void)requestFolderListUpdateForAccountId:(id)a0;
- (void)updateGrantedDelegateForAccountID:(id)a0 action:(long long)a1 delegate:(id)a2 permission:(long long)a3 withReply:(id /* block */)a4;
- (void)updateGrantedDelegatePermissionForAccountID:(id)a0 grantedDelegate:(id)a1 withReply:(id /* block */)a2;

@end
