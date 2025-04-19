@class NSString, NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface SafariSandboxBrokerConnection : WBSUISafariSandboxBrokerConnection <SafariSandboxBrokerProtocol> {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_connectionWithCompletionHandler:(id /* block */)a0;
- (void)_establishConnectionWithCompletionHandler:(id /* block */)a0;
- (void)_establishSynchronousConnectionWithCompletionHandler:(id /* block */)a0;
- (void)asynchronouslyMigrateResourcesToSandbox:(id)a0 completionHandler:(id /* block */)a1;
- (void)cancelUnarchivingOperationForDownloadWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)clearDownloadIdentifiersNotIncludedIn:(id)a0 completionHandler:(id /* block */)a1;
- (void)deleteUnusedDownloadBundleWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)extractDownloadedArchiveWithPath:(id)a0 ofType:(unsigned long long)a1 forDownloadWithIdentifier:(id)a2 completionHandler:(id /* block */)a3;
- (void)getDownloadBundleURLForDownloadWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)getDownloadLocationURLWithCompletionHandler:(id /* block */)a0;
- (void)issueDevelopModeExtensionWithCompletionHandler:(id /* block */)a0;
- (void)issueRootExtensionWithCompletionHandler:(id /* block */)a0;
- (void)migrateResourcesToSandbox:(id)a0 completionHandler:(id /* block */)a1;
- (void)moveDownloadBundleWithIdentifierToTrash:(id)a0 completionHandler:(id /* block */)a1;
- (void)moveDownloadedFilesWithPaths:(id)a0 inDownloadWithIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)setShouldAlwaysPromptForDownloadPath:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)synchronouslyRemoveQuarantineHardAttributeFromFileAtURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateFractionCompleted:(float)a0 forDownloadWithIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)writeFileWrapperToUniqueFileInDownloadsFolder:(id)a0 shouldSetPrivacySensitiveQuarantineProperties:(BOOL)a1 completionHandler:(id /* block */)a2;

@end
