@class NSObject;
@protocol OS_xpc_object;

@interface LOMDeviceClientLocal : LOMDeviceClient {
    NSObject<OS_xpc_object> *_connection;
}

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)teardownXPCConnection;
- (BOOL)setupXPCConnection;
- (BOOL)install:(id)a0 error:(out id *)a1;
- (id)sendCommand:(id)a0 error:(id *)a1;

@end
