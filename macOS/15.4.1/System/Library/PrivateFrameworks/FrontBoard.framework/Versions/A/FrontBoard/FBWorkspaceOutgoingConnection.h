@class BSServiceConnectionEndpoint;

@interface FBWorkspaceOutgoingConnection : FBWorkspaceConnection {
    BOOL _queue_verified;
    BSServiceConnectionEndpoint *_queue_endpoint;
}

- (void).cxx_destruct;

@end
