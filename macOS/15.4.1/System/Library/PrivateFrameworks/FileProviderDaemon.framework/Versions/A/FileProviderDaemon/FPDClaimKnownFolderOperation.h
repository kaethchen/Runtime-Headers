@class FPDDomain, NSArray, NSString, FPDServer, FPDRequest, NSFileProviderKnownFolderLocations;

@interface FPDClaimKnownFolderOperation : FPOperation {
    BOOL _isProviderInitiated;
    unsigned long long _knownFolders;
    NSFileProviderKnownFolderLocations *_locations;
    NSArray *_descriptors;
    FPDDomain *_domain;
    FPDServer *_server;
    NSString *_localizedReason;
    unsigned long long _attachOptions;
    FPDRequest *_request;
    BOOL _skipSystemAlerts;
}

- (void).cxx_destruct;
- (void)main;
- (void)detachKnownFolders:(id)a0 completionHandler:(id /* block */)a1;
- (void)attachClaimedKnownFoldersWithCompletionHandler:(id /* block */)a0;
- (void)getKnownFolderLocationsWithCompletionHandler:(id /* block */)a0;
- (id)initWithDescriptors:(id)a0 server:(id)a1 request:(id)a2;
- (id)initWithKnownFolderLocations:(id)a0 domain:(id)a1 server:(id)a2 localizedReason:(id)a3 request:(id)a4;
- (id)initWithKnownFolders:(unsigned long long)a0 domain:(id)a1 server:(id)a2 attachOptions:(unsigned long long)a3 request:(id)a4;
- (BOOL)isDisallowedByOrganization;
- (void)notifyUserWithCompletionHandler:(id /* block */)a0;
- (void)resolveKnownFolder:(id)a0 location:(id)a1 options:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (void)resolveLogicalURLsOfLocations:(id)a0 completionHandler:(id /* block */)a1;

@end
