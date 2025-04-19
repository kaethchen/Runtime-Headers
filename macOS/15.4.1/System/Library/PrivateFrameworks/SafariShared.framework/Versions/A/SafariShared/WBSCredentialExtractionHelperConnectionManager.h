@class NSMutableSet, NSXPCConnection;

@interface WBSCredentialExtractionHelperConnectionManager : NSObject {
    NSMutableSet *_clients;
}

@property (retain, nonatomic) NSXPCConnection *credentialExtractionHelperConnection;

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (void)removeClient:(id)a0;
- (id)credentialExtractionHelperConnectionRequestedByClient:(id)a0;

@end
