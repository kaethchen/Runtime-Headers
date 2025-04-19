@class NSXPCConnection;

@interface ManagedOrganizationContactsConnection : NSObject {
    NSXPCConnection *_connection;
}

- (void).cxx_destruct;
- (id)initWithEndpoint:(id)a0;
- (id)server:(id /* block */)a0;

@end
