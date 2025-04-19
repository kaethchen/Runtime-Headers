@interface _TtCC18StatusKitAgentCore20SKALocalStatusServer16DatabaseDelegate : NSObject <SKADatabaseProvidingDelegate, SKADatabaseManagingDelegate>

- (id)init;
- (void)initialCloudKitImportReceived:(id)a0;
- (void)databaseDidReceiveRemoteChangesForChannels:(id)a0;
- (void)databaseManager:(id)a0 didCreateChannel:(id)a1;

@end
