@class NSXPCConnection;

@interface STSettingsServiceClient : NSObject

@property (retain) NSXPCConnection *connection;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isCloudSyncEnabled:(id *)a0;
- (BOOL)isRestrictAdultContentEnabled:(id *)a0;
- (void)processSettingsChangesSinceHistoryToken:(id)a0 withCompletion:(id /* block */)a1;
- (BOOL)requestLegacyUsageForUser:(id)a0 withError:(id *)a1;
- (void)setCloudSync:(BOOL)a0 withCompletion:(id /* block */)a1;
- (id)startCoreDataServerWithError:(id *)a0;
- (BOOL)updateLegacyUsageWithError:(id *)a0;

@end
