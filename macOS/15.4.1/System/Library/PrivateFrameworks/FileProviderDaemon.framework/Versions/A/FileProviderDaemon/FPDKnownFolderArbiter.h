@class NSURL, NSOperationQueue, FPDServer;

@interface FPDKnownFolderArbiter : NSObject {
    FPDServer *_server;
    NSOperationQueue *_operationQueue;
}

@property (class, readonly, nonatomic) NSURL *desktopURL;
@property (class, readonly, nonatomic) NSURL *documentsURL;

- (void).cxx_destruct;
- (id)initWithServer:(id)a0;
- (void)attachKnownFolders:(id)a0 options:(unsigned long long)a1 request:(id)a2 completionHandler:(id /* block */)a3;
- (void)claimKnownFolders:(id)a0 domain:(id)a1 localizedReason:(id)a2 request:(id)a3 completionHandler:(id /* block */)a4;
- (void)detachKnownFolders:(id)a0 request:(id)a1 completionHandler:(id /* block */)a2;
- (void)releaseKnownFolders:(unsigned long long)a0 domain:(id)a1 localizedReason:(id)a2 options:(unsigned long long)a3 request:(id)a4 completionHandler:(id /* block */)a5;
- (void)selectNewDomain:(id)a0 knownFolders:(unsigned long long)a1 skipReleasePrompt:(BOOL)a2 request:(id)a3 completionHandler:(id /* block */)a4;

@end
