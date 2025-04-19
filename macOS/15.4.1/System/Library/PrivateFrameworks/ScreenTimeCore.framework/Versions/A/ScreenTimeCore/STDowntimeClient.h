@class STDowntimeServiceClient, NSXPCConnection;

@interface STDowntimeClient : NSObject

@property (readonly) NSXPCConnection *connection;
@property (retain, nonatomic) STDowntimeServiceClient *downtimeServiceClient;

+ (id)_newConnection;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isDowntimeEnabledForUserID:(id)a0;
- (void)toggleOnDemandDowntimeForUserID:(id)a0 completionHandler:(id /* block */)a1;

@end
