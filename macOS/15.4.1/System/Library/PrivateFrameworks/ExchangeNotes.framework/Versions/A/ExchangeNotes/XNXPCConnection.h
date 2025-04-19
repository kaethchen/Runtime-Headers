@class NSObject, NSMutableDictionary, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface XNXPCConnection : NSObject <XNXPCReplyInterface> {
    NSXPCConnection *xpcConnection;
    NSObject<OS_dispatch_queue> *connectionQueue;
    NSObject<OS_dispatch_queue> *inFlightConnectionQueue;
    NSObject<OS_dispatch_queue> *replyBlockQueue;
    NSMutableDictionary *processingFetchOperations;
}

+ (id)log;
+ (id)sharedConnection;

- (id)init;
- (void).cxx_destruct;
- (id)deleteAccountWithIdentifier:(id)a0;
- (id)createFolderWithExternalIdentifier:(id)a0 name:(id)a1 parentObject:(id)a2 changeKey:(id)a3;
- (id)findNoteWithExternalIdentifier:(id)a0;
- (id)notesConnection;
- (void)changeBatchForAccount:(id)a0 moreChanges:(BOOL)a1 changesToParse:(id)a2 incrementalToken:(id)a3;
- (id)createAccountWithIdentifier:(id)a0 name:(id)a1 email:(id)a2 type:(id)a3;
- (id)createAccountWithIdentifier:(id)a0 name:(id)a1 email:(id)a2 type:(id)a3 error:(id *)a4;
- (id)createFolderWithExternalIdentifier:(id)a0 name:(id)a1 parentObject:(id)a2 changeKey:(id)a3 error:(id *)a4;
- (id)createNoteWithExternalIdentifier:(id)a0 title:(id)a1 content:(id)a2 dateCreated:(id)a3 dateModified:(id)a4 changeKey:(id)a5 folder:(id)a6 attachments:(id)a7 error:(id *)a8;
- (id)currentTrackingTokenForAccountID:(id)a0;
- (id)deleteAccountWithSpecifier:(id)a0;
- (id)deleteObjectWithSpecifier:(id)a0;
- (void)didSyncAccountWithSpecifier:(id)a0;
- (void)executeAsyncronousXPCOperationAndWait:(id /* block */)a0;
- (void)fetchChangesSinceToken:(id)a0 forAccountWithID:(id)a1 withReply:(id /* block */)a2;
- (id)fetchObjectWithSpecifier:(id)a0 propertyKeyPaths:(id)a1 toOneRelationshipKeyPaths:(id)a2 toManyRelationshipKeyPaths:(id)a3;
- (id)findAccountWithIdentifier:(id)a0;
- (id)findAccountWithIdentifier:(id)a0 error:(id *)a1;
- (id)findFolderWithIdentifier:(id)a0;
- (id)folderExistsWithManagedObjectID:(id)a0;
- (id)noteExistsWithManagedObjectID:(id)a0;
- (id)updateObjectWithSpecifier:(id)a0 properties:(id)a1 toOneRelationships:(id)a2 toManyRelationships:(id)a3;
- (void)willSyncAccountWithSpecifier:(id)a0;

@end
