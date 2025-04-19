@class NSXPCConnection, NSObject;
@protocol OS_os_log;

@interface MXSourceManager : NSObject <MXSourceXPCClient>

@property (retain, nonatomic) NSObject<OS_os_log> *sourceManagerLogHandle;
@property (retain, nonatomic) NSXPCConnection *connection;

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (id)_createXPCConnection;
- (id)createXPCConnectionWithTargetUID:(unsigned int)a0;
- (void)sendDiagnostic:(id)a0 forDate:(id)a1 andSourceID:(long long)a2;
- (void)sendDiagnostic:(id)a0 forDate:(id)a1 forUID:(unsigned int)a2 andSourceID:(long long)a3;
- (void)sendMetrics:(id)a0 forDate:(id)a1 andSourceID:(long long)a2;
- (void)simulatePayloadDeliveryForClient:(id)a0;

@end
