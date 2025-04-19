@class FPDDomain, NSArray, FPDServer, FPDRequest;

@interface FPDAttachKnownFolderOperation : FPOperation {
    unsigned long long _knownFolders;
    NSArray *_knownFolderPhysicalURLs;
    FPDDomain *_onlyForDomain;
    FPDServer *_server;
    unsigned long long _options;
    FPDRequest *_request;
}

- (void).cxx_destruct;
- (void)main;
- (id)initWithKnownFolderURLs:(id)a0 onlyForDomain:(id)a1 server:(id)a2 options:(unsigned long long)a3 request:(id)a4;
- (id)initWithKnownFolders:(unsigned long long)a0 onlyForDomain:(id)a1 server:(id)a2 options:(unsigned long long)a3 request:(id)a4;
- (void)notifyUserForDomain:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)resolveKnownFolderURLsWithError:(id *)a0;

@end
