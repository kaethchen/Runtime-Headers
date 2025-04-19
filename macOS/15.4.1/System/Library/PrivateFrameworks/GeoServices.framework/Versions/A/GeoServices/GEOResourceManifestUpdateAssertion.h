@class NSString, GEOXPCConnection;

@interface GEOResourceManifestUpdateAssertion : NSObject {
    NSString *_reason;
    double _creationTimestamp;
    GEOXPCConnection *_connection;
    int _notifyToken;
}

- (void)dealloc;
- (id)debugDescription;
- (id)init;
- (void).cxx_destruct;
- (id)initWithReason:(id)a0;
- (void)_connectToGeod;

@end
