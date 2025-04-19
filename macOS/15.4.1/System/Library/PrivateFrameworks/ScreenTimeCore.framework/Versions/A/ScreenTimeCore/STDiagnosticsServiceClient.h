@class NSXPCConnection;
@protocol STDiagnosticsServiceProtocol;

@interface STDiagnosticsServiceClient : NSObject

@property (copy, nonatomic) id /* block */ idsMessageCallback;
@property (copy, nonatomic) id /* block */ cloudKitMessageCallback;
@property (copy, nonatomic) id /* block */ genericMessageCallback;
@property (retain, nonatomic) id<STDiagnosticsServiceProtocol> remoteObject;
@property (retain, nonatomic) NSXPCConnection *connection;

- (id)init;
- (void).cxx_destruct;
- (void)registerCallbackForIDSMessages:(id /* block */)a0;
- (id)configurationVersionWithError:(id *)a0;
- (void)didReceiveCloudKitMessage:(id)a0;
- (void)didReceiveGenericMessage:(id)a0;
- (void)didReceiveIDSMessage:(id)a0;
- (void)killScreenTimeAgent:(id)a0 completionHandler:(id /* block */)a1;
- (id)localConfigurationVersionWithError:(id *)a0;
- (BOOL)postNotificationWithContext:(id)a0 error:(id *)a1;
- (BOOL)postWeeklyReportNotification:(id *)a0;
- (void)registerCallbackForCloudKitMessages:(id /* block */)a0;
- (void)registerCallbackForGenericMessages:(id /* block */)a0;
- (BOOL)removeNotificationWithContext:(id)a0 error:(id *)a1;
- (BOOL)repairBlueprintsWithError:(id *)a0;
- (BOOL)sendBlueprintChangesWithError:(id *)a0;
- (BOOL)sendBlueprintsWithError:(id *)a0;
- (BOOL)sendCheckInRequestOnV2WithError:(id *)a0;
- (BOOL)sendCheckInRequestWithError:(id *)a0;
- (BOOL)sendSettingsChangesWithError:(id *)a0;
- (BOOL)sendSettingsWithError:(id *)a0;
- (BOOL)sendUserDeviceStateWithError:(id *)a0;
- (BOOL)setLocalConfigurationVersion:(id)a0 error:(id *)a1;

@end
