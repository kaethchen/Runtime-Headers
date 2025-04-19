@class BSServiceConnection, NSMutableArray, FBWorkspace;

@interface FBWorkspaceConnection : NSObject {
    FBWorkspace *_workspace;
    BSServiceConnection *_workspaceLock_connection;
    NSMutableArray *_workspaceLock_waitForConnectBlocks;
    BOOL _workspaceLock_valid;
}

- (void).cxx_destruct;

@end
