@class NSString;

@interface FileProviderDaemon.InternalPathsManager : NSObject {
    void /* unknown type, empty encoding */ providerDomainID;
    void /* unknown type, empty encoding */ personaIdentifier;
    void /* unknown type, empty encoding */ extensionManager;
    void /* unknown type, empty encoding */ volume;
    void /* unknown type, empty encoding */ rtcReporter;
    void /* unknown type, empty encoding */ appSupportURL;
    void /* unknown type, empty encoding */ archiveURL;
    void /* unknown type, empty encoding */ wharfDirectoryURL;
    void /* unknown type, empty encoding */ dbDirectoryURL;
    void /* unknown type, empty encoding */ dbURL;
    void /* unknown type, empty encoding */ temporaryDirectoryURL;
    void /* unknown type, empty encoding */ stateDirectoryURL;
    void /* unknown type, empty encoding */ diagnosticsDirectoryURL;
}

@property (class, nonatomic, readonly) NSString *purgatoryPrefix;

- (id)init;
- (void).cxx_destruct;
- (id)initWithProviderDomainID:(id)a0;

@end
