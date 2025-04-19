@class NSXPCConnection, NSXPCInterface;

@interface SPProvenanceTracking : NSObject {
    NSXPCInterface *_interface;
    NSXPCConnection *_connection;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)findAssociatedProvenanceEntries:(id)a0;
- (id)findProvenanceEntryForID:(id)a0;
- (id)findProvenanceEntryForURL:(id)a0;
- (id)getAllProvenanceEntries;
- (id)getProvenanceIDForURL:(id)a0;

@end
