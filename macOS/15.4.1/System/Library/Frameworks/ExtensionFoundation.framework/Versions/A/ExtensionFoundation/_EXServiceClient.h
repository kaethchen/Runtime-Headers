@interface _EXServiceClient : NSObject {
    void /* unknown type, empty encoding */ connectionLock;
    void /* unknown type, empty encoding */ _discoveryConnection;
    void /* unknown type, empty encoding */ _tccProxyConnection;
    void /* unknown type, empty encoding */ _launchConnection;
    void /* unknown type, empty encoding */ activeQueries;
    void /* unknown type, empty encoding */ activeQueriesLock;
    void /* unknown type, empty encoding */ notifyQueue;
}

@property (class, nonatomic, readonly) _EXServiceClient *sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)photoServiceAuthorizationStatusForExtensionUUID:(id)a0 error:(id *)a1;

@end
