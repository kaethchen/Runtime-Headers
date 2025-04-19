@class NSXPCConnection;

@interface WBSPasswordsDataImporter : NSObject {
    NSXPCConnection *_connectionToCredentialExtractionService;
}

+ (long long)importCredential:(id)a0;
+ (long long)importCredential:(id)a0 savedAccountStore:(id)a1;

- (void).cxx_destruct;
- (id)_remoteObjectProxyAndSandboxExtensionForFileURL:(id)a0;
- (void)computeNumberOfCredentialsToBeImportedFromCSVWithFileURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchLooksLikePasswordsCSVFile:(id)a0 completionHandler:(id /* block */)a1;
- (void)importFromCSVWithFileURL:(id)a0 progressHandler:(id /* block */)a1;

@end
